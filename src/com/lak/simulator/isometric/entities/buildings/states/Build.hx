package com.lak.simulator.isometric.entities.buildings.states;

/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 * Le batiment est en train de se construire
 */
class Build 
{

	public function new(){}
	
	public function doAction(o:IsoObject):Void{
		o.setState(this);
	}	
	
}