package com.lak.display;
import com.lak.simulator.isometric.world.IsoWorld;
import openfl.display.Sprite;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class SelectionSprite extends Sprite
{
	var selectedUnitCpt:Int = 0;
	var sprt:Sprite = new Sprite();
	public var selectionRect:Rectangle = new Rectangle();
	public function new() 
	{
		super();
	}
	public function drawRect():Void
	{
		graphics.clear();
		selectedUnitCpt = 0;
		selectionRect.width = IsoWorld.instance.mouseX - selectionRect.x;
		selectionRect.height = IsoWorld.instance.mouseY - selectionRect.y;
		graphics.lineStyle(3, 0x3B5323, 0.6);
		graphics.beginFill( 0x458B00, 0.4 );
		graphics.drawRect( selectionRect.x, selectionRect.y, selectionRect.width, selectionRect.height );
		graphics.endFill();
	}
	
	
}