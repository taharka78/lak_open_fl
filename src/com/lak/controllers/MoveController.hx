package com.lak.controllers;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.Simulator;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class MoveController
{
	
	public static function isReachable(actor:IsoUnit,n:Dynamic):Bool{ 
		return (n.walkable != false && actor.lastNode != n &&  n.unit == null) ? true : false;
	}
	public static function nodeExist(n:Dynamic):Bool{
		return (n != null) ? true : false ;
	}
	public static function nodeHasUnit(n:Dynamic):Bool{
		return (n.unit != null) ? true : false;
	}
	public static function unitMoving(unit:IsoUnit):Bool{
		return (unit.xmovement == 0 && unit.ymovement == 0) ? false : true;
	}
}