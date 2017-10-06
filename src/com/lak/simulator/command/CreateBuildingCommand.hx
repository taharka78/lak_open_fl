package com.lak.simulator.command;

import com.lak.simulator.isometric.entities.buildings.IsoBuilding;
import com.lak.simulator.controllers.BuildingController;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.pools.IsoBuildingPool;
import openfl.geom.Point;
import com.lak.simulator.isometric.utils.IsoUtils;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class CreateBuildingCommand 
{
	private static var bpos:Point = new Point();
	private static var b:IsoBuilding;
	
	public static function execute(type:String, pt:Point){
		if (BuildingController.enableToPlace(pt,type)){
			b = IsoBuildingPool.getEntity();
			b.init("mali", type);
			
			bpos = IsoUtils.posToPx(new Point(pt.x, pt.y));	
			
			b.x = bpos.x;
			b.y = bpos.y;
			
			b.spriteSheet.showBehavior("construct");
			IsoWorld.instance.addChildToWorld(b);
		}
	}
	
}