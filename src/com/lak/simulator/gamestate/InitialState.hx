package com.lak.simulator.gamestate;
import com.lak.Node;
import flash.geom.Point;
import com.lak.utils.IsoUtils;
import com.lak.renderers.Renderer;
import com.lak.simulator.manager.LevelManager;
import com.lak.utils.GameUtils;
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
		IsoWorld.instance.setChildIndex(Renderer.instance.selectionSprt, IsoWorld.instance.numChildren - 1);
		Renderer.instance.selectionSprt.selectionRect.x = IsoWorld.instance.mouseX;
		Renderer.instance.selectionSprt.selectionRect.y = IsoWorld.instance.mouseY;
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