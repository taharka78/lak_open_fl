package com.lak.simulator.isometric.entities.buildings;

import com.lak.simulator.isometric.entities.IsoObject;
import spritesheet.AnimatedSprite;
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
		scaleX = scaleY = .75;
		addChild(spriteSheet);
	}
	
}