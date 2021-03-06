package com.lak.simulator.gamestate;

/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
import com.lak.simulator.isometric.Config;
import com.lak.simulator.isometric.entities.buildings.IsoBuilding;
import com.lak.simulator.isometric.grid.Node;
import com.lak.simulator.isometric.world.IsoWorld;
import openfl.geom.Point;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.simulator.renderers.GraphicRenderer;
import com.lak.core.managers.LevelManager;
import com.lak.core.utils.GameUtils;
import com.lak.simulator.command.MoveUnitCommand;
import com.lak.simulator.handler.SelectionHandler;
import com.lak.simulator.command.ui.CloseUICommand;
class BattleState implements IGameState
{
	
	public function new() {
	}
	
	public function enter():Void{
		if (Main.instance.world == null){
			var world:IsoWorld = new IsoWorld();
			Main.instance.world = world;
			Main.instance.addChild(world);
		}
		Simulator.instance.renderer.initSelectionRenderer();
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
			
			var posx = GameUtils.toGridCoord(IsoWorld.instance.mouseX, Config.TILE_WIDTH);
			var posy = GameUtils.toGridCoord(IsoWorld.instance.mouseY, Config.TILE_HEIGHT);
			var pt:Point = IsoUtils.pxToPos(new Point(posx, posy));
			var otherPoints:Array<Point> = IsoUtils.spiralSearch(pt,60);
			var newTargetPt:Point;
			var cpt:Int = 0;
			for (unit in Simulator.instance.armyManager.selectedUnits){
				if (Simulator.instance.armyManager.selectedUnits.length == 1 
						|| Simulator.instance.armyManager.selectedUnits.indexOf(unit) == 0){
					MoveUnitCommand.execute(unit, pt);
					cpt++;
				}else{
					MoveUnitCommand.execute(unit,otherPoints[cpt++]);
				}
			}
		}
	}
	
	public function exit():Void{
		CloseUICommand.execute("main");
	}
	
}