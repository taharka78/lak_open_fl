package com.lak.simulator.gamestate;

import ru.stablex.ui.UIBuilder;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
// vue zoomé à l'intérieur d'une ville avec la possibilitée de construire des bâtiments déplacer les troupes en garnison ect...
class BuilderState implements IGameState
{

	public function new() 
	{
		
	}
	public function enter():Void{
		var constructionUI = UIBuilder.buildFn('assets/ui/construction.xml');
		Main.instance.addChild(constructionUI());
	}
	
	public function mouseover():Void{
		
	}
	
	public function mousemove():Void{
		
	}
	
	public function mousedown():Void{
		
	}
	
	public function mouseup():Void{
		
	}
	
	public function mouseclick():Void{
		
	}
	
	public function exit():Void{
		
	}
}