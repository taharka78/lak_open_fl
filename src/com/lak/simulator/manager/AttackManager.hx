package com.lak.simulator.manager;
import com.lak.core.managers.LevelManager;
import com.lak.simulator.isometric.grid.Node;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.isometric.entities.IsoObject;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.simulator.data.GameData;
import openfl.geom.Point;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class AttackManager
{
	private var world:IsoWorld;
	/*
	 * AttackMananger __CONSTRUCTOR__ @descClasse qui va gérer toutes les actions d'attaque.
	 * @arg _world @type IsoWorld @desc instance de IsoWorld.
	 */
	public function new(_world:IsoWorld){
		world = _world;
	}
	public function run(delta){
		getClosestEnemy();
	}
	private function getClosestEnemy(){
		var unit:IsoUnit;
		for (i in 0...world.worldObject.length){
			if (Std.is(world.worldObject[i], IsoUnit)){
				unit = cast(world.worldObject[i], IsoUnit);
				checkLineOfSight(unit);
			}
		}
	}
	private function checkLineOfSight(unit:IsoUnit){
		var los:Int = GameData.instance.unitsDesc[unit.unitType].lineOfSight;
		var tilesCheckNumber:Int = Std.int(Math.pow(((2 * los) + 1), 2))+1;
		var nodePos:Point = IsoUtils.pxToPos(new Point(unit.x, unit.y));
		var nodechecking:Array<Point> = IsoUtils.spiralSearch(nodePos, tilesCheckNumber);
		var n:Dynamic;
		var currPt:Point;
		for (i in 0...nodechecking.length){
			currPt = nodechecking[i];
			n = LevelManager.instance.getNodeAt(Std.int(currPt.x), Std.int(currPt.y));
			if (n != null && n.unit != null){
				
				/*n.index = 1;		
				n.ndType = "rtees";
				n.selected = true;*/
				break;
			}
		}
	}
	/*
	 * @funcname  manageAttack fonction de gestion des attaques des objets iso.
	 * @arg obj @type IsoObject
	 * @return Void.
	 */
	public function manageAttack(obj:IsoObject){
		if(obj.isLive == true){
					
		}
	}
	
}