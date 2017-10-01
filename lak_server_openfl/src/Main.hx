import neko.Lib;
import networking.Network;
import networking.sessions.items.ClientObject;
import networking.utils.NetworkMode;
import networking.utils.NetworkEvent;
import openfl.display.Sprite;
import openfl.utils.ByteArray;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class Main extends Sprite
{
	public var serverIp:String = '127.0.0.1';
	public var hostPort:UInt = 8888;
	
	public function new() 
	{
		super();
		trace( "Server started at " + serverIp + " port " + hostPort );
		var server = Network.registerSession(NetworkMode.SERVER, {
		  ip: serverIp,
		  port: hostPort,
		  max_connections: 4
		});
		
		server.addEventListener(NetworkEvent.CONNECTED, function(e: NetworkEvent) {
		  trace("new client");
		  var connected_client:ClientObject = e.client;
		  connected_client.send({ idMsg: 1, unitsInfo: [{playerId: "lol", id: "lpl", x: 5, y:6},
														{playerId: "lcl", id: "lvl", x: 47, y:20}] });
		});
		
		server.start();
	}
	
}