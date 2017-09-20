package com.lak.simulator.handler;

import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.isometric.Config;
import com.lak.simulator.renderers.GraphicRenderer;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class InputHandler 
{
	/*
	 * @funcname checkKeys @desc mouvement de la camera du world en fonction des flèches du clavier.
	 * @return Void.
	 */
	public static function checkKeys(aKeyPress):Void
    {
		  //trace(" key "+aKeyPress[38]);
         if(aKeyPress[38])
         {
			//trace("HAUT");
            IsoWorld.instance.COLONNE_VISIBLE_OFFSET--;
			IsoWorld.instance.OFFSET_COLONNE_WORLD--;
            
			if (IsoWorld.instance.COLONNE_VISIBLE_OFFSET < 0){ 
				IsoWorld.instance.COLONNE_VISIBLE_OFFSET = 0; 
			}
            if (IsoWorld.instance.OFFSET_COLONNE_WORLD < 0){ 
				IsoWorld.instance.OFFSET_COLONNE_WORLD = 0;
				IsoWorld.instance.y = 0;
			}else{ 
				IsoWorld.instance.y+=Config.OFFSETY; 
			}
			
         }
         if(aKeyPress[40])
         {
			// trace("BAS");
            IsoWorld.instance.COLONNE_VISIBLE_OFFSET++;
			IsoWorld.instance.OFFSET_COLONNE_WORLD++;
			
			if (IsoWorld.instance.OFFSET_COLONNE_WORLD >= 900){ 
				IsoWorld.instance.OFFSET_COLONNE_WORLD = 900;
				IsoWorld.instance.y = 90000; 
			}else{ 
				IsoWorld.instance.y -= Config.OFFSETY; 
			}
         }
         if(aKeyPress[37])
         {
			// trace("GAUCHE");
            IsoWorld.instance.LIGNE_VISIBLE_OFFSET--;
			IsoWorld.instance.OFFSET_LIGNE_WORLD--;
            if(IsoWorld.instance.LIGNE_VISIBLE_OFFSET < 0){ IsoWorld.instance.LIGNE_VISIBLE_OFFSET = 0; }
            if (IsoWorld.instance.OFFSET_LIGNE_WORLD < 0){ IsoWorld.instance.OFFSET_LIGNE_WORLD = 0; IsoWorld.instance.x = 0; }
			else{ IsoWorld.instance.x += IsoWorld.instance.tileW; }
         }
         if(aKeyPress[39])
         {
			// trace("DROITE");
			IsoWorld.instance.LIGNE_VISIBLE_OFFSET++;
			IsoWorld.instance.OFFSET_LIGNE_WORLD++;
			if (IsoWorld.instance.OFFSET_LIGNE_WORLD >= 900){ IsoWorld.instance.OFFSET_LIGNE_WORLD = 900; IsoWorld.instance.x = 90000; }
			else{ IsoWorld.instance.x -= IsoWorld.instance.tileW; }
         }
    }
	
}