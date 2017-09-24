package com.lak.simulator.isometric.entities.buildings;

import com.lak.simulator.isometric.entities.IsoObject;
import spritesheet.AnimatedSprite;
import com.lak.simulator.data.GameData;
/**
 * ...
 * @author ...
 */
class IsoBuilding extends IsoObject
{
	public var shape:Array<Int>;
	
	public function new() 
	{
		super();
	}
	
	public function init(civ:String,type:String){
		spriteSheet = new AnimatedSprite(Main.instance.sprSheetManager.getSpritesheet(civ, type));
		this.type = type;
		var offset = GameData.instance.getBuildingData(type).offset;
		spriteSheet.x = -offset.x;
		spriteSheet.y = -offset.y;
		addChild(spriteSheet);
	}
	
}