package com.lak.core.managers;
import com.lak.simulator.isometric.Config;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.controllers.MoveController;
import com.lak.core.utils.GameUtils;

import openfl.events.Event;
import openfl.geom.Point;
import openfl.utils.ByteArray;
import haxe.ds.ArraySort;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class LevelManager
{
	public static var instance:LevelManager;
	public var registeredMap:Map<String,Array<Dynamic>> = new Map<String,Array<Dynamic>>();
	private var tempUnit:IsoUnit; 
	private var n:Dynamic;
	private var temp_pt:Point = new Point();
	private var nodeTab:Array<Dynamic> = new Array<Dynamic>();
	private var pt:Point;
	
	public function new(){ 
		instance = this; 
		
	}
	/*
	 * @funcname get9Nodes @desc fonction qui permet de récupérer les 9 nodes adjacentes à l'unité en function de la partie de la carte sur laquelle il est.
	 * @arg _unit @type IsoUnit @desc unité autour de laquelle on va faire notre recherche.
	 * @return Void
	 */
	public function get9Nodes(_unit:IsoUnit):Void{
		getUnitAdjacentNodes(_unit,("part_"+(Math.floor(_unit.x/(IsoWorld.instance.tileW*IsoWorld.instance.PART_NUM_TILE_W)))+"-"+(Math.floor(_unit.y/(Config.OFFSETY*IsoWorld.instance.PART_NUM_TILE_H))+".txt")));
	}
	/*
	 * @funcname  mapPartArray @desc function qui permet d'aller charger la partie de carte sous la forme de ByteArray et de la transformer en un tableau à deux dimensions
	 * @arg partName @type String @desc le nom de la carte à aller chercher.
	 * @return Array<Dynamic>.
	 */
	public function mapPartArray(partName:String):Array<Dynamic>{
		if (registeredMap.get(partName) == null){
			
			var bytes:ByteArray = openfl.Assets.getBytes("world1/"+partName);
			bytes.uncompress();
			
			var str:String = bytes.toString();
			registeredMap.set(partName,GameUtils.to2DDimension(str,partName));
		}
		return registeredMap.get(partName);
	}
	/* @funcname getNodeTypeAt
	 * @arg line @desc index de la ligne de la map du tanleau.
	 * @arg col @desc colonne de la ligne du tableau.
	 * @arg partName @desc nom de la partie de la map à charger.
	 */
	public function getNodeAt(line:Int, col:Int):Dynamic{
		var lineIndex:Int = Std.int(Math.floor(line/IsoWorld.instance.PART_NUM_TILE_W));
		var colIndex:Int = Std.int(Math.floor(col/IsoWorld.instance.PART_NUM_TILE_H));
		if (lineIndex >= 0 && colIndex >= 0){
			var tempLevel:Array<Dynamic> = mapPartArray("part_" + lineIndex + "-" + colIndex + ".txt");
			return tempLevel[line%100][col%100];
		}
		return null;
	}
	
	public function closestNodeFromPoint(_point:Point, pc:Point):Dynamic{
		var tempn:Dynamic=null;
		for (i in 0...IsoUtils.spiralWalkStepArray.length){
			temp_pt = IsoUtils.slideMapTileWalker(_point, IsoUtils.spiralWalkStepArray[i]);
			var n = getNodeAt(Std.int(temp_pt.x), Std.int(temp_pt.y));
			if (n != null && n.unit == null && n.walkable != false){
				n.d = (Math.sqrt(Math.pow((pc.x - n.position.x), 2) + Math.pow((pc.y - n.position.y), 2)));
				if (tempn == null || n.d < tempn.d){ tempn = n; }
			}
		}
		return tempn;
	}
	
	public function facingTo(me:IsoUnit,target:IsoUnit):String{
		var facing:String="";
		for (i in 0...IsoUtils.spiralWalkStepArray.length){
			temp_pt = IsoUtils.slideMapTileWalker(IsoUtils.pxToPos(me.pCurr), IsoUtils.spiralWalkStepArray[i]);
			var n = getNodeAt(Std.int(temp_pt.x), Std.int(temp_pt.y));
			if (n != null && n.unit != null && n.unit == target){
				return IsoUtils.spiralWalkStepArray[i];
			}
		}
		return null;
	}
	/*
	 * @funcname getUnitAdjacentNodes @desc function qui va chercher les 9 nodes adjacente en fonction de la position de l'unité spécifiée.
	 * @arg _unit @type IsoUnit @desc unité à partir de laquelle on va chercher les 9 nodes adjacentes à sa position initiale.
	 * @arg tempMapAr @type Array<Dynamic> @desc tableau contenant la carte chargé par la fonction  @funcname mapPartArray
	 * @return Void.
	 */
	public function getPointAdjacentNodes(_point:Point):Array<Dynamic>{		
		for (i in 0...IsoUtils.spiralWalkStepArray.length){
			temp_pt = IsoUtils.slideMapTileWalker(_point, IsoUtils.spiralWalkStepArray[i]);
			var n = getNodeAt(Std.int(temp_pt.x), Std.int(temp_pt.y));
			if (n != null && n.unit == null && n.walkable != false){
				nodeTab.push(n);
			}
		}		
		return nodeTab;
	}
	private function getUnitAdjacentNodes(_unit:IsoUnit, partName:String):Void{		
		
		var pt:Point = IsoUtils.pxToPos(new Point(_unit.x,_unit.y));
		var temp_pt:Point = new Point();
		_unit.nodeTab = new Array<Dynamic>();
		
		_unit.ocupiedPosition = [];
		
		for ( i in 0..._unit.targetTab.length){
			if (_unit.targetTab[i].isoTile.hitTestObject(_unit.isoTile)){
				_unit.ocupiedPosition.push(_unit.targetTab[i].lastNode);		
			}
		}
		
		for (i in 0...IsoUtils.spiralWalkStepArray.length){
			temp_pt = IsoUtils.slideMapTileWalker(pt, IsoUtils.spiralWalkStepArray[i]);			
			n = getNodeAt(Std.int(temp_pt.x), Std.int(temp_pt.y));
			if (n != null){
				if (n.walkable != false 
						&& _unit.pCurr != n.position
						&& _unit.lastNode != n
						&&  n.unit == null
						&& _unit.ocupiedPosition.indexOf(n) == -1
						&& (n.reachBy == null || n.reachBy == _unit)){
					n.direction = IsoUtils.spiralWalkStepArray[i];
					_unit.nodeTab.push(n);
				}
			}
			
		}
		_unit.dispatchEvent(new Event(Event.CHANGE));
	}
}