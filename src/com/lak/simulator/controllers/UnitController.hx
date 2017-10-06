package com.lak.simulator.controllers;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.Simulator;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class UnitController
{
	public static function hasTarget(n:Dynamic, me:IsoUnit):Bool{
		return (me.target == null && n.unit != me.target) ? true : false;
	}
	
	public static function enableToAttack(n:Dynamic,me:IsoUnit):Bool{
		return (n != null && n.unit != null && n.unit != me && n.unit.ownerID != me.ownerID)? true : false;
	}
	public static function reachableTarget(target:IsoUnit,me:IsoUnit):Bool{
		return (target != null && target.xmovement == 0 && target.ymovement == 0 && me.xmovement == 0 && me.ymovement == 0) ? true : false;
	}
	public static function enableToCreate(unitType:String):Bool{
		// condition de création de l'unité.
		return true;
	}
	
}