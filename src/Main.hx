package;

import com.lak.entities.IsoUnit;
import haxe.Log.trace;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.FPS;
import openfl.display.StageScaleMode;
import openfl.display.Sprite;
import openfl.geom.Point;
import openfl.Assets;
import openfl.Lib;
import spritesheet.AnimatedSprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import com.lak.IsoWorld;
import com.lak.manager.SpritesheetManager;
import com.lak.utils.IsoUtils;
import com.lak.utils.GameUtils;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class Main extends Sprite 
{
	var lastTime:Int = 0;
	var unit:IsoUnit;
	public var sprSheetManager:SpritesheetManager = new SpritesheetManager();
	public var world:IsoWorld;
	public static var instance:Main;
	public var realWidth:Int;
	public var realHeight:Int;
	
	public function new() 
	{
		super();
		addChild(new FPS(0, 0, 0x000000));
		instance = this;
		addEventListener(Event.ADDED_TO_STAGE, onMainAdded);		
	}
	
	function onMainAdded(e:Event){
		removeEventListener(Event.ADDED_TO_STAGE, onMainAdded);
		
		realWidth = stage.stageWidth;
		realHeight = stage.stageHeight;
		world = new IsoWorld();
		addChild(world);
		
		unit = new IsoUnit();
		unit.initilizeUnit("general");
		unit.currentAction = "stay";
		unit.x = 294;
		unit.y = 288;
		world.addChildToWorld(unit);
		
		addEventListener(Event.ENTER_FRAME, update);
		
		stage.scaleMode = StageScaleMode.NO_SCALE;
		stage.addEventListener(Event.RESIZE, onstageResized);
		stage.addEventListener(MouseEvent.CLICK,onStageClick);
	}
	function onStageClick(me:MouseEvent):Void{
		trace("CLICK");
		var pt:Point = IsoUtils.getTileAt(mouseX, mouseY * .5);
		var n:Dynamic = IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)];
		/*IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)].index = 99;
		IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)].ndType = "o";*/
		//trace(IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)]);
		unit.goTo(n.position);
	}
	function onstageResized(e:Event){
		//trace(stage.stageWidth + " --- " + stage.stageHeight);
		world.worldSize();
	}
	function update(e:Event){
		var time = Lib.getTimer();
		var delta = time - lastTime;
		unit.update(delta);
		world.update(delta);
		lastTime = time;
	}

}
