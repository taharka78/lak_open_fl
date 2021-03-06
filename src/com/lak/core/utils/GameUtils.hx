package com.lak.core.utils;
import openfl.geom.Point;
import openfl.utils.ByteArray;
import haxe.io.Bytes;
import com.lak.simulator.isometric.utils.IsoUtils;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class GameUtils
{
	public static function getPositionAngle(posA:Point,posB:Point):Float
	{
		var dx:Float = posA.x - posB.x;
		var dy:Float = posA.y - posB.y;
		var angle:Float = (Math.atan2(dy,dx)*(180/Math.PI));
		if(angle < 0){ angle = angle + 360; }
		return angle;
	}
	public static function arrayHasValue(search:String,table:Array<String>):Bool{
		for ( i in 0...table.length){
			if (table[i] == search){
				return true;
			}
		}
		return false;
	}
	/**
	 * 
	 * @param	pt- The point to test against
	 * @param	pos - The offset/position/translation of the polygon
	 * @param	verts - The local(relative) vertices of the polygon
	 * @return
	 */
	public static function ptInnPoly(p:Point,poly:Array<Point>) : Bool {
        var p1:Point;
		var p2:Point;
        var inside:Bool = false;


        if (poly.length < 3){ return inside; }
		
        var oldPoint = new Point(poly[poly.length - 1].x, poly[poly.length - 1].y);
        
		for (i in 0...poly.length)
        {
            var newPoint = new Point(poly[i].x, poly[i].y);


            if (newPoint.x > oldPoint.y){
                p1 = oldPoint;
                p2 = newPoint;
            }else{
                p1 = newPoint;
                p2 = oldPoint;
            }

            if ((newPoint.x < p.x) == (p.x <= oldPoint.x)
                && (p.y - p1.y)*(p2.x - p1.x)
                < (p2.y - p1.y)*(p.x - p1.x))
            {
                inside = !inside;
            }
            oldPoint = newPoint;
        }
        return inside;
	}
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
	public static function sortByDis(a:Dynamic,b:Dynamic):Int{
		if (a.dis < b.dis){ return -1; }
		if (a.dis > b.dis){ return 1; }
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
	public static function dx(objectA:Point, objectB:Point):Float
	{
		var dx:Float = Math.abs(objectA.x - objectB.x);
		return dx;
	}
		
	public static function dy(objectA:Point, objectB:Point):Float
	{
		var dy:Float = Math.abs(objectA.y - objectB.y);
		return dy;
	}
	public static function distanceBetweenPt(pt1:Point, pt2:Point):Float{
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
	 * @funcname pxToPos @desc permet de récupérer la position d'une tile en fonction d'un point donnée
	 * @arg _x @type Float @desc position x
	 * @arg _y @type Float @desc position y
	 * @arg bl @type Bool @desc
	 * @return Point.
	 */
	public static function to2DDimension(str:String,partName:String, size:Int = 100):Array<Dynamic>{
		var ar:Array<String> = str.split(",");
		var dArray:Array<Dynamic> = new Array<Array<Dynamic>>();
		var indexX:Int =0;
		var indexY:Int = 0;
		
		var str = ((partName.split("_")[1]).split(".")[0]);
		
		var offsetX:Int = Std.parseInt(str.split("-")[0])*100;
		var offsetY:Int = Std.parseInt(str.split("-")[1])*100;
		trace(str, offsetX, offsetY);
		for(i in 0...ar.length){
			indexX = Math.floor(i%100);
			indexY = Math.floor(i/100);
			if(dArray[indexX] == null ) dArray[indexX] = new Array<Dynamic>();
			dArray[indexX][indexY] = {ndType:ar[i], f:0, g:0, h:0, direction:"", position:IsoUtils.posToPx(new Point(indexX+offsetX, indexY+offsetY))};
		}
		return dArray;
	}	
}