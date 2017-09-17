package com.lak.core.services;

/**
 * ...
 * @author Moussa & Sissoko
 */
class GameService 
{

	public static function getTypes():Dynamic{
		return {
			food : 100,
			wood : 100,
			gold : 100,
			horse : 100,
			stone : 100
		};
	}
	
	public static function getBuildingOptions():Dynamic{
		return {
			forum: {
				name: 'frm',
				// disposition des tiles walkable
				shape: [[1, 1, 1, 1, 1], [1, 1, 1, 1, 1], [1, 1, 1, 1, 1], [1, 1, 1, 1, 1], [1, 1, 1, 1, 1]],
				// temps de construction
				timeConstruction: 80,
				// ids des unités à produire
				production : [1],
				// recherches disponible dans ce bâtiment
				research : [1, 5, 3],
				// les besoins pour produire ce bâtiment
				needs: {techs : [], buildings : []},
				// le coût du bâtiment
				cost : [{id: 30, value: 300}, {id: 5, value: 300}],
				// les ressources donner par ce bâtiment -1 pour une augmentation en boucle et 0 pour une seule fois
				give : { id : 1 , value : 10 , time : 100 , repeat : -1},
				// ce que le bâtiments consomme pour son bon fonctionnement
				consumption : [{id : 5, value : 5, time : 100}],
				// points devie du bâtiment
				life: 500,
				// defense
				defense: 0,
				// type d'armure
				armorTypeID: 15,
				height: 32,
				// champs de vision
				vision: 5,
				canAttack : true,
				isProduction: true
			}
		}
	}
	
}