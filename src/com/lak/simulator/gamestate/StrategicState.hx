package com.lak.simulator.gamestate;

/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
// vue d'enssemble de la carte du monde avec les royaume ect....
// gestion de la diplomatie
// deplacements des armées.
import ru.stablex.ui.UIBuilder;
class StrategicState implements IGameState
{

	public function new() 
	{
		
	}
	public function enter():Void{
		Main.instance.addChild(UIBuilder.buildFn('assets/ui/strategic.xml')());
		
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
		Main.instance.removeChild(UIBuilder.get("strategic"));
	}
}