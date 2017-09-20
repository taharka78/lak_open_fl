package com.lak.simulator.command;

import com.lak.simulator.Simulator;
import com.lak.simulator.controllers.UnitController;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.pools.IsoUnitPool;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class CreateUnitCommand 
{
	/*
	 * @funcname initilizeUnit (permet d'initialiser l'unité en definissant l'image et la civilisation)
	 * @arg assetsName (Le nom de l'image sans l'extension)
	 * @arg civ (Le nom de la civilisation par defaut mali)
	 */
	public static function execute(unitType:String, posX:Int = 100, posY:Int = 100 ){ 
		if (UnitController.enableToCreate(unitType)){
			
			var unit:IsoUnit = IsoUnitPool.getEntity();
			unit.init("mali", unitType);
			unit.scaleX = unit.scaleY = .75;
			
			unit.type = "unit";
			unit.currentAction = "stay";
			unit.phase = "DL";
			
			unit.spriteSheet.showBehavior(unit.currentAction + "_" + unit.phase);
			unit.spriteSheet.x = -Std.int(unit.spriteSheet.width+unit.spriteSheet.bitmap.x)*.7;
			unit.spriteSheet.y = -Std.int(unit.spriteSheet.height +unit.spriteSheet.bitmap.y) * .85;
			
			unit.x = posX;
			unit.y = posY;
			
			IsoWorld.instance.addChildToWorld(unit);
		}
	}
	
}