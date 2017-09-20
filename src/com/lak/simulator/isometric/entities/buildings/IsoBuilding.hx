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
	
	public function init(civ:String,un:String){
		spriteSheet = new AnimatedSprite(Main.instance.sprSheetManager.getSpritesheet(civ, un));
		scaleX = scaleY = .75;
		addChild(spriteSheet);
	}
	
}