package com.lak.simulator.algorithm;
import com.lak.simulator.isometric.entities.units.IsoUnit;

/**
 * ...
 * @author ...
 */
class CombatAlgorithm 
{

	/**
	*	Applies a basic attack.
	*/
	public static function attackUnit(attacker:IsoUnit, target:IsoUnit) {

		var attackerData = tools.getElementData(attacker);
		var defenderData = tools.getElementData(target);

		var attackFactor = this.WEAPONS_EFFICIENCY[attackerData.weaponType][defenderData.armorType]; 
		//var damage = Math.max(0,(accessors.getStat(game.players, attacker.o, attackerData, this.STATS_BUFF.attack) * attackFactor * (1 + 0.2 * Math.random())) - accessors.getStat(game.players, target.o, defenderData, this.STATS_BUFF.defense));

		// lands modifiers
		/*if (game.grid[target.p.x][target.p.y].s != null) {
			damage *= fightLogic.LANDS_MODIFIERS[game.grid[target.p.x][target.p.y].s];
		}*/

		//this.applyDamage(damage, target, attacker);
		//tools.addUniqueElementToArray(game.modified, target);

		// target's survival instinct
		if (target.type == "unit" && target.target == null) {
			//AI.targetReaction(game, target, attacker);
		}

		// change player's rank to enemy
		//game.players[target.o].ra[attacker.o] = gameData.RANKS.enemy;

	}


	/**
	*	Applies damage of any attack to the target.
	*	Increments frag if any attacker.
	*/
	/*public static function applyDamage(damage,target,fragOwner) {

		if (target.l > 0) {

			target.l -= damage;

			// check if target is dead
			if(target.l <= 0) {	

				target.fl = gameData.ELEMENTS_FLAGS.dying;

				if (fragOwner != null) {
					fragOwner.fr = fragOwner.fr + 1;
					fragOwner.a = null;
					tools.addUniqueElementToArray(game.modified, fragOwner);
					target.murderer = fragOwner.o;

					// attack a new enemy
					AI.searchForNewEnemy(game, fragOwner);
				}			

				// destroy building (not the units because of asynchronism)
				if (target.f == gameData.FAMILIES.building) {
					production.removeBuilding(game, target);
					gameCreation.removeGameElement(game, target);
					delete game.gameElements.building[target.id];
				}
			}

		} else if(fragOwner != null) {

			// attack a new enemy
			AI.searchForNewEnemy(game, fragOwner);
			
		}
	}*/
	
}