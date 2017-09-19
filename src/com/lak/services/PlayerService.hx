package com.lak.services;

/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class PlayerService 
{

	public static function getDeveloppedTechnologies():Map<Int,Dynamic>{
		return [ 1 => { name : "tech1" }];
	}
	
	public static function getReachableTechnologies():Map<Int,Dynamic>{
		return [ 1 => {
			name : "tech 2",
			cost : [{ id : 1, value:50}, {id:5, value:75}],
			needs : {
						techs : [],
						buildings : []
			},
			timeResearch: 80,
		}
	}
}