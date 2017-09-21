package com.lak.simulator.gamestate;
import com.lak.simulator.isometric.Config;
import com.lak.simulator.isometric.world.Node;
import com.lak.simulator.isometric.world.IsoWorld;
import flash.geom.Point;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.simulator.renderers.GraphicRenderer;
import com.lak.core.managers.LevelManager;
import com.lak.core.utils.GameUtils;
import com.lak.simulator.command.MoveUnitCommand;
import com.lak.simulator.handler.SelectionHandler;
import openfl.display.Shape;
import ru.stablex.ui.UIBuilder;
import ru.stablex.ui.widgets.VBox;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.simulator.controllers.GameStateController;

class InitialState implements IGameState
{
	public function new(){}
	
	public function enter():Void{
		if (Main.instance.world == null){
			var world:IsoWorld = new IsoWorld();
			Main.instance.world = world;
			Main.instance.addChild(world);
		}
<<<<<<< HEAD
		var mainInterface = UIBuilder.buildFn('assets/ui/main.xml');
		Main.instance.addChild(mainInterface());
=======
				
>>>>>>> 7b55151d63eeadb3194ef0db2d68dfdee5ef14f0
	}
	
	public function mouseover():Void{
		
	}
	
	public function mousemove():Void{
		
	}
	
	public function mousedown():Void{
		SelectionHandler.makeSelection();
	}
	
	public function mouseup():Void{	
		SelectionHandler.disabledSelection();
	}
	
	public function mouseclick():Void{
		if (Simulator.instance.armyManager.selectedUnits.length > 0){
			for (unit in Simulator.instance.armyManager.selectedUnits){
					MoveUnitCommand.execute(unit);
			}
		}
	}
	
	public function exit():Void{
		Main.instance.removeChild(UIBuilder.get("main"));
	}
}