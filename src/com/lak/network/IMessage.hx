package com.lak.network;

import networking.sessions.Session;
import com.lak.network.MessageIdentifiers.MessageId;
import openfl.utils.ByteArray;
/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
interface IMessage 
{
	private var id:UInt;
	
	public function updateMessageData(b:ByteArray):Void;
	 
	public function onReceive():Void;

	public function send():Void;
}