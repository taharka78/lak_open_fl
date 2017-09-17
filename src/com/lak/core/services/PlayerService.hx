package com.lak.core.services;

/**
 * ...
 * @author Moussa & Sissoko
 */
class PlayerService 
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
	
}