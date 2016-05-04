package com.lak.simulator.manager;
import com.lak.IsoWorld;
import com.lak.entities.IsoObject;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class AttackMananger
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