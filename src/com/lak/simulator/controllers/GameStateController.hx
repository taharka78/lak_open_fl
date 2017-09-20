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
		Main.instance.state = new BuilderState();
		Main.instance.state.enter();
		trace("BUILDER MODE");
	}
	
	public static function initial(){
		Main.instance.state = new InitialState();
		//Main.instance.state.enter();
		trace("INITIAL MODE");
	}
	
}