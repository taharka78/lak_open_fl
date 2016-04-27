package com.lak.entities;

import openfl.geom.Point;
import openfl.events.Event;

import com.lak.utils.IsoUtils;
import com.lak.utils.GameUtils;
import com.lak.entities.ai.Astar;

import spritesheet.AnimatedSprite;


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
	/*
	 * Constructeur
	 * Classe qui représente un élément unité
	 */
	public function new() 
	{
		super();
	}
	/*
	 * @funcname initilizeUnit (permet d'initialiser l'unité en definissant l'image et la civilisation)
	 * @arg assetsName (Le nom de l'image sans l'extension)
	 * @arg civ (Le nom de la civilisation par defaut mali)
	 */
	public function initilizeUnit(assetName:String,civ:String="mali"){
		type = "unit";
		
		currentAction = "attack";
		phase = "DL";
		
		spriteSheet = new AnimatedSprite(Main.instance.sprSheetManager.getSpritesheet(civ,assetName));
		spriteSheet.showBehavior(currentAction + "_" + phase);
		spriteSheet.x = -Std.int(spriteSheet.width+spriteSheet.bitmap.x)*.7;
		spriteSheet.y = -Std.int(spriteSheet.height + spriteSheet.bitmap.y)*.85;
		
		addChild(spriteSheet);
		centerPoint();
	}
	/*
	 *  @funcname goTo (definir le point de destination de l'unité pour faire une recherche AStar)
	 * 	@arg targetPoint:Point
	 *  @event ajout du listener de l'evènement généré par la classe AStar lorsque l'algorithme est executé.
	 */
	public function goTo(targetpt:Point){
		pCurr = IsoUtils.getTileAt(x, y);
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
				nodeTab[i].g = GameUtils.distanceBetweenPt(nodeTab[i].position,pCurr);
				nodeTab[i].h = GameUtils.distanceBetweenPt(nodeTab[i].position,pEnd);
				nodeTab[i].f = nodeTab[i].g + nodeTab[i].h;
				//trace(" F " + nodeTab[i].f+" ---- "+nodeTab[i].direction);
			}
			ArraySort.sort(nodeTab, GameUtils.sortByF);
			hasPath = true;
			lookAtDir(nodeTab[0].direction);
		}else{ 
			trace(" NO NODE IN _unit.nodeTab ");
			hasPath = false;
		}		
	}
	/*
	 * @funcname update (function de mise à jour globale de l'unité) 
	 */
	public function update(delta:Int){
		if (spriteSheet.currentBehavior.name != currentAction + "_" + phase){
			this.spriteSheet.showBehavior(currentAction + "_" + phase);
		}
		spriteSheet.update(delta);
	}
	public function lookAtDir(lookdir:String):Void{
		if (lookdir == "N"){ phase = "U";scaleX = scale; }
		else if (lookdir == "NE"){ phase = "UL";scaleX = -scale; }
		else if (lookdir == "E"){ phase = "L";scaleX = -scale; }
		else if (lookdir == "SE"){ phase = "DL";scaleX = -scale; }
		else if (lookdir == "S"){ phase = "D";scaleX = scale; }
		else if (lookdir == "SW"){ phase = "DL";scaleX = scale; }
		else if (lookdir == "S"){ phase = "L";scaleX = scale; }
		else if (lookdir == "NW"){ phase = "UL"; scaleX = scale; }
		else{ return null; }
		this.spriteSheet.showBehavior(currentAction + "_" + phase);
	}
}