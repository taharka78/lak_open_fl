package com.lak.simulator.gamestate;

/**
 * @author Youssouf & Moussa Sissoko
 */
interface IGameState 
{	
	function enter():Void;
	function mouseover():Void;
	function mousemove():Void;
	function mousedown():Void;
	function mouseup():Void;
	function mouseclick():Void;
	function exit():Void;
}