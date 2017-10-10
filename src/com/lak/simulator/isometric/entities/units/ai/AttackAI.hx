package com.lak.simulator.isometric.entities.units.ai;

import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.core.managers.LevelManager;
import com.lak.core.utils.GameUtils;
import flash.geom.Point;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class AttackAI 
{

	public static function checkUnitEnemy(actor:IsoUnit){
			var nodechecking:Array<Point>;
			var n:Dynamic;
			var currPt:Point;
			if (actor.target == null){
				nodechecking = IsoUtils.spiralSearch(IsoUtils.pxToPos(actor.pCurr), actor.tilesCheckNumber);
				for (i in 0...nodechecking.length){
					currPt = nodechecking[i];
					n = LevelManager.instance.getNodeAt(Std.int(currPt.x), Std.int(currPt.y));
					if(n != null && n.unit != null && n.unit != actor && n.unit.ownerID != actor.ownerID){ actor.target = n.unit; }
				}
			}else{
				if (!actor.target.hasPath){
					var dx:Int = Math.floor(GameUtils.dx(actor.target.pCurr, actor.pCurr) / Config.TILE_WIDTH);
					var dy:Int = Math.floor(GameUtils.dy(actor.target.pCurr, actor.pCurr) / Config.TILE_HEIGHT);
					if (dx == 0 && dy == 0){
						actor.lookAtDir(LevelManager.instance.facingTo(actor,actor.target));
						actor.currentAction = "attack";
					}else{
						if (dx > actor.los || dy > actor.los ){ 
							actor.target = null; 
						}else{
							var nd:Dynamic = LevelManager.instance.closestNodeFromPoint(IsoUtils.pxToPos(actor.target.pCurr),actor.pCurr);
							if (nd != null){ actor.goTo(nd.position); }
						}
					}
				}else{
					actor.currentAction = "stay";
				}
			}
	}
	
}