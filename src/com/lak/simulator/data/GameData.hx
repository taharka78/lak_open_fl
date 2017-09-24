package com.lak.simulator.data;

import com.lak.services.GameService;
/**
 * ...
 * @author Moussa & Sissoko
 */
class GameData 
{
	public var types:Array<Dynamic>;
	public var buildings:Array<Dynamic>;
	public var unitTypes:Array<Dynamic>;
	public var armorTypes:Array<Dynamic>;
	public var mountTypes:Array<Dynamic>;
	public static var instance:GameData;
	
	public function new(){
		instance = this;
		// appel au service récupérant les types de ressoiurces.		
		this.types = GameService.getRessourceTypes();		
		this.buildings = GameService.getBuildingOptions();
		this.unitTypes = GameService.getUnitsType();
		this.armorTypes = GameService.getArmorTypes();
		this.mountTypes = GameService.getMountType();
	}
	public function getBuildingData(name:String):Dynamic{
		for ( i in 0...this.buildings.length){
			if (this.buildings[i].name == name ){
				return this.buildings[i];
			}
		}
		return null;
	}
	
}