package com.lak.simulator.isometric.entities.units.states;

import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.isometric.entities.interfaces.IState;
import com.lak.simulator.isometric.entities.units.ai.AttackAI;
import flash.geom.Point;
/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class Idle extends State
{
	private var _un:IsoUnit;
	public function new(un:IsoUnit):Void{
		_un = un;
		_un.state = this;
		_un.state.idle();
		super();
	}	
	
	override public function walk(position:Point):Void{
		_un.state = new Walk(_un);
		_un.state.walk(position);
	}
	
	override public function attack():Void{
		_un.state = new Attack(_un);
	}
	
	override public function idle():Void{
		_un.currentAction = "stay";
	}
	
	override public function update(){
		if(!_un.hasPath) AttackAI.checkUnitEnemy(_un);
	}
}