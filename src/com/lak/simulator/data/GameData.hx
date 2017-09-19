package com.lak.simulator.data;

import com.lak.services.GameService;
/**
 * ...
 * @author Moussa & Sissoko
 */
class GameData 
{
	public var types:Map<Int,String>;
	public var buildings:Dynamic;
	public var unitTypes:Map <Int,Dynamic>;
	public var armorTypes:Map<Int,Dynamic>;
	public var mountTypes:Map<Int,Dynamic>;
	public static var instance;
	
	public function new(){
		instance = this;
		// appel au service récupérant les types de ressoiurces.		
		this.types = GameService.getRessourceTypes();		
		this.buildings = GameService.getBuildingOptions();
		this.unitTypes = GameService.getUnitsType();
		this.armorTypes = GameService.getArmorTypes();
		this.mountTypes = GameService.getMountType();
	}
	
}