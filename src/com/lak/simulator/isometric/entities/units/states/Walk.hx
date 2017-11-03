package com.lak.simulator.isometric.entities.units.states;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import flash.geom.Point;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class Walk extends State
{
	private var _un:IsoUnit;
	public function new(un:IsoUnit){
		_un = un;
		_un.currentAction = "walk";
		_un.state = this;
		super();
	}
	
	override public function walk(position:Point):Void{
		_un.goTo(position);
	}
	
	override public function attack():Void{
		//_un.state = new Attack(_un);
	}
	
	override public function idle():Void{
		_un.state = new Idle(_un);
	}
	
	override public function update():Void{
		
	}
}