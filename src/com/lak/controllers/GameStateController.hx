package com.lak.controllers;

import com.lak.renderers.Renderer;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class GameStateController
{

	public static function enableSelection(){
		Renderer.instance.canDrawRect = true;
	}
	public static function disabledSelection(){
		Renderer.instance.selectionSprt.graphics.clear();
		Renderer.instance.canDrawRect = false;
	}
	
}