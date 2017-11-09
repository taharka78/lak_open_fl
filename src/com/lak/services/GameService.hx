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
	
	public static function getRessourceTypes():Array<Dynamic>{
		return [ 	{name:"food",icon:"food_ico"},
					{name:"wood",icon:"wood_ico"},
					{name:"gold",icon:"gold_ico"},
					{name:"horse",icon:"horse_ico"},
					{name:"stone",icon:"stone_ico"}
				];
	}
	
	public  static function getBodyParts():Array<Dynamic>{
		return ["head",
					"arms",
					"hand",
					"shoulder",
					"hand",
					"chest",
					"legs",
					"feet"
				];
	}
	public static function getUnitsDescription():Map<String,Dynamic>{
		return [ "cavalier" => {
					types : ["melee", "mounted"],
					lineOfSight : 3,
					mountType : "horse"
				},
				"king" => {
					types : ["melee", "mounted"],
					lineOfSight : 3,
					mountType : "horse"
				},
				"general" => {
					types : ["melee", "mounted"],
					lineOfSight : 1,
					mountType : "horse"
				},
				"archer" => {
					types : ["ranged"] ,
					bullet : {
						offset : { x:15,y:25},
						indexFire : 20,
						type : "arrow"
					},
					lineOfSight : 6
				}
			];
	}
	public static function getUnitsType():Map<String,Dynamic>{
		return [ "onFoot" => {
					weakness : [],
					strengh : []
				},
				"mounted" => {
					weakness : [],
					strengh : []
				},
				"melee" => {
					weakness : [],
					strengh : []
				},
				"distance" => {
					weakness : [],
					strengh : []
				},
				"siege" => {
					weakness : [],
					strengh : []
				}
		];
	}
	public static function getMountType():Map<String,Dynamic>{
		return [
				"horse" => {
					speed : .5,
					defense : 2,
					attack : 0,
					stamina : 100
				},
				"donkey" => {
					speed : .5,
					defense : 2,
					attack : 0,
					stamina : 100
				},
				"camel" => {
					speed : .5,
					defense : 2,
					attack : 0,
					stamina : 100
					},
				"elephant" => {
					speed : .5,
					defense : 2,
					attack : 0,
					stamina : 100
				}
			];
	}
	
	public static function getWeaponTypes():Map<String,Dynamic>{
		return ["sword" => {
				targetBodyPart : 1,
				// IDs du type d'unité.
				strengh : [],
				// IDs du type d'arme.
				weakness : [],
				// bonus octroyé par cette arme.
				bonus : {
					defense : 0,
					attack : 10,
					speed : -1
				}
			}			
		];
	}
	
	public static function getArmorTypes():Array<Dynamic>{
		return [
			{
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
	public static function getBuildingOptions():Array<Dynamic>{
		return [{
				name: 'forum',
				// disposition des tiles walkable
				shape: [[1, 1, 1, 1, 1],
						[1, 1, 1, 1, 1],
						[1, 1, 1, 1, 1],
						[1, 1, 1, 1, 1]],
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
				offset:{
					x : 160,
					y : 86
				},
				// champs de vision
				vision: 5,
				// bâtiment defensif.
				canAttack : true,
				// bâtiment productif.
				isProduction: true
			}
		];
	}
	
}