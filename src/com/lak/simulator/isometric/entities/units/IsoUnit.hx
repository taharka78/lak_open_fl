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

import haxe.ds.ArraySort;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class IsoUnit extends IsoObject
{
	public var nodeTab:Array<Dynamic>;
	private var pCurr:Point = new Point();
	private var pEnd:Point = new Point();
	public var lastNode:String = "";
	private var xmovement:Float = 0;
	private var ymovement:Float = 0;
	/*
	 * Constructeur
	 * Classe qui représente un élément unité
	 */
	public function new() 
	{
		super();
	}
	public function init(civ:String,un:String){
		spriteSheet = new AnimatedSprite(Main.instance.sprSheetManager.getSpritesheet(civ,un));
		addEventListener(Event.CHANGE, onStateChange);
	}
	/*
	 *  @funcname goTo (definir le point de destination de l'unité pour faire une recherche AStar)
	 * 	@arg targetPoint:Point
	 *  @event ajout du listener de l'evènement généré par la classe AStar lorsque l'algorithme est executé.
	 */
	public function goTo(targetpt:Point){
		pCurr = IsoUtils.posToPx(IsoUtils.pxToPos(new Point(x, y)));
		//trace(pCurr);
		pEnd = targetpt;
		Astar.findPath(this);
	}
	/*
	 * @funcname onStateChange (listener de l'évènement générer par la classe Astar lorsque la recherche est terminée ).
	 */
	function onStateChange(e:Event):Void{
		if(nodeTab.length > 0){ 
			for (i in 0...nodeTab.length){
				nodeTab[i].g = cost(nodeTab[i].direction);
				nodeTab[i].h = Astar.heuristic(nodeTab[i].position,pEnd);
				nodeTab[i].f = nodeTab[i].g + nodeTab[i].h;
			}
			ArraySort.sort(nodeTab, GameUtils.sortByF);
			hasPath = true;
			lookAtDir(nodeTab[0].direction);
			currentAction = "walk";
		}else{ 
			trace(" NO NODE IN _unit.nodeTab ");
			hasPath = false;
		}
	}
	function cost(direction:String):Int{
			var score = 0;
			//var direction = utilGetDirection(currentNode, newNode);
			//var direction = utilGetDirection(currentNode, newNode);
			if (direction == "N" || direction == "E" || direction == "S" || direction == "W") score = 14;
			else score = 10;
			return score;
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
		var distEnd:Float;
		distEnd = Math.floor(GameUtils.distanceBetweenPt(pEnd, pCurr));
		//trace(xmovement + " ------ " + ymovement);
		if (xmovement < IsoWorld.instance.tileW && ymovement < IsoWorld.instance.tileH){
			moveAtDir(nodeTab[0].direction);
			pCurr = IsoUtils.posToPx(IsoUtils.pxToPos(new Point(x, y)));
		}else{
			xmovement = 0;
			ymovement = 0;
			if (distEnd == 0){ 
				hasPath = false;
				currentAction = "stay"; 
			}
			else{ 
				Astar.findPath(this); 
			}
		}
	}
	public function moveAtDir(lookdir:String){
		
		if (nodeTab[0].direction == "N"){ 
			y -= speed >>1;
			ymovement += speed >>1; 
		}else if (nodeTab[0].direction == "NE"){ 
			x += speed;
			y -= speed >>1;
			xmovement += speed;
			ymovement += speed >>1; 
		}else if (nodeTab[0].direction == "E"){ 
			x += speed; 
			xmovement += speed;
		}else if (nodeTab[0].direction == "SE"){ 
			x += speed;
			y += speed >>1; 
			xmovement += speed;
			ymovement += speed >>1;
			
		}else if (nodeTab[0].direction == "S"){
			y += speed >>1; 
			ymovement += speed >>1;
		}else if (nodeTab[0].direction == "SW"){ 
			x -= speed;
			y += speed >>1;
			xmovement += speed;
			ymovement += speed;
		}else if (nodeTab[0].direction == "W"){ 
			x -= speed; 
			xmovement += speed;
		}else if (nodeTab[0].direction == "NW"){
			x -= speed;
			y -= speed >>1; 
			xmovement += speed;
			ymovement += speed;
		}
		
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