package com.lak.core.player;

import com.lak.core.services.GameService;
/**
 * ...
 * @author Moussa & Sissoko
 */
class RessourceDescriptor 
{
	public var types:Map<String,Int>;
	public function new() 
	{
		// appel au service récupérant les types de ressoiurces.
		this.types = GameService.getTypes();
		trace(this.types);
	}
	
}