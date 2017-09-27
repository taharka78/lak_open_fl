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

    import openfl.errors.Error;
    import openfl.utils.ByteArray;
    import openfl.utils.IDataInput;
    import openfl.utils.IDataOutput;

    import org.amqp.error.MalformedFrameError;

    class Frame
     {

        public var type:Int;
        public var channel:Int;
        public var payloadSize:UInt;

        var payload:ByteArray;
        var accumulator:ByteArray;

        public function new() {
            payload = new ByteArray();
            accumulator = new ByteArray();
        }

        inline public function bufferCheck(buffer:ByteArray, len:UInt) {
            return (buffer.bytesAvailable >= len);
        }

        public function readFrom(input:ByteArray):Bool {

            //trace("readFrom");
            // check if there's enough in the buffer to continue
            var pos = input.position;
            if(input.bytesAvailable < 7) {  // 7 = type:1, channel:2, payloadSize:4
                input.position = pos;
                return false;
            }
            type = input.readUnsignedByte();
            //trace("type "+type);

            /*
            if (type == 'A'.charCodeAt(0)) {
                // Probably an AMQP.... header indicating a version mismatch. 
                // Otherwise meaningless, so try to read the version, and
                // throw an exception, whether we read the version okay or
                // not. 
                protocolVersionMismatch(input);
            }
            */
            channel = input.readUnsignedShort();
            //trace("channel "+channel);

            payloadSize = input.readUnsignedInt();
            //trace("type: "+type+" channel: "+channel+" payloadSize: "+payloadSize);

            if (payloadSize > 0) {
                //trace("payloadSize: "+payloadSize +" bytesAvailable:"+input.bytesAvailable);
                if(input.bytesAvailable < payloadSize + 1) { // + 1 for frameEndMarker
                    //trace("not enough bytes to complete frame");
                    input.position = pos;
                    return false;
                }
                payload = new ByteArray();
                input.readBytes(payload, 0, payloadSize);
                //trace("read payload: "+payloadSize);
            }

            accumulator = null;

            var frameEndMarker = input.readUnsignedByte();
            if (frameEndMarker != AMQP.FRAME_END) {
                throw new MalformedFrameError("Bad frame end marker: " + frameEndMarker);
            }

            return true;
        }

        function protocolVersionMismatch(input:IDataInput):Void {
            var x:Error = null;

            try {
                var gotM = input.readByte() == 'M'.charCodeAt(0);
                var gotQ = input.readByte() == 'Q'.charCodeAt(0);
                var gotP = input.readByte() == 'P'.charCodeAt(0);
                var transportHigh = input.readByte();
                var transportLow = input.readByte();
                var serverMajor = input.readByte();
                var serverMinor = input.readByte();
                
                x = new MalformedFrameError("AMQP protocol version mismatch; we are version " +
                                                AMQP.PROTOCOL_MAJOR + "." +
                                                AMQP.PROTOCOL_MINOR + ", server is " +
                                                serverMajor + "." + serverMinor +
                                                " with transport " +
                                                transportHigh + "." + transportLow);
            } catch (e:Error) {
                throw new Error("Invalid AMQP protocol header from server");
            }

            throw x;
        }

        public function finishWriting():Void {
            if (accumulator != null) {
                payload.writeBytes(accumulator, 0, accumulator.bytesAvailable);
                payload.position = 0;
                accumulator = null;
            }
        }

        /**
         * Public API - writes this Frame to the given DataOutputStream
         */
        public function writeTo(os:IDataOutput):Void {
        
            finishWriting();
            os.writeByte(type);
            os.writeShort(channel);
            os.writeInt(payload.length);
            os.writeBytes(payload);
            os.writeByte(AMQP.FRAME_END);
        }

        /**
         * Public API - retrieves the frame payload
         */
        public function getPayload():ByteArray {
            return payload;
        
        }

        /**
         * Public API - retrieves a new DataInputStream streaming over the payload
         */
        public function getInputStream():IDataInput {
            return payload;
        }

        /**
         * Public API - retrieves a fresh DataOutputStream streaming into the accumulator
         */
        public function getOutputStream():IDataOutput {
            return accumulator;
        }
    }
