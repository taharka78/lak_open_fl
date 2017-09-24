package com.lak.simulator.isometric.world;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.simulator.isometric.entities.IsoObject;
import com.lak.simulator.isometric.entities.units.IsoUnit;
import com.lak.simulator.isometric.Config;
import com.lak.simulator.isometric.grid.Node;
import com.lak.simulator.manager.AttackManager;
import com.lak.core.managers.LevelManager;
import com.lak.simulator.manager.EntitiesManager;
import openfl.display.DisplayObject;
import openfl.display.Shape;
import openfl.geom.Matrix;
import spritesheet.Spritesheet;
import com.lak.isometric.entities.*;
import openfl.Lib;
import openfl.display.BitmapData;
import openfl.utils.ByteArray;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.geom.Point;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.core.utils.GameUtils;
import com.lak.simulator.isometric.world.events.MapEvent;
import openfl.events.Event;

class IsoWorld extends Sprite
{
	private var data:ByteArray;
	private var floor:Bitmap;
	//public var aWorld:Array<Array<Dynamic>> = new Array<Array<Dynamic>>();
	public var tilesArray:Array<Array<Node>> = new Array<Array<Node>>();
			
	private var groundCanvas:BitmapData;
	public static var instance:IsoWorld;
	
	public var worldGrass:Spritesheet;
	private var mtrx:Matrix = new Matrix();
	
    public var NB_TILE_W:Int;
    public var VIEW_WIDTH:Int;
    public var VIEW_HEIGHT:Int;
    public var worldTileWidth:Int;
    public var NB_LIGNE_WORLD:Int;
    
	var worldTileHeight:Int;
    public var levelData:Array<Dynamic> =new Array<Array<Dynamic>>();
	
    public var NB_TILE_H:Int;
	
    public var NB_COLONNE_WORLD:Int;	
    public var PART_NUM_TILE_W:Int;
    public var PART_NUM_TILE_H:Int;
	
	var offsetXCost:Int = 0;
	var offsetYCost:Int = 0;
	
	var curentLevel:String = "0-0";
	
	public var OFFSET_LIGNE_WORLD:Int=0;
	public var OFFSET_COLONNE_WORLD:Int = 0;
	public var COLONNE_VISIBLE_OFFSET:Float;
	public var LIGNE_VISIBLE_OFFSET:Float;
	
	public var tileH:Int;
	public var tileW:Int;
	
	private var centerpt:Shape = new Shape();
	
	var pt:Point = new Point();
	public var worldObject:Array<IsoObject> = new Array<IsoObject>();
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
		
		COLONNE_VISIBLE_OFFSET = 0;
        LIGNE_VISIBLE_OFFSET = 0;
		
		tileH = Config.TILE_HEIGHT;
		tileW = Config.TILE_WIDTH;
		
		
		centerpt.graphics.beginFill(0xFF0000);
		centerpt.graphics.drawCircle(2.5, 2.5, 5);
		
