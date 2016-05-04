package com.lak.simulator;

import com.lak.entities.IsoUnit;
import com.lak.renderers.Renderer;
import com.lak.simulator.manager.ArmyManager;
import com.lak.simulator.manager.AttackMananger;
import com.lak.simulator.manager.EntitiesManager;
import com.lak.simulator.manager.LevelManager;
import openfl.display.DisplayObject;
import openfl.events.EventDispatcher;
import openfl.events.Event;
import spritesheet.AnimatedSprite;
import com.lak.simulator.pools.IsoUnitPool;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class Simulator extends DisplayObject
{
	var renderer:Renderer;
	public static var instance:Simulator;
	public var aKeyPress:Array<Bool> = new Array<Bool>();
	public var entitiesManager:EntitiesManager;
	public var attackMananger:AttackMananger;
	public var armyManager:ArmyManager;
	public function new() 
	{
		super();
		IsoUnitPool.initialize(200, 100);
		instance = this;
		renderer = new Renderer();
		entitiesManager = new EntitiesManager(IsoWorld.instance);
		attackMananger = new AttackMananger(IsoWorld.instance);
		armyManager = new ArmyManager();
	}
	
	/*
	 * @funcname initilizeUnit (permet d'initialiser l'unité en definissant l'image et la civilisation)
	 * @arg assetsName (Le nom de l'image sans l'extension)
	 * @arg civ (Le nom de la civilisation par defaut mali)
	 */
	public function initilizeUnit(unitType:String,posX:Int,posY:Int):Void{
		
		var unit:IsoUnit = IsoUnitPool.getEntity();
		unit.scaleX = unit.scaleY = .8;
		
		//var unit:IsoUnit = new IsoUnit();
		var assetName:String = unitType;
		var civ:String = "mali";
		
		unit.type = "unit";
		unit.currentAction = "stay";
		unit.phase = "DL";
		
		
		unit.spriteSheet.spritesheet  = Main.instance.sprSheetManager.getSpritesheet(civ, assetName);
		unit.spriteSheet.showBehavior(unit.currentAction + "_" + unit.phase);
		unit.spriteSheet.x = -Std.int(unit.spriteSheet.width+unit.spriteSheet.bitmap.x)*.7;
		unit.spriteSheet.y = -Std.int(unit.spriteSheet.height +unit.spriteSheet.bitmap.y)*.85;
		unit.addChild(unit.spriteSheet);
		
		unit.x = posX;
		unit.y = posY;
		
		IsoWorld.instance.addChildToWorld(unit);
	}
	
	/*
	 * @funcname checkKeys @desc mouvement de la camera du world en fonction des flèches du clavier.
	 * @return Void.
	 */
	public function checkKeys():Void
    {
		  //trace(" key "+aKeyPress[38]);
         if(aKeyPress[38])
         {
			//trace("HAUT");
            IsoWorld.instance.COLONNE_VISIBLE_OFFSET--;
			IsoWorld.instance.OFFSET_COLONNE_WORLD--;
            if(IsoWorld.instance.COLONNE_VISIBLE_OFFSET < 0){ IsoWorld.instance.COLONNE_VISIBLE_OFFSET = 0; }
            if (IsoWorld.instance.OFFSET_COLONNE_WORLD < 0){ IsoWorld.instance.OFFSET_COLONNE_WORLD = 0; IsoWorld.instance.y = 0; }
			else{ IsoWorld.instance.y+=IsoWorld.instance.tileW; }
			
         }
         if(aKeyPress[40])
         {
			// trace("BAS");
            IsoWorld.instance.COLONNE_VISIBLE_OFFSET++;
			IsoWorld.instance.OFFSET_COLONNE_WORLD++;
			 
			if(IsoWorld.instance.COLONNE_VISIBLE_OFFSET > IsoWorld.instance.PART_NUM_TILE_W - IsoWorld.instance.NB_TILE_W){ IsoWorld.instance.COLONNE_VISIBLE_OFFSET = IsoWorld.instance.PART_NUM_TILE_W - IsoWorld.instance.NB_TILE_W; }
			if(IsoWorld.instance.OFFSET_COLONNE_WORLD > IsoWorld.instance.NB_LIGNE_WORLD - IsoWorld.instance.NB_TILE_W){ IsoWorld.instance.OFFSET_COLONNE_WORLD = IsoWorld.instance.NB_LIGNE_WORLD - IsoWorld.instance.NB_TILE_W; }
			if (IsoWorld.instance.OFFSET_COLONNE_WORLD >= 900){ IsoWorld.instance.OFFSET_COLONNE_WORLD = 900; IsoWorld.instance.y = 90000; }
			else{ IsoWorld.instance.y -= IsoWorld.instance.tileW; }
         }
         if(aKeyPress[37])
         {
			// trace("GAUCHE");
            IsoWorld.instance.LIGNE_VISIBLE_OFFSET--;
			IsoWorld.instance.OFFSET_LIGNE_WORLD--;
            if(IsoWorld.instance.LIGNE_VISIBLE_OFFSET < 0){ IsoWorld.instance.LIGNE_VISIBLE_OFFSET = 0; }
            if (IsoWorld.instance.OFFSET_LIGNE_WORLD < 0){ IsoWorld.instance.OFFSET_LIGNE_WORLD = 0; IsoWorld.instance.x = 0; }
			else{ IsoWorld.instance.x += IsoWorld.instance.tileW; }
         }
         if(aKeyPress[39])
         {
			// trace("DROITE");
			IsoWorld.instance.LIGNE_VISIBLE_OFFSET++;
			IsoWorld.instance.OFFSET_LIGNE_WORLD++;
			if(IsoWorld.instance.LIGNE_VISIBLE_OFFSET > IsoWorld.instance.PART_NUM_TILE_H - IsoWorld.instance.NB_TILE_H){ IsoWorld.instance.LIGNE_VISIBLE_OFFSET = IsoWorld.instance.PART_NUM_TILE_H - IsoWorld.instance.NB_TILE_H; }
			if(IsoWorld.instance.OFFSET_LIGNE_WORLD > IsoWorld.instance.NB_COLONNE_WORLD - IsoWorld.instance.NB_TILE_H){ IsoWorld.instance.OFFSET_LIGNE_WORLD = IsoWorld.instance.NB_COLONNE_WORLD - IsoWorld.instance.NB_TILE_H; }
			if (IsoWorld.instance.OFFSET_LIGNE_WORLD >= 900){ IsoWorld.instance.OFFSET_LIGNE_WORLD = 900; IsoWorld.instance.x = 90000; }
			else{ IsoWorld.instance.x -= IsoWorld.instance.tileW; }
         }
    }
	
	public function checkForSelection():Void
	{
		for(obj in IsoWorld.instance.worldObject)
		{
			if(Std.is(obj,IsoUnit) && obj.visible && Renderer.instance.selectionSprt.selectionRect.contains(obj.x,obj.y)/*&& obj.isLive && obj.owner == joueur.properties.username && onRect(obj.x,obj.y) == 1*/)
			{
				Renderer.instance.createEllipse(obj, 0xFF00FF);
				armyManager.selectUnit(cast(obj,IsoUnit));
			}
		}
	}
	
	public function run(delta:Int){
		renderer.run(delta);
		checkKeys();
		entitiesManager.run(delta);
		attackMananger.run(delta);
	}
	
}