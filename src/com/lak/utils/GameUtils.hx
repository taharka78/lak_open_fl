package com.lak.utils;
import flash.geom.Point;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class GameUtils
{
	public static function getAngleBetweenPt(pt1:Point,pt2:Point):Float
	{
		var dx:Float = pt2.x - pt1.x;
		var dy:Float = pt2.y - pt1.y;
		var angle:Float = (Math.atan2(dy,dx)*(180/Math.PI));
		if(angle < 0){ angle = angle + 360; }
		return angle;
	}		
		
	public static function sortByF(a:Dynamic,b:Dynamic):Int{
		if (a.f < b.f){ return -1; }
		if (a.f > b.f){ return 1; }
		return 0;
	}
	/*
	 * @funcname random @desc valeur aléatoire entre deux valeur
	 * @arg min @type Int @desc valeur minimale souhaitée
	 * @arg max @type Int @desc valeur maximale souhaitée
	 * @return Int.
	 */
	public static function random(min:Int, max:Int):Int
    {
        return Math.floor(min + Math.random() * (max - min));
    }
	public static function distanceBetweenPt(pt1:Point, pt2:Point){
		return (Math.sqrt(Math.pow((pt1.x - pt2.x), 2) + Math.pow((pt1.y - pt2.y), 2)));
	}
	/*
	 * @funcname toIsoCoord @desc transformer un point donné en une coordonnée sur la grille de tiles
	 * @arg n1 @type Int @desc valeur du point (x,y)
	 * @arg factor @type Int @desc facteur
	 * @return Float.
	 */
	public static function toGridCoord(n1:Float,factor:Float):Float{
		return Math.round(n1/factor)*factor;
	}
	/*
	 * @funcname getTileAt @desc permet de récupérer la position d'une tile en fonction d'un point donnée
	 * @arg _x @type Float @desc position x
	 * @arg _y @type Float @desc position y
	 * @arg bl @type Bool @desc
	 * @return Point.
	 */
	public static function to2DDimension(str:String,size:Int=100):Array<Dynamic>{
		var ar:Array<String> = str.split(",");
		var dArray:Array<Dynamic> = new Array<Array<Dynamic>>();
		var indexX:Int =0;
		var indexY:Int =0;
		for(i in 0...ar.length){
			indexX = Math.floor(i/IsoWorld.instance.mapTileWidth);
			indexY = Math.floor(i%IsoWorld.instance.mapTileHeight);
			if(dArray[indexX] == null ) dArray[indexX] = new Array<Dynamic>();
			dArray[indexX][indexY] = ar[i];
		}
		return dArray;
	}
	
}