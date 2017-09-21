package com.lak.simulator.controllers;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class GameStateController
{	
	public static function builder(){
		if(Main.instance.state != null ) Main.instance.state.exit();
		Main.instance.state = Main.instance.builderState;
		Main.instance.state.enter();
		trace("BUILDER MODE");
	}
	
	public static function initial(){
		if(Main.instance.state != null ) Main.instance.state.exit();
		Main.instance.state = Main.instance.initialState;
		Main.instance.state.enter();
		trace("INITIAL MODE");
	}
	
}