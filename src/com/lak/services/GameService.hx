package com.lak.services;

/**
 * ...
 * @author Moussa & Sissoko
 */
class GameService 
{
	
	public static function getRanks():Dynamic
	{
		return {
			me : 0,
			ally : 1,
			neutral : 2,
			enemy : 3
		}
	}
	
	public static function getRessourceTypes():Map<Int,Dynamic>{
		return [
					1 => {name:"food",icon:"food_ico"},
					2 => {name:"wood",icon:"wood_ico"},
					3 => {name:"gold",icon:"gold_ico"},
					4 => {name:"horse",icon:"horse_ico"},
					5 => {name:"stone",icon:"stone_ico"}
				];
	}
	
	public  static function getBodyParts():Map<Int,String>{
		return [
					1 => "head",
					2 => "arms",
					3 => "hand",
					4 => "shoulder",
					5 => "hand",
					6 => "chest",
					7 => "legs",
					8 => "feet"
				];
	}
	public static function getUnitsType():Map<Int,Dynamic>{
		return [ 1 => {
						type : "onFoot",
						weakness : [],
						strengh : []
					},
				 2 => {
					type : "mounted",
					weakness : [],
					strengh : []
				 },
				 3 => {
					type : "melee",
					weakness : [],
					strengh : []
				 },
				 4 => {
					type : "distance",
					weakness : [],
					strengh : []
				 },
				 5 => {
					type : "siege",
					weakness : [],
					strengh : []
				 }
		];
	}
	public static function getMountType():Map<Int,Dynamic>{
		return [
				1 => { 
						type:"horse",
						speed : 3,
						defense : 2,
						attack : 0,
						stamina : 100
				},
				2 => { 
						type:"donkey",
						speed : 3,
						defense : 2,
						attack : 0,
						stamina : 100
				},
				3 => { 
						type:"camel",
						speed : 3,
						defense : 2,
						attack : 0,
						stamina : 100
					},
				4 => { 
						type:"elephant",
						speed : 3,
						defense : 2,
						attack : 0,
						stamina : 100
					}
			];
	}
	
	public static function getWeaponTypes():Map<Int,Dynamic>{
		return [
			 1 => {
				type : "sword",
				targetBodyPart : 1,
				// IDs du type d'unité.
				strengh : [],
				// IDs du type d'arme.
				weakness : [],
				// bonus octroyé par cette arme.
				bonus : {
					defense : 10,
					attack : 0,
					speed : -1
				}
			}			
		];
	}
	public static function getArmorTypes():Map<Int,Dynamic>{
		return [
			1 => {
				type : "helmet",
				targetBodyPart : 1,
				bonus : {
					defense : 10,
					attack : 0,
					speed : -1
				}
			}			
		];
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
				units : [1],
				// recherches disponible dans ce bâtiment
				research : [1, 5, 3],
				// les besoins pour produire ce bâtiment
				needs: {techs : [], buildings : []},
				// le coût du bâtiment
				cost : [{id: 30, value: 300}, {id: 5, value: 300}],
				// les ressources donner par ce bâtiment -1 pour une augmentation en boucle et 0 pour une seule fois
				production : { id : 1 , value : 10 , time : 100 , repeat : -1},
				// ce que le bâtiments consomme pour son bon fonctionnement
				consumption : [{id : 5, value : 5, time : 100}],
				// points devie du bâtiment
				life: 500,
				// defense
				defense: 0,
				// type d'armure
				armorTypeID : 15,
				height: 32,
				// champs de vision
				vision: 5,
				// bâtiment defensif.
				canAttack : true,
				// bâtiment productif.
				isProduction: true
			}
		}
	}
	
}