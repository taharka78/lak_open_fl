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
	public static function battle(){
		if(Main.instance.state != null ) Main.instance.state.exit();
		Main.instance.state = Main.instance.battleState;
		Main.instance.state.enter();
		trace("BATTLE MODE");
	}
	public static function initial(){
		if(Main.instance.state != null ) Main.instance.state.exit();
		Main.instance.state = Main.instance.initialState;
		Main.instance.state.enter();
		trace("INITIAL MODE");
	}
	
	public static function strategic(){
		if(Main.instance.state != null ) Main.instance.state.exit();
		Main.instance.state = Main.instance.strategicState;
		Main.instance.state.enter();
		trace("Strategic MODE");
	}
	
}