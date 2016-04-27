package com.lak.utils;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import openfl.geom.Point;
import com.lak.IsoWorld;
class IsoUtils
{
	public static var spiralWalkStepArray:Array<String> = ["SE","S","SW","W","NW","N","NE","E"];
	static var ISO_NORTH = "N";
	static var ISO_NORTHEAST = "NE";
	static var ISO_EAST = "E";
	static var ISO_SOUTHEAST = "SE";
	static var ISO_SOUTH = "S";
	static var ISO_SOUTHWEST = "SW";
	static var ISO_WEST = "W";
	static var ISO_NORTHWEST = "NW";
	
	/*
	 * @funcname slideMapTileWalker @desc en fonction du point de départ redefinir un point à une position cardinale donnée
	 * @arg ptStart @type Point @desc point de départ
	 * @arg dir @type String @desc point cardinale du point souhaitée @values ["SE","S","SW","W","NW","N","NE","E"].
	 */
	public static function slideMapTileWalker(ptStart:Point,dir:String,debug:Bool=false):Point{
		var pDest:Point = new Point();
		pDest.x = ptStart.x;
		pDest.y = ptStart.y;
		var str = "";
		
		if (dir == ISO_NORTH){ pDest.y--; str = ISO_NORTH; }
		else if (dir == ISO_NORTHEAST){ pDest.y--;pDest.x++; str = ISO_NORTHEAST; }
		else if (dir == ISO_EAST){ pDest.x+=2; str = ISO_EAST; }
		else if (dir == ISO_SOUTHEAST ){ pDest.x++; str = ISO_SOUTHEAST; }
		else if (dir == ISO_SOUTH){ pDest.y++; str = ISO_SOUTH; }
		else if (dir == ISO_SOUTHWEST){ pDest.x--; str = ISO_SOUTHWEST; }
		else if (dir == ISO_WEST){ pDest.x-=2; str = ISO_WEST; }
		else if (dir == ISO_NORTHWEST){ pDest.x--; pDest.y--; str = ISO_NORTHWEST; }
		else{ str = " PAS DE DIRECTION "; }
		
		if(debug){ trace(str); }
		return pDest;
	}
	/*
	 * @funcname stageMapTilePlotter @desc en fonction du point de départ redefinir un point à une position cardinale donnée
	 * @arg ptMap @type Point @desc point de départ
	 * @arg iTileWidth @type Int @desc largeur de la tile
	 * @arg iTileHeight @type Int @desc Hauteur de la tile
	 * @return Point.
	 */
	public static function stageMapTilePlotter(ptMap:Point,iTileWidth:Int=64,iTileHeight:Int=32):Point{
		var ptPlot:Point = new Point();
		ptPlot.x = Std.int((ptMap.x*iTileWidth)+(Std.int(ptMap.y) & 1)*(iTileWidth>>1));
		ptPlot.y = Std.int((Std.int(ptMap.y)*iTileHeight>>1));
		return ptPlot;
	}
	/*
	 * @funcname getTileAt @desc permet de récupérer la position d'une tile en fonction d'un point donnée
	 * @arg _x @type Float @desc position x
	 * @arg _y @type Float @desc position y
	 * @arg bl @type Bool @desc
	 * @return Point.
	 */
	public static function getTileAt(_x:Float,_y:Float,bl:Bool=false):Point{
		return new Point((Math.floor(_x / IsoWorld.instance.halfW)), (Math.floor(_y / IsoWorld.instance.halfH)));
	}
	
	private static function getPos(_ax:Float, _ay:Float, _bx:Float, _by:Float, _cx:Float, _cy:Float):Int {
		var slope = (_by - _ay) / (_bx - _ax);
		var yIntercept = _ay - _ax * slope;
		var cSolution = (slope * _cx) + yIntercept;
		if (slope != 0) {
			if (_cy > cSolution) { return _bx > _ax ? 1 : -1; }
			if (_cy < cSolution) { return _bx > _ax ? -1 : 1; }
			return 0;
		}
		return 0;
	}
}