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
import motion.Actuate;
import motion.easing.Linear;
import haxe.ds.ArraySort;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class IsoUnit extends IsoObject
{
	public var nodeTab:Array<Dynamic> = new Array<Dynamic>();
	public var pCurr:Point = new Point();
	public var pEnd:Point = new Point();
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
			Actuate.tween(this,speed, {x:nodeTab[0].position.x, y:nodeTab[0].position.y}).ease(Linear.easeNone).onComplete(displacement);
		}else{ 
			trace(" NO NODE IN unit.nodeTab ");
			hasPath = false;
		}
	}
	function cost(direction:String):Float{
		var score = 0;
		/*if (direction == "N" ) score =  ;
		else if (direction == "NE") score = 48 ;
		else if (direction == "E")  score = 96
		else if (direction == "SE")  score = 144 ;
		else if (direction == "S")  score = 96
		else if (direction == "SW") score = 144;
		else if (direction == "W") score = -96;
		else if (direction == "NW") score = 144;*/
		return score;
	}
		
	/*
	 * @funcname update (function de mise à jour globale de l'unité) 
	 */
	override public function update(delta:Int){
		if(spriteSheet.currentBehavior.name != currentAction + "_" + phase){ this.spriteSheet.showBehavior(currentAction + "_" + phase); }
		spriteSheet.update(delta);
	}
	private function displacement(){
		
		pCurr = nodeTab[0].position;
		addUnitToNodeFromPos(nodeTab[0]);
		if (pCurr == pEnd){
			hasPath = false;
			currentAction = "stay";
		}else{
			if (ptarget != null){ pEnd = ptarget; }
			parentNode = nodeTab[0];
			checkLineOfSight();
			Astar.findPath(this); 
		}
	}
	public function checkLineOfSight(){
		if (!hasPath){
			if (target == null){
				nodechecking = IsoUtils.spiralSearch(IsoUtils.pxToPos(pCurr), tilesCheckNumber);
				for (i in 0...nodechecking.length){
					currPt = nodechecking[i];
					n = LevelManager.instance.getNodeAt(Std.int(currPt.x), Std.int(currPt.y));
					if(n != null && n.unit != null && n.unit != this && n.unit.ownerID != ownerID){ target = n.unit; }
				}
			}else{
				if (!target.hasPath){
					var dx:Int = Math.floor(GameUtils.dx(target.pCurr, pCurr) / Config.TILE_WIDTH);
					var dy:Int = Math.floor(GameUtils.dy(target.pCurr, pCurr) / Config.TILE_HEIGHT);
					if (dx == 0 && dy == 0){
						//lookAtFromAngle(GameUtils.getPositionAngle(target.pCurr,pCurr));
						//trace(LevelManager.instance.facingTo(target));
						lookAtDir(LevelManager.instance.facingTo(this,target));
						currentAction = "attack";
					}else{
						if (dx > los || dy > los ){ 
							target = null; 
						}else{
							var nd:Dynamic = LevelManager.instance.closestNodeFromPoint(IsoUtils.pxToPos(target.pCurr),pCurr);
							if (nd != null){ goTo(nd.position); }
						}
					}
				}else{
					currentAction = "stay";
				}
			}
		}
	}
	public function addUnitToNodeFromPos(n:Dynamic):Void{
		if (lastNode != null){ lastNode.unit = null; }
		n.unit = this;
		lastNode = n; 
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