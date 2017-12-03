package com.lak.simulator.gamestate;
import openfl.display.Shape;
import com.lak.simulator.command.ui.CloseUICommand;
import ru.stablex.ui.UIBuilder;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.simulator.controllers.GameStateController;

class InitialState implements IGameState
{
	public function new(){
		
	}
	public function enter():Void{
		Main.instance.addChild(UIBuilder.buildFn('assets/ui/enter.xml')());
		/*if (Main.instance.world == null){
			var world:IsoWorld = new IsoWorld();
			Main.instance.world = world;
			Main.instance.addChild(world);
		}
		var mn = UIBuilder.get("main");
		(mn == null) ? Main.instance.addChild(UIBuilder.buildFn('assets/ui/main.xml')()) : Main.instance.addChild(mn);*/
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
		
	}
	
	public function exit():Void{
		CloseUICommand.execute("enter");
	}
}