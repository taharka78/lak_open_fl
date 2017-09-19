package com.lak.controllers;

import com.lak.simulator.renderers.GraphicRenderer;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class GameStateController
{

	public static function enableSelection(){
		GraphicRenderer.instance.canDrawRect = true;
	}
	public static function disabledSelection(){
		GraphicRenderer.instance.selectionSprt.graphics.clear();
		GraphicRenderer.instance.canDrawRect = false;
	}
	
}