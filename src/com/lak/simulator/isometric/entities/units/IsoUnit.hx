package com.lak.simulator.isometric.entities.units;

import com.lak.simulator.isometric.entities.IsoObject;
import com.lak.simulator.isometric.world.IsoWorld;
import openfl.geom.Point;
import openfl.events.Event;

import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.core.utils.GameUtils;
import com.lak.simulator.algorithm.Astar;

import spritesheet.AnimatedSprite;
import com.lak.simulator.renderers.GraphicRenderer;
import com.lak.core.managers.LevelManager;
import com.lak.simulator.data.GameData;

import haxe.ds.ArraySort;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class IsoUnit extends IsoObject
{
	public var nodeTab:Array<Dynamic>;
	public var pCurr:Point = new Point();
	private var pEnd:Point = new Point();
	private var tempNode:Dynamic;
	public var lastNode:Dynamic;
	public var xmovement:Int = 0;
	public var ymovement:Int = 0;
	public var unitType:String = "";
	public var parentNode:Dynamic;
	public var ptarget:Point;
	private var tempPt:Point;
	public var hasPath:Bool = false;
	public var target:IsoUnit;
	public var position:Point = new Point();
	private var targetNodeTab:Array<Dynamic> = new Array<Dynamic>();
	private var distEnd:Float;
	private var los:Int;
	private	var tilesCheckNumber:Int;
	private	var nodePos:Point;
	private	var n:Dynamic;
	private	var currPt:Point;
	private	var nodechecking:Array<Point>;
	private var distToTarget:Int = 1000;
	/*
	 * Constructeur
	 * Classe qui représente un élément unité
	 */
	public function new() 
	{
		super();
	}
	
	public function init(civ:String,un:String){
		unitType = un;
		spriteSheet = new AnimatedSprite(Main.instance.sprSheetManager.getSpritesheet(civ, un));
		addChild(spriteSheet);
		addEventListener(Event.CHANGE, onStateChange);
		los = GameData.instance.unitsDesc[unitType].lineOfSight;
		tilesCheckNumber = Std.int(Math.pow(((2 * los) + 1), 2))+1;
	}
	/*
	 *  @funcname goTo (definir le point de destination de l'unité pour faire une recherche AStar)
	 * 	@arg targetPoint:Point
	 *  @event ajout du listener de l'evènement généré par la classe AStar lorsque l'algorithme est executé.
	 */
	public function goTo(targetpt:Point){
		if (!hasPath){
			ptarget = null;
			pEnd = targetpt;
			position.x = x;
			position.y = y;
			pCurr = IsoUtils.posToPx(IsoUtils.pxToPos(position));
			Astar.findPath(this);
		}else{
			ptarget = targetpt; 
		}
	}
	/*
	 * @funcname onStateChange (listener de l'évènement générer par la classe Astar lorsque la recherche est terminée ).
	 */
	function onStateChange(e:Event):Void{
		if(nodeTab.length > 0){ 
			for (i in 0...nodeTab.length){
				nodeTab[i].g = cost(nodeTab[i].direction);
				nodeTab[i].h = Astar.heuristic(nodeTab[i].position, pEnd);
				nodeTab[i].f = nodeTab[i].g + nodeTab[i].h;
			}
			ArraySort.sort(nodeTab, GameUtils.sortByF);
			hasPath = true;
			lookAtDir(nodeTab[0].direction);
			currentAction = "walk";
		}else{ 
			trace(" NO NODE IN unit.nodeTab ");
			hasPath = false;
		}
	}
	function cost(direction:String):Int{
		//var score = 0;
		/*if (direction == "N" 
			|| direction == "E" 
			|| direction == "S" 
			|| direction == "W") score = 0;*/
		return 0;
	}
		
	/*
	 * @funcname update (function de mise à jour globale de l'unité) 
	 */
	override public function update(delta:Int){
		if(spriteSheet.currentBehavior.name != currentAction + "_" + phase){ this.spriteSheet.showBehavior(currentAction + "_" + phase); }
		if (hasPath) move();
		spriteSheet.update(delta);
	}
	public function move():Void
	{
		if (xmovement < Config.TILE_WIDTH && ymovement < Config.TILE_HEIGHT){
			moveAtDir(nodeTab[0].direction);
		}else{
			
			xmovement = 0;
			ymovement = 0;
			
			pCurr = IsoUtils.posToPx(IsoUtils.pxToPos(position));
			distEnd = Math.floor(GameUtils.distanceBetweenPt(pEnd, pCurr));
			
			
			addUnitToNodeFromPos();
			
			if (distEnd == 0){
				hasPath = false;
				currentAction = "stay";
			}else{
				if (ptarget != null){ pEnd = ptarget; }
				parentNode = nodeTab[0];
				Astar.findPath(this); 
			}			
		}
	}
	public function checkLineOfSight(){
		
		nodePos = IsoUtils.pxToPos(pCurr);
		nodechecking = IsoUtils.spiralSearch(nodePos, tilesCheckNumber);
		
		for (i in 0...nodechecking.length){
			currPt = nodechecking[i];
			n = LevelManager.instance.getNodeAt(Std.int(currPt.x), Std.int(currPt.y));
			if(n != null && n.unit != null && n.unit != this && n.unit.ownerID != ownerID){
				if (target == null && n.unit != target){ target = n.unit; }
			}
			if (Std.is(target, IsoUnit) && target.xmovement == 0 && target.ymovement == 0){
				distToTarget = Math.floor(GameUtils.distanceBetweenPt(target.pCurr, pCurr) / Config.TILE_WIDTH);
				if (distToTarget == 0){
					hasPath = false;
					currentAction = "attack";
				}else{
					if (distToTarget > los){ target = null; }
					else{
						targetNodeTab = LevelManager.instance.getPointAdjacentNodes(IsoUtils.pxToPos(target.pCurr));
						if (targetNodeTab.length > 0 ){ goTo(targetNodeTab[0].position); }
					}
				}
			}
		}
	}
	public function addUnitToNodeFromPos():Void{
		tempPt = IsoUtils.pxToPos(position,true);
		if (lastNode != null && lastNode.unit == this){ lastNode.unit = null; }
		tempNode = LevelManager.instance.getNodeAt(Std.int(tempPt.x),Std.int(tempPt.y));
		if (tempNode != null){ tempNode.unit = this;lastNode = tempNode; }
	}
	public function moveAtDir(lookdir:String){
		
		if (nodeTab[0].direction == "N"){ y -= speed >> 1; ymovement += speed >> 1; }
		else if (nodeTab[0].direction == "NE"){ x += speed; y -= speed >> 1; xmovement += speed; ymovement += speed >> 1; }
		else if (nodeTab[0].direction == "E"){ x += speed; xmovement += speed; }
		else if (nodeTab[0].direction == "SE"){ x += speed; y += speed >> 1; xmovement += speed; ymovement += speed >> 1; }
		else if (nodeTab[0].direction == "S"){ y += speed >> 1; ymovement += speed >> 1; }
		else if (nodeTab[0].direction == "SW"){ x -= speed; y += speed >> 1; xmovement += speed; ymovement += speed; }
		else if (nodeTab[0].direction == "W"){ x -= speed; xmovement += speed; }
		else if (nodeTab[0].direction == "NW"){ x -= speed;y -= speed >>1;xmovement += speed;ymovement += speed; }
		
		position.x = x;
		position.y = y;
		
		lookAtDir(lookdir);
	}
	public function lookAtDir(lookdir:String):Void{
		if (lookdir == "N"){ phase = "U";scaleX = scale; }
		else if (lookdir == "NE"){ phase = "UL";scaleX = -scale; }
		else if (lookdir == "E"){ phase = "L";scaleX = -scale; }
		else if (lookdir == "SE"){ phase = "DL";scaleX = -scale; }
		else if (lookdir == "S"){ phase = "D";scaleX = scale; }
		else if (lookdir == "SW"){ phase = "DL";scaleX = scale; }
		else if (lookdir == "W"){ phase = "L";scaleX = scale; }
		else if (lookdir == "NW"){ phase = "UL"; scaleX = scale; }
		else{ return null; }
		if (spriteSheet.currentBehavior.name != currentAction + "_" + phase) this.spriteSheet.showBehavior(currentAction + "_" + phase);
	}
}