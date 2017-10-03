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
				if(unit.xmovement == 0 && unit.ymovement == 0){ unit.checkLineOfSight(); }
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