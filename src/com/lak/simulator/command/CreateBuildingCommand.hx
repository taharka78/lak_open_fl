package com.lak.simulator.command;

import com.lak.simulator.isometric.entities.buildings.IsoBuilding;
import com.lak.simulator.controllers.BuildingController;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.pools.IsoBuildingPool;
import openfl.geom.Point;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class CreateBuildingCommand 
{
	public static function execute(type:String, pt:Point){
		if (BuildingController.enableToPlace(pt,type)){
			var b:IsoBuilding = IsoBuildingPool.getEntity();
			b.init("mali", type);
			b.x = pt.x;
			b.y = pt.y;
			b.spriteSheet.showBehavior("construct");
			IsoWorld.instance.addChildToWorld(b);
		}
	}
	
}