package com.lak.simulator.isometric.entities.interfaces;
import com.lak.simulator.isometric.entities.IsoObject;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import flash.geom.Point;

/**
 * @author Youssouf & Moussa SISSOKO
 */
interface IState 
{
	public function attack():Void;
	public function walk(position:Point):Void;
	public function idle():Void;
	public function update():Void;
}