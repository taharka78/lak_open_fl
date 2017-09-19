package com.lak.simulator.isometric.entities.units.events;
import openfl.events.Event;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class UnitEvent extends Event
{
	inline public static var CREATE:String = "create"; 
	inline public static var MOVE:String = "move";
	inline public static var DIE:String = "die";
	inline public static var ATTACK:String = "attack";
	inline public static var WALK:String = "walk";
	
	public var dataObj:Dynamic;
	public function new(type:String, _dataObj:Dynamic = null) 
	{
		dataObj = _dataObj;
		super(type,false,false);
	}
	override public function clone():Event{ 
		return new UnitEvent(type,dataObj); 
	}
}