package com.lak.utils;
import openfl.geom.Point;
import openfl.utils.ByteArray;
import haxe.io.Bytes;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
class GameUtils
{
	// cn_PnPoly(): crossing number test for a point in a polygon
	//      Input:   P = a point,
	//               V[] = vertex points of a polygon V[n+1] with V[n]=V[0]
	//      Return:  0 = outside, 1 = inside
	// This code is patterned after [Franklin, 2000]
	/*int cn_PnPoly( Point P, Point* V, int n )
	{
		int    cn = 0;    // the  crossing number counter

		// loop through all edges of the polygon
		for (int i=0; i<n; i++) {    // edge from V[i]  to V[i+1]
		   if (((V[i].y <= P.y) && (V[i+1].y > P.y))     // an upward crossing
			|| ((V[i].y > P.y) && (V[i+1].y <=  P.y))) { // a downward crossing
				// compute  the actual edge-ray intersect x-coordinate
				float vt = (float)(P.y  - V[i].y) / (V[i+1].y - V[i].y);
				if (P.x <  V[i].x + vt * (V[i+1].x - V[i].x)) // P.x < intersect
					 ++cn;   // a valid crossing of y=P.y right of P.x
			}
		}
		return (cn&1);    // 0 if even (out), and 1 if  odd (in)

	}*/
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
		/*var cn:Int = 0;    // the  crossing number counter

		// loop through all edges of the polygon
		for (i in 0...n) {    // edge from V[i]  to V[i+1]
		   if (((V[i].y <= P.y) && (V[i+1].y > P.y))     // an upward crossing
			|| ((V[i].y > P.y) && (V[i+1].y <=  P.y))) { // a downward crossing
				// compute  the actual edge-ray intersect x-coordinate
				var vt = (P.y  - V[i].y) / (V[i+1].y - V[i].y);
				if (P.x <  V[i].x + vt * (V[i+1].x - V[i].x)) // P.x < intersect
					 ++cn;   // a valid crossing of y=P.y right of P.x
			}
		}
		return ((cn & 1) == 1)? true : false;    // 0 if even (out), and 1 if  odd (in)*/
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