package com.lak.simulator.algorithm;

import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.core.managers.LevelManager;
import com.lak.simulator.isometric.utils.IsoUtils;
import openfl.geom.Point;
import openfl.events.Event;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class Astar
{
	static var _straightCost:Float = 1;
	static var _diagCost:Float = 1;
	public static var _unit:IsoUnit;
	/*
	 * @funcname findPath function de recherche de chemain
	 * @arg unit @type IsoUnit @desc IsoUnit qui recherche sont chemain.
	 */
	static public function findPath(unit:IsoUnit):Void{
		_unit = unit;
		LevelManager.instance.get9Nodes(_unit);		
	}
	/*
	 * @funcname diagonal function calcul de distance
	 * @arg node @type Dynamic @desc objet qui représente une node
	 * @arg endNode @type Dynamic @desc objet qui représente la node d'arrivée de l'unité.
	 */
	static public function diagonal(node:Point,endNode:Point):Float
	{
		var dx:Float = Math.abs(node.x - endNode.x);
		var dy:Float = Math.abs(node.y - endNode.y);
		var diag:Float = Math.min(dx, dy);
		var straight:Float = dx + dy;
		return _diagCost * diag + _straightCost * (straight - 2 * diag);
	}
	public static function manhattan(newNode:Point,end:Point):Float
    {
        return (Math.abs(newNode.x - end.x) + Math.abs(newNode.y - end.y));
    }
	public static function heuristic(pt1:Point, pt2:Point):Int{
		return Math.floor(Math.sqrt(Math.pow((pt1.x - pt2.x), 2) + Math.pow((pt1.y - pt2.y), 2)));
	}
}