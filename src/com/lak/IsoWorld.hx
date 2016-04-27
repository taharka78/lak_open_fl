package com.lak;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.entities.IsoObject;
import com.lak.entities.IsoUnit;
import com.lak.manager.AttackMananger;
import com.lak.manager.LevelManager;
import com.lak.manager.EntitiesManager;
import openfl.display.DisplayObject;
import openfl.geom.Matrix;
import spritesheet.Spritesheet;
import com.lak.Camera;
import com.lak.isometric.entities.*;
import openfl.Lib;
import openfl.display.BitmapData;
import openfl.utils.ByteArray;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.geom.Point;
import com.lak.utils.IsoUtils;
import com.lak.utils.GameUtils;
import com.lak.events.MapEvent;
import openfl.events.Event;

class IsoWorld extends Sprite
{
	private var data:ByteArray;
	private var floor:Bitmap;
	public var aWorld:Array<Array<Dynamic>> = new Array<Array<Dynamic>>();
	public var tilesArray:Array<Array<Dynamic>> = new Array<Array<Dynamic>>();
			
	private var groundCanvas:BitmapData;
	public static var instance:IsoWorld;
	
	public var worldGrass:Spritesheet;
	private var mtrx:Matrix = new Matrix();
	
    public var viewRows:Int;
    public var viewWidth:Int;
    public var viewHeight:Int;
    public var worldTileWidth:Int;
    public var worldRows:Int;
    
	var worldTileHeight:Int;
    var levelData:Array<Dynamic> =new Array<Array<Dynamic>>();
	
    public var viewCols:Int;
	
    public var worldCols:Int;	
    public var mapTileWidth:Int;
    public var mapTileHeight:Int;
	
	var offsetXCost:Int = 0;
	var offsetYCost:Int = 0;
	
	var curentLevel:String = "0-0";
	
	public var worldColOffset:Int=0;
	public var worldRowOffset:Int = 0;
	public var viewRowOffset:Float;
	public var viewColOffset:Float;
	
	public var tileH:Int = 48;
	public var tileW:Int = 96;
	public var halfH:Int;
	public var halfW:Int;
	
	var pt:Point = new Point();
	public var worldObject:Array<IsoObject> = new Array<IsoObject>();
	public var entitiesManager:EntitiesManager;
	public var attackMananger:AttackMananger;
	private var wCamera:Camera;
	public var levelManager:LevelManager;
	
