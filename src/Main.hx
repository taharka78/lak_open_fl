package;


import motion.MotionPath;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.display.FPS;
import openfl.display.StageScaleMode;
import openfl.display.Sprite;
import openfl.geom.Point;
import openfl.Assets;
import openfl.Lib;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.KeyboardEvent;

import spritesheet.AnimatedSprite;

import ru.stablex.ui.UIBuilder;
import ru.stablex.ui.widgets.VBox;

import com.lak.ui.LAKUI;
import com.lak.core.managers.SpritesheetManager;
import com.lak.core.display.FPS_Mem;
import com.lak.core.player.Player;
import com.lak.core.utils.GameUtils;
import com.lak.core.managers.LevelManager;

import com.lak.controllers.*;

import com.lak.simulator.renderers.GraphicRenderer;
import com.lak.simulator.isometric.entities.units.events.UnitEvent;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.Simulator;
import com.lak.simulator.gamestate.IGameState;
import com.lak.simulator.gamestate.InitialState;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.manager.*;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.simulator.command.CreateUnitCommand;
import com.lak.simulator.command.CreateBuildingCommand;
import com.lak.simulator.controllers.GameStateController;
import com.lak.simulator.gamestate.BuilderState;
import com.lak.simulator.gamestate.InitialState;
import motion.Actuate;
// Message serveur
import com.lak.network.MessageHandler;
import com.lak.network.MessageIdentifiers;
import com.lak.network.UnitPositionMsg;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class Main extends Sprite 
{	
	//--------------------------------------------------------------------------
	//
	//  Variables
	//
	//--------------------------------------------------------------------------
	private var lastTime:Int = 0;
	private var unit:IsoUnit;
	public var sprSheetManager:SpritesheetManager = new SpritesheetManager();
	public var world:IsoWorld = null;
	public static var instance:Main;
	public var realWidth:Int;
	public var realHeight:Int;
	public var simulateur:Simulator;
	public var state:IGameState;
	public var initialState:InitialState = new InitialState();
	public var builderState:BuilderState = new BuilderState();
	public var gameUI:LAKUI;
	//----------------------------------
	//  CONSTANTS
	//----------------------------------
	
	public function new() 
	{
		super();
		instance = this;
		var fps = new FPS_Mem();
		fps.x = (stage.stageWidth - fps.width);
		addChild(fps);
		
		gameUI = new LAKUI();
		GameStateController.initial();
		addEventListener(Event.ADDED_TO_STAGE, onMainAdded);
	}
	
	private function onMainAdded(e:Event){
		
		removeEventListener(Event.ADDED_TO_STAGE, onMainAdded);
		
		MessageHandler.registerNewMessage(MessageIdentifiers.UN_POSITIONS, new UnitPositionMsg());
		
		var player:Player;
		player = new Player();
		player.connect("127.0.0.1",8888);
		
		realWidth = stage.stageWidth;
		realHeight = stage.stageHeight;
		
		// initialisation de stablexui
		simulateur = new Simulator();	
		
		// Event's listener
		stage.scaleMode = StageScaleMode.NO_SCALE;
		stage.addEventListener(Event.ENTER_FRAME, update);
		stage.addEventListener(Event.RESIZE, onstageResized);
		stage.addEventListener(MouseEvent.CLICK,onStageClick);
		stage.addEventListener(MouseEvent.MOUSE_DOWN,onStageMouseDown);
		stage.addEventListener(MouseEvent.MOUSE_UP,onStageMouseUp);
		stage.addEventListener(MouseEvent.MOUSE_MOVE, onStageMouseMove);
		stage.addEventListener(KeyboardEvent.KEY_DOWN,keyDownListener);
        stage.addEventListener(KeyboardEvent.KEY_UP, keyUpListener);

		for (i in 0...1){
			CreateUnitCommand.execute("general", "1", 192,(192+(i*48)));
		}
		for (i in 0...1){
			CreateUnitCommand.execute("archer", "2", 384,(192+(i*48)));
		}
		/*for (i in 0...12){
			CreateUnitCommand.execute("general", "1", 576,(192+(i*48)));
		}*/
		
		//CreateUnitCommand.execute("cavalier","2",384,384);
		
		//var temp_pt = IsoUtils.pxToPos(new Point(384, 192));
		//var n = LevelManager.instance.getNodeAt(Std.int(temp_pt.x),Std.int(temp_pt.y));
		//CreateBuildingCommand.execute("caserne", new Point(192, 192));
	}
	
	//--------------------------------------------------------------------------
	//
	//  Private methods
	//
	//--------------------------------------------------------------------------
	//
		
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
