package com.lak.entities;

import openfl.geom.Point;
import openfl.events.Event;

import com.lak.utils.IsoUtils;
import com.lak.utils.GameUtils;
import com.lak.simulator.Astar;

import spritesheet.AnimatedSprite;
import com.lak.renderers.Renderer;

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
		spriteSheet = new AnimatedSprite(Main.instance.sprSheetManager.getSpritesheet("mali","king"));
	}
		
	/*
	 *  @funcname goTo (definir le point de destination de l'unité pour faire une recherche AStar)
	 * 	@arg targetPoint:Point
	 *  @event ajout du listener de l'evènement généré par la classe AStar lorsque l'algorithme est executé.
	 */
	public function goTo(targetpt:Point){
		pCurr = IsoUtils.mapTilePosition(IsoUtils.getTileAt(new Point(x,y)),IsoWorld.instance.tileW,IsoWorld.instance.tileH);
		x = GameUtils.toGridCoord(x, IsoWorld.instance.tileW);
		y = GameUtils.toGridCoord(y, IsoWorld.instance.tileH);
		pEnd = targetpt;
		addEventListener(Event.CHANGE, onStateChange);
		Astar.findPath(this);
	}
	/*
	 * @funcname onStateChange (listener de l'évènement générer par la classe Astar lorsque la recherche est terminée ).
	 */
	function onStateChange(e:Event):Void{
		if(nodeTab.length > 0){ 
			for (i in 0...nodeTab.length){
				var cost:Int = 0;
				//if (nodeTab[i].direction == "N"){ nodeTab[i].position.y += IsoWorld.instance.halfH; }
				//else if (nodeTab[i].direction == "S"){ nodeTab[i].position.y -= IsoWorld.instance.halfH; }
				nodeTab[i].g = 0;
				nodeTab[i].h = Astar.heuristic(nodeTab[i].position,pEnd);
				nodeTab[i].f = nodeTab[i].g + nodeTab[i].h;
			}
			ArraySort.sort(nodeTab, GameUtils.sortByF);
			hasPath = true;
			lookAtDir(nodeTab[0].direction);
			currentAction = "walk";
			//trace(pCurr,nodeTab[0].position);
		}else{ 
			trace(" NO NODE IN _unit.nodeTab ");
			hasPath = false;
		}		
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
		if (xmovement < IsoWorld.instance.tileW && ymovement < IsoWorld.instance.halfH){
			moveAtDir(nodeTab[0].direction);
			var pt:Point = IsoUtils.getTileAt(new Point(x,y));
			pCurr = IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)].position;
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
			y -= speed * .5;
			ymovement += speed*.5; 
		}else if (nodeTab[0].direction == "NE"){ 
			x += speed;
			y -= speed * .5;
			xmovement += speed;
			ymovement += speed * .5; 
		}else if (nodeTab[0].direction == "E"){ 
			x += speed; 
			xmovement += speed;
		}else if (nodeTab[0].direction == "SE"){ 
			x += speed;
			y += speed * .5; 
			xmovement += speed;
			ymovement += speed * .5;
			
		}else if (nodeTab[0].direction == "S"){
			y += speed*.5; 
			ymovement += speed * .5;
		}else if (nodeTab[0].direction == "SW"){ 
			x -= speed;
			y += speed * .5;
			xmovement += speed;
			ymovement += speed;
		}else if (nodeTab[0].direction == "W"){ 
			x -= speed; 
			xmovement += speed;
		}else if (nodeTab[0].direction == "NW"){
			x -= speed;
			y -= speed * .5; 
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