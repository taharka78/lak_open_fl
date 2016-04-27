package com.lak.manager;
import com.lak.entities.IsoUnit;
import com.lak.utils.IsoUtils;
import com.lak.utils.GameUtils;
import openfl.events.Event;
import openfl.geom.Point;
import openfl.utils.ByteArray;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class LevelManager
{
	public static var instance:LevelManager;
	var tempUnit:IsoUnit;
	
	public function new(){ instance = this; }
	/*
	 * @funcname get9Nodes @desc fonction qui permet de récupérer les 9 nodes adjacentes à l'unité en function de la partie de la carte sur laquelle il est.
	 * @arg _unit @type IsoUnit @desc unité autour de laquelle on va faire notre recherche.
	 * @return Void
	 */
	public function get9Nodes(_unit:IsoUnit):Void{
		getUnitAdjacentNodes(_unit,mapPartArray("part_"+(Math.floor(_unit.x/(IsoWorld.instance.halfW*100)))+"-"+(Math.floor(_unit.y/(IsoWorld.instance.tileH*100))+".txt")));
	}
	/*
	 * @funcname  mapPartArray @desc function qui permet d'aller charger la partie de carte sous la forme de ByteArray et de la transformer en un tableau à deux dimensions
	 * @arg partName @type String @desc le nom de la carte à aller chercher.
	 * @return Array<Dynamic>.
	 */
	public function mapPartArray(partName:String):Array<Dynamic>{
		var bytes:ByteArray = openfl.Assets.getBytes("world1/"+partName);
		bytes.uncompress();
		var str:String = bytes.toString();
		return GameUtils.to2DDimension(str);
	}
	/*
	 * @funcname getUnitAdjacentNodes @desc function qui va chercher les 9 nodes adjacente en fonction de la position de l'unité spécifiée.
	 * @arg _unit @type IsoUnit @desc unité à partir de laquelle on va chercher les 9 nodes adjacentes à sa position initiale.
	 * @arg tempMapAr @type Array<Dynamic> @desc tableau contenant la carte chargé par la fonction  @funcname mapPartArray
	 * @return Void.
	 */
	private function getUnitAdjacentNodes(_unit:IsoUnit,tempMapAr:Array<Dynamic>):Void{
		//var pt:Point = new Point(Math.floor(_unit.x/IsoWorld.instance.halfW),Math.floor(_unit.y/IsoWorld.instance.tileH));
		var pt:Point = IsoUtils.getTileAt(_unit.x,(_unit.y*.5));
		var temp_pt:Point = new Point();
		_unit.nodeTab = new Array<Dynamic>();
		
		for (i in 0...IsoUtils.spiralWalkStepArray.length){
			temp_pt = IsoUtils.slideMapTileWalker(pt, IsoUtils.spiralWalkStepArray[i]);
			if((temp_pt.x > -1 && temp_pt.x < 100) && (temp_pt.y > -1  && temp_pt.y < 100)){
				IsoWorld.instance.tilesArray[Std.int(temp_pt.x)][Std.int(temp_pt.y)].index = 99;
				IsoWorld.instance.tilesArray[Std.int(temp_pt.x)][Std.int(temp_pt.y)].ndType = "o";
				_unit.nodeTab.push({
					"ndType":tempMapAr[Std.int(temp_pt.x)][Std.int(temp_pt.y)],
					"position":new Point((temp_pt.x*IsoWorld.instance.halfW),(temp_pt.y * IsoWorld.instance.tileH)),
					"f":0,"g":0,"h":0,"direction":IsoUtils.spiralWalkStepArray[i]
				});
			}
		}
		_unit.dispatchEvent(new Event(Event.CHANGE));			
	}
	
}