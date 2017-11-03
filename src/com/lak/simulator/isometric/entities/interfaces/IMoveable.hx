package com.lak.simulator.isometric.entities.interfaces;
import openfl.geom.Point;

/**
 * @author Youssouf & Moussa SISSOKO
 * Cette interface défini si l'objet en question peut se déplacer
 */
interface IMoveable 
{
	public var speed:Float;
	public var phase:String;
	public function goTo(pt:Point):Void;
}