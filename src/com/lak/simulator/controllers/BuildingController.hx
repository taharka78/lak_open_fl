package com.lak.simulator.controllers;

import com.lak.simulator.handler.PlacementHandler;
import com.lak.simulator.command.CreateBuildingCommand;
import openfl.geom.Point;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class BuildingController 
{
	public static function enableToPlace(pos:Point,type:String):Bool{
		return PlacementHandler.canPlaceItHere(pos);
	}
}