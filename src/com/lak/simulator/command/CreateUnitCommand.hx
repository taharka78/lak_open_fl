package com.lak.simulator.command;

import com.lak.simulator.Simulator;
import com.lak.simulator.controllers.UnitController;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.pools.IsoUnitPool;
import com.lak.core.managers.LevelManager;
import com.lak.simulator.isometric.utils.IsoUtils;
import openfl.geom.Point;
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
	public static function execute(unitType:String,ownerID:String, posX:Int = 96, posY:Int = 96 ){ 
		if (UnitController.enableToCreate(unitType)){
			
			var unit:IsoUnit = IsoUnitPool.getEntity();
			unit.init("mali", unitType);
			unit.scaleX = unit.scaleY = .75;
			unit.ownerID = ownerID;
			unit.type = "unit";
			unit.currentAction = "stay";
			unit.phase = "DL";
			
			unit.spriteSheet.showBehavior(unit.currentAction + "_" + unit.phase);
			unit.spriteSheet.x = -Std.int(unit.spriteSheet.width+unit.spriteSheet.bitmap.x)*.7;
			unit.spriteSheet.y = -Std.int(unit.spriteSheet.height +unit.spriteSheet.bitmap.y) * .85;
			
			unit.x = unit.position.x = posX;
			unit.y = unit.position.y = posY;
			
			var pos:Point = IsoUtils.pxToPos(unit.position);
			var n:Dynamic = LevelManager.instance.getNodeAt(Std.int(pos.x), Std.int(pos.y));
			if (n != null){ 
				n.unit = unit;
				unit.pCurr = n.position;
				unit.parentNode = n;
				//IsoUtils.debugTile(n);
			}
			else{
				
				trace("no node at the position" + pos);
			}
			
			IsoWorld.instance.addChildToWorld(unit);
			unit.addUnitToNodeFromPos(n);
		}
	}
	
}