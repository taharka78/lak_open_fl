package com.lak.simulator.isometric.entities.units;

import com.lak.simulator.isometric.entities.IsoObject;
import com.lak.simulator.isometric.entities.units.states.Attack;
import com.lak.simulator.isometric.entities.units.states.Idle;
import com.lak.simulator.isometric.entities.units.states.Walk;
import com.lak.simulator.isometric.world.IsoWorld;
import flash.display.Bitmap;
import motion.MotionPath;
import openfl.display.Graphics;
import openfl.display.Shape;
import openfl.display.Sprite;
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
	public var ocupiedPosition:Array<Dynamic>;
	public var closeAllies:Array<Dynamic>;
	public var bullet:Bitmap;
	public var canLauchAgain:Bool = true;
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
	public function createBullet(){
		bullet = new Bitmap();
		bullet.bitmapData = Main.instance.sprSheetManager.getSpritesheet("world", GameData.instance.unitsDesc[unitType].bullet.type).getFrame(0).bitmapData;
		IsoWorld.instance.addChild(bullet);
		
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
	/*
	 * @funcname onStateChange (listener de l'évènement générer par la classe Astar lorsque la recherche est terminée ).
	 */
	function onStateChange(e:Event):Void{	
		if (nodeTab.length > 0){ 
			for (i in 0...nodeTab.length){
				nodeTab[i].g = cost(nodeTab[i].direction);
				nodeTab[i].h = Astar.heuristic(nodeTab[i].position, pEnd);
				nodeTab[i].f = nodeTab[i].g + nodeTab[i].h;
			}
			ArraySort.sort(nodeTab, GameUtils.sortByF);
			hasPath = true;
			nodeTab[0].reachBy = this;
			lookAtDir(nodeTab[0].direction);
			state = new Walk(this);
			Actuate.tween(this,speed, {x:nodeTab[0].position.x, y:nodeTab[0].position.y}).ease(Linear.easeNone).snapping().onComplete(displacement);
		}else{ 
			trace(" NO NODE IN unit.nodeTab ");
			hasPath = false;
		}
	}
	public function fire(position:Point){
		if (canLauchAgain && spriteSheet.currentFrameIndex > GameData.instance.unitsDesc[unitType].bullet.indexFire){
			
			if (bullet == null){ createBullet(); }
			bullet.visible = true;
			canLauchAgain = false;
			var leftOrRight = 1;
			var topOrBottom = -1;
			//var disX = Math.floor(Std.int(GameUtils.dx(pCurr, position)));
			//var disY = Math.floor(Std.int(GameUtils.dy(pCurr, position)));
			var dis = Math.floor(Std.int(GameUtils.distanceBetweenPt(pCurr, position)));
			if (position.x < pCurr.x){
				
				topOrBottom = (position.y >= pCurr.y && dis > 96) ? -1 : -2;
				leftOrRight = -1;
				bullet.x = pCurr.x - GameData.instance.unitsDesc[unitType].bullet.offset.x;
				bullet.y = pCurr.y - GameData.instance.unitsDesc[unitType].bullet.offset.y;
			}
			else if (position.x == pCurr.x){ 
				
				leftOrRight = 0;
				topOrBottom = (position.y >= pCurr.y && dis > 96) ? -1 : -2;
				
				bullet.x = pCurr.x;
				bullet.y = pCurr.y - GameData.instance.unitsDesc[unitType].bullet.offset.y;
				
			}else{ 
				
				leftOrRight = 1;
				topOrBottom = (position.y >= pCurr.y && dis > 96) ? -1 : -2;
				
				bullet.x = pCurr.x + GameData.instance.unitsDesc[unitType].bullet.offset.x;
				bullet.y = pCurr.y - GameData.instance.unitsDesc[unitType].bullet.offset.y;
			}
			
			var crtlX = pCurr.x + leftOrRight * (dis >> 1);
			var ctrlY = pCurr.y + topOrBottom * 96;
						
			var path = new MotionPath().bezier(position.x,position.y,crtlX,ctrlY);
			
			Actuate.motionPath(bullet,.5,{x:path.x, y:path.y,rotation : path.rotation}).onComplete(function(){ canLauchAgain = true; bullet.visible = false; });
		}
	}
	function cost(direction:String):Float{
		var score = 0;
		if (((lastDirection == "N" && direction == "S") || (lastDirection == "S" && direction == "N"))
				|| ((lastDirection == "NE" && direction == "SW") || (lastDirection == "SW" && direction == "NE"))
				|| ((lastDirection == "NE" && direction == "W") || (lastDirection == "W" && direction == "NE"))
				|| ((lastDirection == "NW" && direction == "SE") || (lastDirection == "SE" && direction == "NW"))
				|| ((lastDirection == "E" && direction == "W") || (lastDirection == "W" && direction == "E"))){ score = 184; }
		return score;
	}	
	/*
	 * @funcname update (function de mise à jour globale de l'unité) 
	 */
	override public function update(delta:Int){
		if(spriteSheet.currentBehavior.name != currentAction + "_" + phase){ this.spriteSheet.showBehavior(currentAction + "_" + phase); }
		spriteSheet.update(delta);
		if (state != null) state.update();
	}
	public function lookAtFromAngle(_angle:Float){
		if (_angle < 0){ _angle =_angle + 360; }
		if(angle != _angle){
			angle = _angle;
			if (angle > 240 && angle < 300){ phase = "U";scaleX = scale; }
			if (angle > 300 && angle < 340){ phase = "UL";scaleX = -scale; }
			if ((angle >= 0 && angle < 20) || (angle > 340 && angle <= 360)){ phase = "L";scaleX = -scale; }
			if (angle > 20 && angle  < 60){ phase = "DL";scaleX = -scale; }
			if (angle > 60 && angle  < 120){ phase = "D";scaleX = scale; }
			if (angle > 120 && angle < 160){ phase = "DL";scaleX = scale; }
			if (angle > 160 && angle < 200){ phase = "L";scaleX = scale; }
			if (angle > 200 && angle < 240){ phase = "UL";scaleX = scale; }
		}
	}
	private function displacement(){
		
		pCurr = nodeTab[0].position;
		addUnitToNodeFromPos(nodeTab[0]);
		
		if (pCurr == pEnd){
			hasPath = false;
			state = (target == null) ? new Idle(this) : new Attack(this);
		}else{
			if (ptarget != null){ pEnd = ptarget; }
			Astar.findPath(this);
		}
	}
	public function addUnitToNodeFromPos(n:Dynamic):Void{
		if (lastNode != null && lastNode.unit == this){ lastNode.unit = null; }
		if (n.unit == null) n.unit = this;
		if (n.reachBy == this) n.reachBy = null;
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