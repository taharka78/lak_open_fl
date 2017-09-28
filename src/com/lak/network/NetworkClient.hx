package com.lak.network;

/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
    import sys.net.Socket;
    import sys.net.Host;
    import haxe.io.Bytes;
    import haxe.io.Bytes.ofString;
    import sys.net.Address;


    class NetworkClient{
      public var socket:Socket = new Socket();

      public function new(){
          socket.setFastSend(true);
          socket.setBlocking(false);
      }

      public function acceptConnection():Void{
        var host:Host = new Host(Host.localhost());
        var port = 8080;
        while (true){
            try{
                socket.connect(host,port);
                trace("Client Connected");
                break;
            } catch (err:Dynamic){
                trace("Cannot Connect Client to Server.");
            }
        }
      }

      public function readValue():Void{
        for (i in 0...100){
          	try{
       	    	var l = socket.input.readLine();
    	      	trace(l);
          	} catch (err:Dynamic){
               //trace("none to grab");
          	}
    	}
      }
	}