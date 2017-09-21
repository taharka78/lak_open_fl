package com.lak.simulator.controllers;
import com.lak.simulator.gamestate.BuilderState;
import com.lak.simulator.gamestate.InitialState;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class GameStateController
{
	public static function builder(){
		if(Main.instance.state != null ) Main.instance.state.exit();
		Main.instance.state = new BuilderState();
		Main.instance.state.enter();
		trace("BUILDER MODE");
	}
	
	public static function initial(){
		if(Main.instance.state != null ) Main.instance.state.exit();
		Main.instance.state = new InitialState();
		Main.instance.state.enter();
		trace("INITIAL MODE");
	}
	
}