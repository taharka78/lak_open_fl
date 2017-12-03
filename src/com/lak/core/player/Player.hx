package com.lak.core.player;

import com.lak.network.IMessage;
import networking.Network;
import networking.sessions.Session;
import networking.utils.NetworkMode;
import networking.utils.NetworkEvent;
import com.lak.network.MessageHandler;
import com.lak.network.MessageIdentifiers;

/**
 * ...
 * @author Moussa & Sissoko
 */
class Player extends MessageHandler
{
	public var teamID:Int;
	public var realmID:Int;
	public var civ:Int;
	public var name:String;
	private var clientSession:Session;
	
	public function new() 
	{
		
	}
	
	public function connect(host:String, port:UInt){
		clientSession = Network.registerSession(CLIENT, {
			ip: host,
			port: port
		});
		
		clientSession.addEventListener(NetworkEvent.MESSAGE_RECEIVED, function(e: NetworkEvent) {
			var message:IMessage = MessageHandler.getRegisteredMessage(e.data.idMsg);
			message.updateMessageData(e.data);
		});

		clientSession.start();
	}
	
	public function disconnect(){
		clientSession.stop();
	}
	
	
}