package com.lak.simulator.gamestate;
import com.lak.simulator.pools.IsoBuildingPool;
import com.lak.simulator.isometric.entities.buildings.IsoBuilding;
import com.lak.simulator.command.CreateBuildingCommand;
import com.lak.simulator.controllers.GameStateController;
import com.lak.simulator.isometric.world.IsoWorld;
import openfl.geom.Point;
import ru.stablex.ui.UIBuilder;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
// vue zoomé à l'intérieur d'une ville avec la possibilitée de construire des bâtiments déplacer les troupes en garnison ect...
class BuilderState implements IGameState
{
	private var building:IsoBuilding;
	private var placed:Bool = false;
	public function new() 
	{
		
	}
	public function makeBuilding(bdType:String){
		if (building == null){
			building = IsoBuildingPool.getEntity();
			building.init("mali",bdType);
			building.alpha = .5;
			building.spriteSheet.showBehavior("construct");
			IsoWorld.instance.addChildToWorld(building);
		}
		trace(building);
	}
	public function enter():Void{
		var mn = UIBuilder.get("const");
		(mn == null) ? Main.instance.addChild(UIBuilder.buildFn('assets/ui/construction.xml')()) : Main.instance.addChild(mn);
	}
	
	public function mouseover():Void{
		
	}
	
	public function mousemove():Void{
		if (building != null){
			placed = true;
			building.x = IsoWorld.instance.mouseX;
			building.y = IsoWorld.instance.mouseY;
		}
		trace(placed);
	}
	
	public function cancel(){
		if (building == null){
			GameStateController.initial();
		}
	}
	
	public function mousedown():Void{
		
	}
	
	public function mouseup():Void{
		
	}
	
	public function mouseclick():Void{
		if (building != null && placed){
			CreateBuildingCommand.execute(building.type, new Point(building.x, building.y));
			IsoWorld.instance.removeChildFromWorld(building);
			building = null;
			placed = false;
		}
	}
	
	public function exit():Void{
		Main.instance.removeChild(UIBuilder.get("const"));
	}
}