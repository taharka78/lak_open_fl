package com.lak.simulator.gamestate;
import flash.geom.Point;
import com.lak.utils.IsoUtils;
import com.lak.renderers.Renderer;
import com.lak.simulator.manager.LevelManager;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.controllers.GameStateController;

class InitialState implements IGameState
{
	private var pt:Point;
	var n:Dynamic;
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
				pt = IsoUtils.getTileAt(new Point(IsoWorld.instance.mouseX, IsoWorld.instance.mouseY));
				trace(pt);
				//n = IsoWorld.instance.levelData[Std.int(pt.x+IsoWorld.instance.LIGNE_VISIBLE_OFFSET)][Std.int(pt.y+IsoWorld.instance.COLONNE_VISIBLE_OFFSET)];
				n = LevelManager.instance.getNodeAt(Std.int(pt.x),Std.int(pt.y));
				n.index = 99;
				n.ndType = "o";				
				trace(("unitx = "+unit.x+" unity = "+unit.y),n.position);
				unit.goTo(n.position);
			}
			
		}
	}
	
}