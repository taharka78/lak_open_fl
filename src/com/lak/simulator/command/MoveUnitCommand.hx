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

	public static function execute(actor:IsoUnit,pt:Point):Void{
		var n:Dynamic = LevelManager.instance.getNodeAt(Std.int(pt.x), Std.int(pt.y));
		//IsoUtils.debugTile(n);
		actor.goTo(n.position);
	}
}