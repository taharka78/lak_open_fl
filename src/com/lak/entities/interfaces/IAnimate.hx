package com.lak.entities.interfaces;
import spritesheet.AnimatedSprite;

/**
 * @author Moussa & Sissoko
 */
interface IAnimate 
{
  public var phase:String = "";
  public var currentAction:String = "";
  public var spriteSheet:AnimatedSprite;
  public var scale:Float = 1;
  public var angle:Int = 0;
}