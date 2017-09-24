package com.lak.simulator.command;
import com.lak.core.actions.ICommand;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.core.utils.GameUtils;
import com.lak.simulator.isometric.Config;
import com.lak.simulator.isometric.grid.Node;
import com.lak.core.managers.LevelManager;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.isometric.utils.IsoUtils;
import openfl.geom.Point;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class MoveUnitCommand
{

	public static function execute(actor:IsoUnit):Void{
		var posx = GameUtils.toGridCoord((IsoWorld.instance.mouseX), Config.TILE_WIDTH);
		var posy = GameUtils.toGridCoord((IsoWorld.instance.mouseY), Config.TILE_HEIGHT);
				
		var pt:Point = IsoUtils.pxToPos(new Point(posx, posy));				
		
		var n:Node = LevelManager.instance.getNodeAt(Std.int(pt.x),Std.int(pt.y));
		n.index = 1;
		//trace(n.index);
		
		n.ndType = "rtees";
		n.selected = true;
		//trace(("unitx = "+unit.x+" unity = "+unit.y),n.position);
		actor.goTo(n.position);
	}
}