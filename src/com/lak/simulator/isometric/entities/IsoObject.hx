package com.lak.simulator.isometric.entities;
import com.lak.simulator.isometric.entities.units.states.State;
import openfl.geom.Point;
import openfl.display.Sprite;
import spritesheet.AnimatedSprite;
import com.lak.simulator.isometric.entities.interfaces.IState;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class IsoObject extends Sprite
{
	public var type:String = "";
	public var hasBullet:Bool = false;
	public var canAttack:Bool = false;
	public var isAttack:Bool = false;
	public var spriteSheet:AnimatedSprite;
	public var scale:Float = 1;
	public var currentAction:String="";
	public var phase:String = "";
	public var angle:Float = 0;
	public var clone:Bool = false;
	public var isLive:Bool = true;
	public var speed:Float = .7;
	public var ownerID:String;
	public var state:State;
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
	 * Affiche le point de pivot (0,0) de l'IsoObject
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