package com.lak;

/**
 * ...
 * @author ...
 */
import openfl.geom.Point;
class Node 
{
	public var ndType:String;
	public var position:Point;
	public var index:Int;
	public var polygonShapePoints:Array<Point> = new Array<Point>();
	public var walkable:Bool = true;
	public var selected:Bool = false;
	public function new(_type:String,_pos:Point,_idx:Int) 
	{
		ndType = _type;
		position = _pos;
		index = _idx;
		
	}
}