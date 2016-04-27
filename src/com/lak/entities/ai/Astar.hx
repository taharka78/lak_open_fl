package com.lak.entities.ai;

import com.lak.entities.IsoUnit;
import com.lak.manager.LevelManager;
import com.lak.utils.IsoUtils;
import openfl.events.Event;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class Astar
{
	static var _straightCost:Float = 10;
	static var _diagCost:Float = 1;
	public static var _unit:IsoUnit;
	/*
	 * @funcname findPath function de recherche de chemain
	 * @arg unit @type IsoUnit @desc IsoUnit qui recherche sont chemain.
	 */
	static public function findPath(unit:IsoUnit):Void
	{
		_unit = unit;
		var deptPoint = IsoUtils.getTileAt(_unit.x,_unit.y,true);
		LevelManager.instance.get9Nodes(_unit);			
	}
	/*
	 * @funcname diagonal function calcul de distance
	 * @arg node @type Dynamic @desc objet qui représente une node
	 * @arg endNode @type Dynamic @desc objet qui représente la node d'arrivée de l'unité.
	 */
	static public function diagonal(node:Dynamic,endNode:Dynamic):Float
	{
		var dx:Float = Math.abs(node.x - endNode.x);
		var dy:Float = Math.abs(node.y - endNode.y);
		var diag:Float = Math.min(dx, dy);
		var straight:Float = dx + dy;
		return _diagCost * diag + _straightCost * (straight - 2 * diag);
	}
	
}