	/*
	 * ISOWORLD __CONSTRUCTOR__
	 */
	public function new()
	{
		super();		
		instance = this;
		addEventListener(Event.ADDED_TO_STAGE, onWorldaddedToStage);
	}
	/*
	 * @funcname onWorldaddedToStage @desc initialisation des spritesheet du world et des différents mananger
	 */
	function onWorldaddedToStage(e:Event)
	{
		worldGrass = Main.instance.sprSheetManager.getSpritesheet("world", "grass");
		
		viewRowOffset = 0;
        viewColOffset = 0;
		halfH = tileH >> 1;
		halfW = tileW >> 1;
		levelManager = new LevelManager();
		entitiesManager = new EntitiesManager(this);
		attackMananger = new AttackMananger(this);
		wCamera = new Camera(this, stage);
		worldSize(true);
		
	}
	/*
	 * @funcname worldSize @desc fonctio qui gère la taille du monde iso
	 * @arg _first @type Bool @desc variable qui permet de gérer l'etat initial du monde iso 
	 */
	public function worldSize(_first:Bool=false){
		viewWidth = stage.stageWidth;
        viewHeight = stage.stageHeight;
        mapTileWidth = 100;
        mapTileHeight = 100;
		 
        worldCols = mapTileWidth;
        worldRows = mapTileHeight;
		
        viewCols = Math.floor(viewHeight / halfH)+2;
        viewRows = Math.floor(viewWidth / halfW)+2;
		
		viewRows += Math.round(Math.abs(stage.stageWidth - (viewRows * halfW)) / halfW);
		viewCols += Math.round(Math.abs(stage.stageHeight - (halfH * viewCols)) / halfH);
		
		trace("viewCols  = " + viewCols+" WIDTH "+viewWidth);
        trace("viewRows = " + viewRows+" HEIGHT "+viewHeight);
        trace("setup map data ");
		
		setupMapData(curentLevel,1,1,true);
		if (_first == false){ stage.removeChild(floor); }
		groundCanvas = new BitmapData((viewWidth + tileW), (viewHeight + tileH));
		
		entitiesManager.updateViewBounds();
		
		floor = new Bitmap(groundCanvas);
		floor.x = -halfW;
		floor.y = -halfH;
		stage.addChild(floor);
		stage.setChildIndex(floor, 0);
	}
	/*
	 * @funcname setupMapData @desc fonction qui gère le changement de carte en fonction de la camera du monde iso
	 * @arg partNum @type Sring @desc nom de la partie à charger 
	 * @arg sensX @type Int @desc decris le sens de déplacement -1 vers la gauche 1 vers la droite
	 * @arg sensY @type Int @desc decris le sens de déplacement -1 vers le haut 1 vers le bas
	 */
	private function setupMapData(partNum:String="0-0",sensX:Int=1,sensY:Int=1,creation:Bool=false):Void{
		trace("map : part_"+partNum+".txt" +" SENSY ==> " + ((sensY == -1)? "vers le haut" : "vers le bas ")+ " SENSX ==>"+ ((sensX == -1)? "vers la gauche" : "vers la droite "));
		  
		if(sensX == 1){ 
			viewColOffset = worldColOffset-(100*(Std.parseFloat(partNum.split("-")[0])));
			if(viewColOffset < 0 )  viewColOffset = 0;
		}else if(sensX == -1){
			viewColOffset = worldColOffset; 
		}
		
		if(sensY == 1){
			viewRowOffset = worldRowOffset-(100*Std.parseFloat(partNum.split("-")[1]));
			if(viewRowOffset < 0 )  viewRowOffset = 0;
			
		}else if(sensY == -1){ viewRowOffset = worldRowOffset; viewColOffset = worldColOffset; }
		
		if (sensX == 1){ 
			viewColOffset = worldColOffset - (100 * Std.parseFloat(partNum.split("-")[0]));
			if(viewColOffset < 0 )  viewColOffset = 0;
		}else if(sensX == -1){
			
			viewColOffset = worldColOffset; 
		}
		if(sensY == 1){ worldRows += 100; }else{ worldRows -= 100; }
		if(sensX == 1){ worldCols += 100; }else{ worldCols -= 100; }
		
		levelData = levelManager.mapPartArray("part_"+partNum+".txt");
		setupWorld(creation);		
    }
	/*
	 * @funcname addChildToWorld @desc fonction qui gère l'ajout au monde iso d'objet isometrique
	 * @arg child @type IsoObject @desc object iso à ajouter au world 
	 * @return Void
	 */
	public function addChildToWorld(child:IsoObject):Void
	{
		var len:Int = worldObject.length;
		worldObject.insert(len,child);
		pt.x = child.x;
		pt.y = child.y;
			
		if(Std.is(child,IsoUnit)){ child.scale = child.scaleX; }
		addChild(child);
	}
	/*
	 * @funcname setupWorld @desc fonction qui gère le type des tiles affichées en fonction da la position de la camera du joueur sur la carte
	 * @arg createWorld @type Bool @desc si à true on créer les tiles visible et on les remets dans un tableau sinon on modifie les propriétés des tiles existantes
	 * @return Void
	 */
	private function setupWorld(createWorld:Bool=false):Void{
		var wRowCpt:Int = 0;
        var wColViewCpt:Int = 0;
		var pos:Point = new Point();
		wRowCpt = 0;
		 
		if (createWorld == true){
			tilesArray = new Array<Array<Dynamic>>();
			while(wRowCpt < viewCols){
			wColViewCpt = 0;
				while(wColViewCpt < viewRows)
				{
				  pos = IsoUtils.stageMapTilePlotter(new Point(wColViewCpt, wRowCpt),tileW,tileH);
				  if(tilesArray[Math.floor(pos.x/halfW)] == null ){ tilesArray[Math.floor(pos.x/halfW)] = new Array<Dynamic>(); }
				  tilesArray[Math.floor(pos.x/halfW)].insert(Math.floor(pos.y/halfH),{ndType:"none",position:new Point(pos.x,pos.y),index:-1});
				  wColViewCpt++;
				}
				wRowCpt++;
			}
		}
		wRowCpt = wColViewCpt =  wRowCpt = 0;
		while(wRowCpt < mapTileWidth){
           wColViewCpt = 0;
           while(wColViewCpt < mapTileHeight)
           {
			  pos = IsoUtils.stageMapTilePlotter(new Point(wColViewCpt, wRowCpt), tileW, tileH);
			  if (createWorld == true){
				  if(aWorld[wColViewCpt] == null ){ aWorld[wColViewCpt] = new Array<Dynamic>(); }
				  aWorld[wColViewCpt].insert(wRowCpt,{ndType:"g",x:pos.x,y:pos.y});
			  }else{
				aWorld[wColViewCpt][wRowCpt].ndType = (levelData[wRowCpt][wColViewCpt]);
				aWorld[wColViewCpt][wRowCpt].position.x = pos.x;
				aWorld[wColViewCpt][wRowCpt].position.y = pos.y;
			  }
              wColViewCpt++;
           }
           wRowCpt++;
        }
	}
	/*
	 * @funcname drawView @desc fonction qui gère le dessin des tiles visible sur l'écran du joueur en fonction la position de la camara sur le world
	 * @return Void
	 */
	private function drawView():Void{
		  
         var rowCpt:String = "";
         var colCpt:Int = 0;
         var rowViewCpt:Int = 0;
         var colViewCpt:Int = 0;
		 var indexX:Int=0;
		 var indexY:Int=0;
		 var part:String="0-0";
		 var bmp:Bitmap = new Bitmap();
		 var n:Dynamic;
		 var nW:Dynamic;
		 groundCanvas.unlock();
		 
         while(rowViewCpt < viewRows)
         {
            colViewCpt = 0;
            while(colViewCpt < viewCols)
            {
				if(viewRowOffset > 100){ viewRowOffset = viewRowOffset%100; }
				if (viewColOffset > 100){ viewColOffset = viewColOffset % 100; }
				if (rowViewCpt < 100 && colViewCpt < 100){
					nW = aWorld[Std.int(rowViewCpt + viewRowOffset)][Std.int(colViewCpt + viewColOffset)];
					n = tilesArray[rowViewCpt][colViewCpt];
					if (nW != null && n != null && nW.ndType != n.ndType){
						n.ndType = nW.ndType;
						mtrx.tx = n.position.x;
						mtrx.ty = n.position.y;
						if(n.index == -1){
							bmp.bitmapData = worldGrass.getFrame(GameUtils.random(0, 99)).bitmapData;
						}else{
							bmp.bitmapData = worldGrass.getFrame(n.index).bitmapData;
						}
						groundCanvas.draw(bmp,mtrx);
					}
				}
				colViewCpt++;
            }
            rowViewCpt++;
        }
		
		groundCanvas.lock();
		indexY = Std.int(rowViewCpt+viewRowOffset)%100;
		indexX = Std.int(colViewCpt+viewColOffset)%100;
			
		offsetYCost = Math.floor((rowViewCpt+worldRowOffset)/100);
		offsetXCost = Math.floor((colViewCpt+worldColOffset)/100);
		
		part = offsetXCost+"-"+offsetYCost;
		if(part != curentLevel){
			var rorl:Int;
			var bort:Int;
			(Std.parseFloat(curentLevel.split("-")[0]) > Std.parseFloat(part.split("-")[0])) ? rorl =-1 : rorl = 1;
			(Std.parseFloat(curentLevel.split("-")[1]) > Std.parseFloat(part.split("-")[1])) ? bort=-1 : bort=1;
			curentLevel = part; 
			setupMapData(part,rorl,bort);
		}
    }
	/*
	 * @funcname update @desc function de mise à jour globale des propriétés du world
	 * @return Void
	 */
	public function update(delta):Void{
		drawView();
		wCamera.checkKeys();
		entitiesManager.run();
		attackMananger.run();
	}
}