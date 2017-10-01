package com.lak.network;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class MessageHandler 
{
	private static var msgMap:Map<UInt, IMessage> = new Map<UInt, IMessage>();
	
	public static function registerNewMessage(id:UInt, msg:IMessage):Void
	{
		msgMap.set(id, msg);
	}
	
	public static function getRegisteredMessage(id:UInt):IMessage{
		return msgMap.get(id);
	}
	
}