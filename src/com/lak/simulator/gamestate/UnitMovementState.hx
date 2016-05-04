package com.lak.simulator.gamestate;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class UnitMovementState implements IGameState
{

	public function new() 
	{
		
	}
	public function mouseover():Void{
		
	}
	public function mousemove():Void{
		
	}
	public function mousedown():Void{
		
	}
	public function mouseup():Void{
		
	}
	public function mouseclick():Void{
		trace(" ----------------------------------------- CLICK ----------------------------------------- ");
		var pt:Point = IsoUtils.getTileAt(new Point(IsoWorld.instance.mouseX, IsoWorld.instance.mouseY));		
		var n:Dynamic = IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)];
		
		IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)].index = 99;
		IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)].ndType = "o";
	}
	
}