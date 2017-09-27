/**
 * ---------------------------------------------------------------------------
 *   Copyright (C) 2008 0x6e6562
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 * ---------------------------------------------------------------------------
 **/
package org.amqp;

    import openfl.events.Event;
    import openfl.events.IOErrorEvent;
    import openfl.events.ProgressEvent;
    import openfl.events.SecurityErrorEvent;
    //import openfl.Vector;
    import openfl.utils.ByteArray;

    import haxe.io.Bytes;

    import org.amqp.error.ConnectionError;
    import org.amqp.impl.ConnectionStateHandler;
    import org.amqp.impl.SessionImpl;
    import org.amqp.io.SocketDelegate;

    // not supporting for now
    //import org.amqp.io.TLSDelegate;

    import org.amqp.methods.connection.CloseOk;

    class Connection {

        inline static var CLOSED:Int = 0;
        inline static var CONNECTING:Int = 1;
        inline static var CONNECTED:Int = 2;

        var currentState:Int ;
        var shuttingDown:Bool ;
        var delegate:SocketDelegate;
        var session0:Session;
        var connectionParams:ConnectionParameters;
        public var sessionManager:SessionManager;
        public var frameMax:Int ;

        public var receiving:Bool;
        public var frameBuffer:ByteArray;
        public var errorh:Void->Void;

        public function new(state:ConnectionParameters) {
            
            currentState = CLOSED;
            shuttingDown = false;
            frameMax = 0;

            connectionParams = state;

            var stateHandler:ConnectionStateHandler = new ConnectionStateHandler(state);

            session0 = new SessionImpl(this,0, stateHandler);
            stateHandler.registerWithSession(session0);


            sessionManager = new SessionManager(this);

            if (state.useTLS) {
                //delegate = new TLSDelegate();
                throw new Error("TLS not supported at this time");
            } else {
                delegate = new SocketDelegate();
            }

            delegate.addEventListener(Event.CONNECT, onSocketConnect);
            delegate.addEventListener(Event.CLOSE, onSocketClose);
            delegate.addEventListener(IOErrorEvent.IO_ERROR, onSocketError);
            delegate.addEventListener(ProgressEvent.SOCKET_DATA, onSocketData);
            delegate.addEventListener(SecurityErrorEvent.SECURITY_ERROR, onSocketSecurityError);

            receiving = false;
            frameBuffer = new ByteArray();
            frameBuffer.position = 0;
			trace("new");
        }

        public function getBaseSession():Session {
            return session0;
        }

        public function start():Void {
            if (currentState < CONNECTING) {
                currentState = CONNECTING;
                delegate.open(connectionParams);
            }
        }

        public function isConnected():Bool {
            return delegate.isConnected();
        }


        public function onSocketConnect(event:Event):Void {
            currentState = CONNECTED;
			trace("socket connected");
            var header = AMQP.generateHeader();
            delegate.writeBytes(header, 0, header.length);
            delegate.flush();
       }


        public function onSocketClose(event:Event):Void {
            currentState = CLOSED;
			trace("socket closed");
            handleForcedShutdown();
        }

        public function onSocketError(event:Event):Void {
            currentState = CLOSED;
            //delegate.dispatchEvent(new ConnectionError());
            trace("connection error "+event);
            if(errorh != null) {
                errorh();
            }
        }
		
        public function onSocketSecurityError(event:SecurityErrorEvent):Void {
			trace("Socket security error "+event);
            errorh();
        }

        public function close(?reason:Dynamic = null):Void {
            if (!shuttingDown) {
                if (delegate.isConnected()) {
                    handleGracefulShutdown();
                }
                else {
                    handleForcedShutdown();
                }
            }
			trace("Socket closed");
        }

        /**
         * Socket timeout waiting for a frame. Maybe missed heartbeat.
         **/
        public function handleSocketTimeout():Void {
            handleForcedShutdown();
        }

        function handleForcedShutdown():Void {
            if (!shuttingDown) {
                shuttingDown = true;
                sessionManager.forceClose();
                session0.forceClose();
            }
        }

        function handleGracefulShutdown():Void {
            if (!shuttingDown) {
                //trace("handleGracefulShutdown");
                shuttingDown = true;
                sessionManager.closeGracefully();
                session0.closeGracefully();
                //trace("sessionManager, session0 closed");
            }
        }

        /**
         * This parses frames from the network and hands them to be processed
         * by a frame handler.
         **/
        public function onSocketData(event:ProgressEvent):Void {
            try{ 
                delegate.readBytes(frameBuffer, frameBuffer.position + frameBuffer.bytesAvailable, delegate.bytesAvailable); 
                
                var frame:Frame = null;
                do {
                    frame = parseFrame(frameBuffer);
                    if(frame != null) {
                        if (frame.type == AMQP.FRAME_HEARTBEAT) {
                            // just ignore this for now
                        } else if (frame.channel == 0) {
                            session0.handleFrame(frame);
                        } else {
                            var session:Session = sessionManager.lookup(frame.channel);
                            session.handleFrame(frame);
                        }
                    }
                } while(frameBuffer.bytesAvailable > 0 && frame != null);
                
                if(frameBuffer.bytesAvailable < frameBuffer.length) {
                    //trace("truncate the frameBuffer available: "+frameBuffer.bytesAvailable+" length: "+frameBuffer.length);
                    var b = frameBuffer;
                    frameBuffer = new ByteArray();
                    b.readBytes(frameBuffer, 0, b.bytesAvailable);
                }
            } catch (err:Dynamic) {
                if(Std.is(err, haxe.io.Eof)) {
                    trace("end of stream");
                } else {
                    throw (err+" this should be logged and reported!");
                }
            }
        }
        
        function parseFrame(b:ByteArray):Frame {
            var frame:Frame = new Frame();
            return frame.readFrom(b) ? frame : null;
        }

        public function sendFrame(frame:Frame):Void {
            if (delegate.isConnected()) {
                frame.writeTo(delegate);
                delegate.flush();
            } else {
                throw new Error("Connection main loop not running");
            }
        }

        public function addSocketEventListener(type:String, listener:Dynamic):Void {
            delegate.addEventListener(type, listener);
        }

        public function removeSocketEventListener(type:String, listener:Dynamic):Void {
            delegate.removeEventListener(type, listener);
        }
		
        function maybeSendHeartbeat():Void {}
    }

