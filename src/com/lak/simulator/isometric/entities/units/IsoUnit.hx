package com.lak.simulator.isometric.entities.units;

import com.lak.simulator.isometric.entities.IsoObject;
import com.lak.simulator.isometric.world.IsoWorld;
import openfl.display.Graphics;
import openfl.display.Shape;
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
import com.lak.simulator.isometric.entities.units.ai.AttackAI;
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
	public var parentNodeID:String;
	public var ptarget:Point;
	private var tempPt:Point;
	public var hasPath:Bool = false;
	public var target:IsoUnit;
	public var position:Point = new Point();
	private var targetNodeTab:Array<Dynamic> = new Array<Dynamic>();
	private var distEnd:Float;
	public var los:Int;
	public	var tilesCheckNumber:Int;
	public var targetTab:Array<IsoUnit> = new Array<IsoUnit>();
	private	var nodePos:Point;
	private	var n:Dynamic;
	private	var currPt:Point;
	private	var nodechecking:Array<Point>;
	private var lastDirection:String = "";
	public var isoTile:Shape = new Shape();
	/*
	 * Constructeur
	 * Classe qui représente un élément unité
	 */
	public function new() 
	{
		super();
		isoTile.graphics.beginFill(0xFF0000);
		isoTile.graphics.moveTo(0, Config.TILE_HEIGHT >> 1);
		isoTile.graphics.lineTo(Config.TILE_WIDTH >> 1, 0);
		isoTile.graphics.lineTo(0, -Config.TILE_HEIGHT >> 1);
		isoTile.graphics.lineTo( -Config.TILE_WIDTH >> 1, 0);
		isoTile.graphics.lineTo(0, Config.TILE_HEIGHT >> 1);
		isoTile.graphics.endFill();
		//addChild(isoTile);
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

			var st:Point = IsoUtils.pxToPos(position);
			
			pCurr = IsoUtils.posToPx(st);
			lastNode = LevelManager.instance.getNodeAt(Std.int(st.x),Std.int(st.y));
			
			Astar.findPath(this);
			
		}else{
			ptarget = targetpt; 
		}
	}
	function canMove():Bool{
		for ( i in 0...targetTab.length){
			if (!targetTab[i].isoTile.hitTestObject(this.isoTile)){
				return false;		
			}
		}
		return true;
	}
	/*
	 * @funcname onStateChange (listener de l'évènement générer par la classe Astar lorsque la recherche est terminée ).
	 */
	function onStateChange(e:Event):Void{	
		if (canMove()){
			if (nodeTab.length > 0){ 
				for (i in 0...nodeTab.length){
					nodeTab[i].g = cost(nodeTab[i].direction);
					nodeTab[i].h = Astar.heuristic(nodeTab[i].position, pEnd);
					nodeTab[i].f = nodeTab[i].g + nodeTab[i].h;
					//trace(nodeTab[i].direction, nodeTab[i].f);
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
	}
	function cost(direction:String):Float{
		var score = 0;
		if (((lastDirection == "N" && direction == "S") || (lastDirection == "S" && direction == "N"))
				|| ((lastDirection == "NE" && direction == "SW") || (lastDirection == "SW" && direction == "NE"))
				|| ((lastDirection == "NE" && direction == "W") || (lastDirection == "W" && direction == "NE"))
				|| ((lastDirection == "NW" && direction == "SE") || (lastDirection == "SE" && direction == "NW"))
				|| ((lastDirection == "E" && direction == "W") || (lastDirection == "W" && direction == "E"))){ score = 184; }
		//trace("Last direction : "+lastDirection+" node direction : "+direction+"  "+score);
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
			Astar.findPath(this);
			AttackAI.checkUnitEnemy(this);
		}
	}
	public function addUnitToNodeFromPos(n:Dynamic):Void{
		if (lastNode != null && lastNode.unit == this){ lastNode.unit = null; }
		if(n.unit == null) n.unit = this;
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
		lastDirection = lookdir;
		if (spriteSheet.currentBehavior.name != currentAction + "_" + phase) this.spriteSheet.showBehavior(currentAction + "_" + phase);
	}
}