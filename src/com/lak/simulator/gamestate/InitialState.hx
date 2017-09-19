package com.lak.simulator.gamestate;
import com.lak.simulator.isometric.Config;
import com.lak.simulator.isometric.world.Node;
import com.lak.simulator.isometric.world.IsoWorld;
import flash.geom.Point;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.simulator.renderers.GraphicRenderer;
import com.lak.simulator.manager.LevelManager;
import com.lak.core.utils.GameUtils;
import openfl.display.Shape;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.controllers.GameStateController;

class InitialState implements IGameState
{
	private var pt:Point = new Point();
	var n:Node;
	public function new(){}
	public function mouseover():Void{
		
	}
	public function mousemove():Void{
		
	}
	public function mousedown():Void{
		GameStateController.enableSelection();
		IsoWorld.instance.setChildIndex(GraphicRenderer.instance.selectionSprt, IsoWorld.instance.numChildren - 1);
		GraphicRenderer.instance.selectionSprt.selectionRect.x = IsoWorld.instance.mouseX;
		GraphicRenderer.instance.selectionSprt.selectionRect.y = IsoWorld.instance.mouseY;
	}
	public function mouseup():Void{
		GameStateController.disabledSelection();
	}
	public function mouseclick():Void{
		if (Simulator.instance.armyManager.selectedUnits.length > 0){
			for (unit in Simulator.instance.armyManager.selectedUnits){
				var posx = GameUtils.toGridCoord((IsoWorld.instance.mouseX), Config.TILE_WIDTH);
				var posy = GameUtils.toGridCoord((IsoWorld.instance.mouseY), Config.TILE_HEIGHT);
				pt = IsoUtils.pxToPos(new Point(posx, posy));				
				n = LevelManager.instance.getNodeAt(Std.int(pt.x),Std.int(pt.y));
				n.index = 1;
				trace(n.index);
				n.ndType = "rtees";
				n.selected = true;
				trace(("unitx = "+unit.x+" unity = "+unit.y),n.position);
				unit.goTo(n.position);
				
			}
			
		}
	}
	
}