		levelManager = new LevelManager();
		worldSize(true);
		
	}
	/*
	 * @funcname worldSize @desc fonctio qui gère la taille du monde iso
	 * @arg _first @type Bool @desc variable qui permet de gérer l'etat initial du monde iso 
	 */
	public function worldSize(_first:Bool=false){
		VIEW_WIDTH = stage.stageWidth;
        VIEW_HEIGHT = stage.stageHeight;
		
        PART_NUM_TILE_W = 100;
        PART_NUM_TILE_H = 100;
		 
        NB_COLONNE_WORLD = PART_NUM_TILE_W;
        NB_LIGNE_WORLD = PART_NUM_TILE_H;
		
        NB_TILE_W = Math.floor(VIEW_WIDTH/tileW)+2;
        NB_TILE_H = Math.floor(VIEW_HEIGHT/Config.OFFSETY)+2;
		
		/*trace("NB_TILE_H  = " + NB_TILE_H+" WIDTH "+VIEW_WIDTH);
        trace("NB_TILE_W = " + NB_TILE_W+" HEIGHT "+VIEW_HEIGHT);
        trace("setup map data ");*/
		
		setupMapData(curentLevel,1,1,true);
		if (_first == false){ stage.removeChild(floor); }
		groundCanvas = new BitmapData((VIEW_WIDTH + tileW), (VIEW_HEIGHT + tileH));
		
		floor = new Bitmap(groundCanvas);
		//floor.x = -Config.OFFSETX;
		//floor.y = -Config.OFFSETY;
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
			LIGNE_VISIBLE_OFFSET = OFFSET_LIGNE_WORLD-(PART_NUM_TILE_W*(Std.parseFloat(partNum.split("-")[0])));
			if(LIGNE_VISIBLE_OFFSET < 0 )  LIGNE_VISIBLE_OFFSET = 0;
		}else if(sensX == -1){
			LIGNE_VISIBLE_OFFSET = OFFSET_LIGNE_WORLD; 
		}
		
		if(sensY == 1){
			COLONNE_VISIBLE_OFFSET = OFFSET_COLONNE_WORLD-(PART_NUM_TILE_H*Std.parseFloat(partNum.split("-")[1]));
			if(COLONNE_VISIBLE_OFFSET < 0 )  COLONNE_VISIBLE_OFFSET = 0;
			
		}else if(sensY == -1){ COLONNE_VISIBLE_OFFSET = OFFSET_COLONNE_WORLD; LIGNE_VISIBLE_OFFSET = OFFSET_LIGNE_WORLD; }
		
		if (sensX == 1){ 
			LIGNE_VISIBLE_OFFSET = OFFSET_LIGNE_WORLD - (PART_NUM_TILE_W * Std.parseFloat(partNum.split("-")[0]));
			if(LIGNE_VISIBLE_OFFSET < 0 )  LIGNE_VISIBLE_OFFSET = 0;
		}else if(sensX == -1){
			
			LIGNE_VISIBLE_OFFSET = OFFSET_LIGNE_WORLD; 
		}
		if(sensY == 1){ NB_LIGNE_WORLD += PART_NUM_TILE_H; }else{ NB_LIGNE_WORLD -= PART_NUM_TILE_H; }
		if (sensX == 1){ NB_COLONNE_WORLD += PART_NUM_TILE_W; }else{ NB_COLONNE_WORLD -= PART_NUM_TILE_W; }
		
		levelData = levelManager.mapPartArray("part_" + partNum + ".txt");
		if (creation == true){ setupWorld(); }
		
    }
	/*
	 * @funcname addChildToWorld @desc fonction qui gère l'ajout au monde iso d'objet isometrique
	 * @arg child @type IsoObject @desc object iso à ajouter au world 
	 * @return Void
	 */
	public function removeChildFromWorld(child:IsoObject):Void
	{
		worldObject.remove(child);
		removeChild(child);
	}
	/*
	 * @funcname addChildToWorld @desc fonction qui gère l'ajout au monde iso d'objet isometrique
	 * @arg child @type IsoObject @desc object iso à ajouter au world 
	 * @return Void
	 */
	public function addChildToWorld(child:IsoObject):Void
	{
		worldObject.insert(worldObject.length, child);
		
		pt.x = child.x;
		pt.y = child.y;
			
		if (Std.is(child, IsoUnit)){ child.scale = child.scaleX; }
		addChild(child);
	}
	/*
	 * @funcname setupWorld @desc fonction qui gère le type des tiles affichées en fonction da la position de la camera du joueur sur la carte
	 * @arg createWorld @type Bool @desc si à true on créer les tiles visible et on les remets dans un tableau sinon on modifie les propriétés des tiles existantes
	 * @return Void
	 */
	private function setupWorld():Void{
		var wRowCpt:Int = 0;
        var wColViewCpt:Int = 0;
		var pos:Point = new Point();
		wRowCpt = 0;
		
		tilesArray = new Array<Array<Node>>();
		while (wRowCpt < NB_TILE_W){
			wColViewCpt = 0;
			while(wColViewCpt < NB_TILE_H)
			{
			  if (tilesArray[wRowCpt] == null ){ tilesArray[wRowCpt] = new Array<Node>(); }
			  tilesArray[wRowCpt].push(new Node("none",IsoUtils.posToPx(new Point(wColViewCpt, wRowCpt)),-1));
			  wColViewCpt++;
			}
			wRowCpt++;
		}
	}
	
	/*
	 * @funcname drawView @desc fonction qui gère le dessin des tiles visible sur l'écran du joueur en fonction la position de la camara sur le world
	 * @return Void
	 */
	public function drawView():Void{
		  
         var rowCpt:String = "";
         var colCpt:Int = 0;
         var lineViewCpt:Int = 0;
         var colViewCpt:Int = 0;
		 var indexX:Int=0;
		 var indexY:Int=0;
		 var part:String="0-0";
		 var bmp:Bitmap = new Bitmap();
		 var n:Dynamic;
		 var nW:Dynamic;
		 var pos:Point;
		 
		 groundCanvas.unlock();
         while(lineViewCpt < NB_TILE_W)
         {
            colViewCpt = 0;
            while(colViewCpt < NB_TILE_H)
            {
				pos = IsoUtils.posToPx(new Point(lineViewCpt,colViewCpt));
				if (COLONNE_VISIBLE_OFFSET > PART_NUM_TILE_W){ 
					COLONNE_VISIBLE_OFFSET = COLONNE_VISIBLE_OFFSET%PART_NUM_TILE_W; 
				}
				if (LIGNE_VISIBLE_OFFSET > PART_NUM_TILE_H){ 
					LIGNE_VISIBLE_OFFSET = LIGNE_VISIBLE_OFFSET%PART_NUM_TILE_H; 
				}
				if (lineViewCpt < PART_NUM_TILE_H && colViewCpt < PART_NUM_TILE_W){
					nW = LevelManager.instance.getNodeAt(Std.int(lineViewCpt + LIGNE_VISIBLE_OFFSET),Std.int(colViewCpt + COLONNE_VISIBLE_OFFSET));
					n = tilesArray[lineViewCpt][colViewCpt];
					if (nW != null && n != null && nW.ndType != n.ndType){
						n.position  = nW.position;
						n.ndType = nW.ndType;
						
						mtrx.tx = pos.x-Config.OFFSETX;
						mtrx.ty = pos.y-Config.OFFSETY;
						
			
						if (n.index == -1){ bmp.bitmapData = worldGrass.getFrame(0).bitmapData; }
						else{ bmp.bitmapData = worldGrass.getFrame(n.index).bitmapData; }
						
						groundCanvas.draw(bmp, mtrx);
						
						if (nW.selected){
							groundCanvas.draw(worldGrass.getFrame(1).bitmapData, mtrx);
							/*mtrx.tx = nW.position.x;
							mtrx.ty = nW.position.y;							
							groundCanvas.draw(centerpt, mtrx);*/
							
						}
						
					}
				}
				colViewCpt++;
            }
            lineViewCpt++;
		}
		groundCanvas.lock();
		
		offsetYCost = Math.floor((lineViewCpt+OFFSET_COLONNE_WORLD)/PART_NUM_TILE_H);
		offsetXCost = Math.floor((colViewCpt + OFFSET_LIGNE_WORLD)/PART_NUM_TILE_W);
		part = offsetXCost + "-" + offsetYCost;
		
		if(part != curentLevel){
			var rorl:Int;
			var bort:Int;
						
			(Std.parseFloat(curentLevel.split("-")[0]) > Std.parseFloat(part.split("-")[0])) ? rorl =-1 : rorl = 1;
			(Std.parseFloat(curentLevel.split("-")[1]) > Std.parseFloat(part.split("-")[1])) ? bort=-1 : bort=1;
			curentLevel = part;
			
			setupMapData(part,rorl,bort);
		}
    }
}