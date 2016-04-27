package com.lak;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import openfl.display.Stage;
import openfl.events.Event;
import openfl.display.Sprite;
import openfl.geom.Rectangle;
import openfl.geom.Point;
import openfl.events.KeyboardEvent;
import com.lak.IsoWorld;

class Camera
{
	private var aKeyPress:Array<Bool> = new Array<Bool>();
	private var world:IsoWorld;
	/*
	 * CAMERA __CONSTRUCTOR__
	 * @arg _world @type IsoWorld @desc instance isoworld
	 * @arg _stg @type Stage @desc instance Stage
	 */
	public function new(_world:IsoWorld,_stg:Stage) 
	{
		world = _world;
		_stg.addEventListener(KeyboardEvent.KEY_DOWN,keyDownListener);
        _stg.addEventListener(KeyboardEvent.KEY_UP, keyUpListener);
	}
	private function keyDownListener(kevt:KeyboardEvent):Void{ aKeyPress[kevt.keyCode] = true; }
	private function keyUpListener(kevt:KeyboardEvent):Void{ aKeyPress[kevt.keyCode] = false; }
	/*
	 * @funcname checkKeys @desc mouvement de la camera du world en fonction des flèches du clavier.
	 * @return Void.
	 */
	public function checkKeys() : Void
    {
		  //trace(" key "+aKeyPress[38]);
         if(aKeyPress[38])
         {
			//trace("HAUT");
            world.viewRowOffset--;
			world.worldRowOffset--;
            if(world.viewRowOffset < 0){ world.viewRowOffset = 0; }
            if(world.worldRowOffset < 0){ world.worldRowOffset = 0; }
         }
         if(aKeyPress[40])
         {
			// trace("BAS");
            world.viewRowOffset++;
			world.worldRowOffset++;
			 
			if(world.viewRowOffset > world.mapTileWidth - world.viewRows){ world.viewRowOffset = world.mapTileWidth - world.viewRows; }
			if(world.worldRowOffset > world.worldRows - world.viewRows){ world.worldRowOffset = world.worldRows - world.viewRows; }
			if(world.worldRowOffset >= 900){ world.worldRowOffset = 900; }
         }
         if(aKeyPress[37])
         {
			// trace("GAUCHE");
            world.viewColOffset--;
			world.worldColOffset--;
            if(world.viewColOffset < 0){ world.viewColOffset = 0; }
            if(world.worldColOffset < 0){ world.worldColOffset = 0; }
         }
         if(aKeyPress[39])
         {
			// trace("DROITE");
			world.viewColOffset++;
			world.worldColOffset++;
			if(world.viewColOffset > world.mapTileHeight - world.viewCols){ world.viewColOffset = world.mapTileHeight - world.viewCols; }
			if(world.worldColOffset > world.worldCols - world.viewCols){ world.worldColOffset = world.worldCols - world.viewCols; }
			if(world.worldColOffset >= 900){ world.worldColOffset = 900; }
         }
    }
}