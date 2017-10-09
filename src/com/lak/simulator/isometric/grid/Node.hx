package com.lak.simulator.isometric.grid;

/**
 * ...
 * @author ...
 */
import com.lak.simulator.isometric.entities.units.IsoUnit;
import openfl.geom.Point;
class Node
{
	public var ndType:String;
	public var position:Point;
	public var unit:IsoUnit;
	public var index:Int;
	public var polygonShapePoints:Array<Point> = new Array<Point>();
	public var walkable:Bool = true;
	public var selected:Bool = false;
	public var id:String;
	public function new(_type:String,_pos:Point,_idx:Int,_id:String) 
	{
		ndType = _type;
		position = _pos;
		index = _idx;
		id = _id;
	}
}