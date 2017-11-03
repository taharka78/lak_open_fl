package com.lak.simulator.manager;
import com.lak.core.managers.LevelManager;
import com.lak.simulator.isometric.grid.Node;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.isometric.entities.IsoObject;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.simulator.data.GameData;
import com.lak.controllers.MoveController;
import openfl.geom.Point;
import com.lak.simulator.isometric.entities.units.ai.AttackAI;
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