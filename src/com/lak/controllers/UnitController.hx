package com.lak.controllers;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.Simulator;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class UnitController
{
	
	public static function create(unitType:String, posX:Int=0, posY:Int=0){ 
		Simulator.instance.initilizeUnit(unitType,posX,posY);
	}
	
	public static function attack(unit:IsoUnit){ 
		
	}
	
	public static function walk(unit:IsoUnit){ 
		
	}
	
	public static function die(unit:IsoUnit){ 
		
	}
	
}