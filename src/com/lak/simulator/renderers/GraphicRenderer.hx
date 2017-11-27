package com.lak.simulator.renderers;
import com.lak.simulator.isometric.world.IsoWorld;
import com.lak.simulator.isometric.entities.IsoObject;
import com.lak.display.SelectionSprite;
import com.lak.simulator.Simulator;
/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class GraphicRenderer
{
	public var selectionSprt:SelectionSprite = new SelectionSprite();
	static public var instance:GraphicRenderer;
	public var canDrawRect:Bool = false;
	
	public function new() 
	{
		instance = this;
	}
	public function initSelectionRenderer():Void{
		IsoWorld.instance.addChild(selectionSprt);
	}
	/* @funcname createEllipse affichage de l'ellipse de selection sous l'unité
	 * @arg obj @type IsoObject @desc l'objet cible du dessin de l'ellipse.
	 * @arg color @type Int @desc couleur de la bordure de l'elipse.
	 */
	public function createEllipse(obj:IsoObject,color:Int):Void
	{	
		//var l:Int = Math.floor(this.life*width/this.maxLife);
		obj.graphics.clear();
		
		obj.graphics.beginFill(color);
		//graphics.drawRect(-l>>1,bitmap.y-30,l,5);
		obj.graphics.drawRect(-Std.int(obj.width)>>1,-(obj.height+10),obj.width,5);
		obj.graphics.endFill();
		
		obj.graphics.lineStyle(2,color);
		obj.graphics.drawEllipse(-Std.int(obj.width)>>1,-Std.int(obj.height)/4,obj.width,Std.int(obj.height)>>1);
		obj.graphics.endFill();
		centerPoint(obj);
	}
	
	/*
	 * @funcname centerPoint affichage du point de pivot d'un élément isometrique
	 * @arg obj @type IsoObject @desc l'objet cible du dessin du point de pivot.
	 */
	public function centerPoint(obj:IsoObject){
		obj.graphics.beginFill(0x0000ff);
		obj.graphics.drawCircle(-2.5,-2.5,5);
		obj.graphics.endFill();
	}
	public function destroyEllipse(obj:IsoObject):Void{
			obj.graphics.clear();
			centerPoint(obj);
			//ObjectPool.instance.returnObj(barLife);
			//removeChild(barLife);
	}
	public function run(delta:Int){
		if (canDrawRect){ 
			selectionSprt.drawRect();
			Simulator.instance.checkForSelection(); 
		}
		if(IsoWorld.instance != null) IsoWorld.instance.drawView();
	}
	
}