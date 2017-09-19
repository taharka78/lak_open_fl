package com.lak.simulator.isometric.world.events;

import openfl.events.Event;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class MapEvent extends Event
{
	inline public static var SETUP_WORLD = "setupWorld";
	inline public static var INIT = "init";
	public var dataObj:Dynamic;
	
	public function new(ype:String, _dataObj:Dynamic = null) 
	{
		dataObj = _dataObj;
		super(type, false, false);
	}
	override public function clone():Event{ 
		return new MapEvent(type, dataObj); 
	}
}