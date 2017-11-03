package com.lak.simulator.isometric.entities.units.states;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.core.managers.LevelManager;
import com.lak.core.utils.GameUtils;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.simulator.data.GameData;
import flash.geom.Point;
/**
 * ...
 * @author Youssouf & Moussa SISSOKO
 */
class Attack extends State
{
	private var _un:IsoUnit;
	private var isMelee:Bool;
	private var isRanged:Bool;
	public function new(un:IsoUnit) {
		_un = un;
		_un.state = this;
		_un.state.attack();
		
		isMelee = GameUtils.arrayHasValue("melee", GameData.instance.unitsDesc.get(_un.unitType).types);
		isRanged = GameUtils.arrayHasValue("ranged", GameData.instance.unitsDesc.get(_un.unitType).types);
		
		super();
	}
	
	override public function walk(position:Point):Void{
		_un.state = new Walk(_un);
		_un.state.walk(position);
	}
	
	override public function attack():Void{
		
	}
	override public function idle():Void{
		_un.state = new Idle(_un);
	}
	
	override public function update():Void{
		if(_un.target != null){
			
			var dx:Int = Math.floor(GameUtils.dx(_un.target.pCurr, _un.pCurr) / Config.TILE_WIDTH);
			var dy:Int = Math.floor(GameUtils.dy(_un.target.pCurr, _un.pCurr) / Config.TILE_HEIGHT);
			
			_un.lookAtDir(LevelManager.instance.facingTo(_un, _un.target));
			if (dx == 0 && dy == 0){
				 //GameData.instance.unitsDesc.get(_un.unitType).types;
				 if (isMelee) _un.currentAction = "attack";
				 else _un.currentAction = "stay";
				
			}else{
				if (dx > _un.los || dy > _un.los ){
					if(isMelee) _un.currentAction = "stay";
					_un.target = null;
					idle();
				}else if ((dx < _un.los && dx > 0) || (dy < _un.los && dy > 0)){
					if (isMelee && !isRanged) _un.currentAction = "stay";
					if(isRanged) _un.currentAction = "attack";
					var nd:Dynamic = LevelManager.instance.closestNodeFromPoint(IsoUtils.pxToPos(_un.target.pCurr),_un.pCurr);
					if (nd != null){
						if (isMelee && !isRanged) walk(nd.position);
						else if (isRanged) _un.fire(_un.target.pCurr);
					}else{
						idle();
					}
				}		
			}
		}else{
			idle();
		}
	}
	
}