package com.lak.simulator.isometric.entities.units.ai;

import com.lak.simulator.isometric.entities.units.states.Attack;
import com.lak.simulator.isometric.entities.units.states.Idle;
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
					actor.targetTab = new Array<IsoUnit>();
					nodechecking = IsoUtils.spiralSearch(IsoUtils.pxToPos(actor.pCurr), actor.tilesCheckNumber);
					for (i in 0...nodechecking.length){
						currPt = nodechecking[i];
						n = LevelManager.instance.getNodeAt(Std.int(currPt.x), Std.int(currPt.y));
						if (n != null && n.unit != null && n.unit != actor && n.unit.ownerID != actor.ownerID){ 
								actor.targetTab.push(n.unit);
						}
					}
					if (actor.targetTab.length > 0){ 
						actor.target = actor.targetTab[0]; 
						actor.state = new Attack(actor);
					}else{
						
						if(!Std.is(actor.state,Idle)) actor.state = new Idle(actor);
					}
					
			}
			
	}
	
}