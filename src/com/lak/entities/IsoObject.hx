package com.lak.entities;
import flash.geom.Point;
import openfl.display.Sprite;
import spritesheet.AnimatedSprite;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class IsoObject extends Sprite
{
	public var type:String = "";
	public var hasBullet:Bool = false;
	public var hasPath:Bool = false;
	public var canAttack:Bool = false;
	public var isAttack:Bool = false;
	public var spriteSheet:AnimatedSprite;
	public var scale:Float = 1;
	public var currentAction:String="";
	public var phase:String = "";
	public var angle:Int = 0;
	public var clone:Bool = false;
	public var isLive:Bool = true;
	public var speed:Float = 2;	
	/*
	 * Constructeur
	 * Classe qde base de tous les Objets isométriques
	 */
	public function new() 
	{
		super();
	}
	public function update(delta:Int):Void{
		
	}
	/*
	 * Affiche le point de pivot (0,0) de l'isoObject
	 * */
	public function centerPoint(){
		graphics.beginFill(0x0000ff);
		graphics.drawCircle(-2.5,-2.5,5);
		graphics.endFill();
	}
	public function renew():Void{
		
	}
	public function destroy():Void{
		
	}
	
}