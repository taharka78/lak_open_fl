package com.lak.simulator.gamestate;

/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
// vue d'enssemble de la carte du monde avec les royaume ect....
// gestion de la diplomatie
// deplacements des armées.
import ru.stablex.ui.UIBuilder;
import com.lak.simulator.isometric.world.IsoWorld;
class StrategicState implements IGameState
{

	public function new() 
	{
		
	}
	public function enter():Void{
		if (Main.instance.world == null){
			var world:IsoWorld = new IsoWorld();
			Main.instance.world = world;
			Main.instance.addChild(world);
		}
		Simulator.instance.renderer.initSelectionRenderer();
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