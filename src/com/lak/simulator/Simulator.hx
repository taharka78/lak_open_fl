package com.lak.simulator;

import com.lak.simulator.data.GameData;
import com.lak.simulator.isometric.Config;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.renderers.GraphicRenderer;
import com.lak.simulator.gamestate.IGameState;
import com.lak.simulator.manager.ArmyManager;
import com.lak.simulator.manager.AttackManager;
import com.lak.simulator.manager.EntitiesManager;
import com.lak.core.managers.LevelManager;
import openfl.display.DisplayObject;
import openfl.events.EventDispatcher;
import openfl.events.Event;
import spritesheet.AnimatedSprite;
import com.lak.simulator.pools.IsoUnitPool;
import com.lak.simulator.pools.IsoBuildingPool;
import com.lak.simulator.handler.InputHandler;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class Simulator extends DisplayObject
{
	public var renderer:GraphicRenderer;
	public static var instance:Simulator;
	public var aKeyPress:Array<Bool> = new Array<Bool>();
	public var entitiesManager:EntitiesManager;
	public var attackManager:AttackManager;
	public var armyManager:ArmyManager;
	public var gameData:GameData;
	public var state:IGameState;
	private var tempUnit:IsoUnit;
	public function new() 
	{
		super();
		
		IsoUnitPool.initialize(200, 100);
		IsoBuildingPool.initialize(50, 10);
		instance = this;
		
		renderer = new GraphicRenderer();
		entitiesManager = new EntitiesManager();
		attackManager = new AttackManager();
		armyManager = new ArmyManager();
		gameData = new GameData();
	}
		
	public function checkForSelection():Void
	{
		for(obj in IsoWorld.instance.worldObject)
		{
			if(Std.is(obj,IsoUnit) /*&& obj.isLive && obj.owner == joueur.properties.username && onRect(obj.x,obj.y) == 1*/)
			{
				tempUnit = cast(obj, IsoUnit);
				if (obj.visible && GraphicRenderer.instance.selectionSprt.selectionRect.contains(tempUnit.x, tempUnit.y) && tempUnit.ownerID == "1"){
					GraphicRenderer.instance.createEllipse(obj, 0xFF00FF);
					armyManager.selectUnit(tempUnit);
					
				}				
				
			}
		}
	}
	
	public function run(delta:Int){
		renderer.run(delta);
		InputHandler.checkKeys(aKeyPress);
		entitiesManager.run(delta);
		attackManager.run(delta);
	}
	
}