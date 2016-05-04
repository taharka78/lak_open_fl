package;

import com.lak.display.FPS_Mem;
import com.lak.controllers.events.UnitEvent;
import com.lak.entities.IsoUnit;
import com.lak.simulator.Simulator;
import com.lak.simulator.gamestate.IGameState;
import com.lak.simulator.gamestate.InitialState;
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
import com.lak.simulator.manager.*;
import com.lak.utils.IsoUtils;
import com.lak.utils.GameUtils;
import com.lak.controllers.*;
import com.lak.renderers.Renderer;
import openfl.events.KeyboardEvent;
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
	public var simulateur:Simulator;
	public var state:IGameState;
	private var initState:InitialState = new InitialState();
	public function new() 
	{
		super();
		addChild(new FPS_Mem());
		state = initState; 
		instance = this;
		addEventListener(Event.ADDED_TO_STAGE, onMainAdded);
	}
	
	function onMainAdded(e:Event){
		removeEventListener(Event.ADDED_TO_STAGE, onMainAdded);
		
		realWidth = stage.stageWidth;
		realHeight = stage.stageHeight;
		
		world = new IsoWorld();
		addChild(world);
		
		/*var sprt:Sprite = new Sprite();
		sprt.graphics.beginFill( 0x458B00, 0.4 );
		sprt.graphics.lineStyle(3, 0x3B5323, 0.6);
		sprt.graphics.drawRect(0,0,100,100);
		sprt.graphics.endFill();
		world.addChild(sprt);*/
		
		simulateur = new Simulator();
		UnitController.create("king");
		/*unit = new IsoUnit();
		//unit.initilizeUnit("general");
		unit.currentAction = "stay";
		unit.x = 480;
		unit.y = 288;
		world.addChildToWorld(unit);*/
		
		addEventListener(Event.ENTER_FRAME, update);
		
		stage.scaleMode = StageScaleMode.NO_SCALE;
		stage.addEventListener(Event.RESIZE, onstageResized);
		stage.addEventListener(MouseEvent.CLICK,onStageClick);
		stage.addEventListener(MouseEvent.MOUSE_DOWN,onStageMouseDown);
		stage.addEventListener(MouseEvent.MOUSE_UP,onStageMouseUp);
		stage.addEventListener(MouseEvent.MOUSE_MOVE, onStageMouseMove);
		stage.addEventListener(KeyboardEvent.KEY_DOWN,keyDownListener);
        stage.addEventListener(KeyboardEvent.KEY_UP, keyUpListener);
	}
	private function keyDownListener(kevt:KeyboardEvent):Void{ 
		simulateur.aKeyPress[kevt.keyCode] = true; 
	}
	private function keyUpListener(kevt:KeyboardEvent):Void{ 
		simulateur.aKeyPress[kevt.keyCode] = false; 
	}
	
	function onStageMouseDown(me:MouseEvent){
		state.mousedown();
	}
	function onStageMouseUp(me:MouseEvent){
		state.mouseup();
	}
	function onStageMouseMove(me:MouseEvent){
		state.mousemove();
	}
	function onStageClick(me:MouseEvent):Void{
		state.mouseclick();
		
		//trace(IsoWorld.instance.tilesArray[Std.int(pt.x)][Std.int(pt.y)]);
		//world.levelManager.get9Nodes(unit);
		//unit.goTo(n.position);
	}
	function onstageResized(e:Event){
		world.worldSize();
		simulateur.entitiesManager.updateViewBounds();
	}
	function update(e:Event){
		var time = Lib.getTimer();
		var delta = time - lastTime;
		simulateur.run(delta);
		lastTime = time;
	}

}
