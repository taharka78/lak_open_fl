package com.lak.network;

import openfl.utils.ByteArray;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class UnitPositionMsg implements IMessage
{		
	private var id:UInt;
	private var unitsInfo:Array<Dynamic> = new Array<Dynamic>();
	
	public function new() 
	{
		id = MessageIdentifiers.UN_POSITIONS;
	}
	
    public function updateMessageData(data:Dynamic) { 
		unitsInfo = data.unitsInfo;
		trace(unitsInfo);
	 }
	 
	 public function onReceive():Void { 
		 
	 }
	 
	 public function send():Void { 
		 
	 }
}