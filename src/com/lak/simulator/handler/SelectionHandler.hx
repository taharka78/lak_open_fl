package com.lak.simulator.handler;

import com.lak.simulator.renderers.GraphicRenderer;
import com.lak.simulator.controllers.GameStateController;
import com.lak.simulator.renderers.GraphicRenderer;
import com.lak.simulator.isometric.world.IsoWorld;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class SelectionHandler 
{
	
	public static function makeSelection(){
		
		GraphicRenderer.instance.canDrawRect = true;
		IsoWorld.instance.setChildIndex(GraphicRenderer.instance.selectionSprt, IsoWorld.instance.numChildren - 1);
		GraphicRenderer.instance.selectionSprt.selectionRect.x = IsoWorld.instance.mouseX;
		GraphicRenderer.instance.selectionSprt.selectionRect.y = IsoWorld.instance.mouseY;
	}
	
	public static function disabledSelection(){
		GraphicRenderer.instance.selectionSprt.graphics.clear();
		GraphicRenderer.instance.canDrawRect = false;
	}
	
}