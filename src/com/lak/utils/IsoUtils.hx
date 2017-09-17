package com.lak.utils;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import openfl.display.Shape;
import openfl.geom.Point;
import com.lak.IsoWorld;
class IsoUtils
{
	public static var spiralWalkStepArray:Array<String> = ["N","NE","E","SE","S","SW","W","NW"];
	static var ISO_NORTH = "N";
	static var ISO_NORTHEAST = "NE";
	static var ISO_EAST = "E";
	static var ISO_SOUTHEAST = "SE";
	static var ISO_SOUTH = "S";
	static var ISO_SOUTHWEST = "SW";
	static var ISO_WEST = "W";
	static var ISO_NORTHWEST = "NW";
	
	public static function makePolygon(position:Point):Shape{
		
		var polygonShapePoints:Array<Point> = new Array<Point>();
		
		polygonShapePoints.push(new Point(position.x,position.y-(Config.TILE_HEIGHT>>1)));
		polygonShapePoints.push(new Point(position.x+(Config.TILE_WIDTH>>1),position.y));
		polygonShapePoints.push(new Point(position.x,position.y-(Config.TILE_HEIGHT>>1)));
		polygonShapePoints.push(new Point(position.x - (Config.TILE_WIDTH >> 1), position.y));
		
		var s:Shape = new Shape();
		s.graphics.beginFill(0xFF0000);
		s.graphics.moveTo(polygonShapePoints[0].x, polygonShapePoints[0].y);
		s.graphics.lineTo(polygonShapePoints[1].x, polygonShapePoints[1].y);
		s.graphics.lineTo(polygonShapePoints[2].x, polygonShapePoints[2].y);
		s.graphics.lineTo(polygonShapePoints[3].x, polygonShapePoints[3].y);
		s.graphics.lineTo(polygonShapePoints[0].x, polygonShapePoints[0].y);
		s.graphics.endFill();
		return s;
	}
	/*
	 * @funcname slideMapTileWalker @desc en fonction du point de départ redefinir un point à une position cardinale donnée
	 * @arg ptStart @type Point @desc point de départ
	 * @arg dir @type String @desc point cardinale du point souhaitée @values ["SE","S","SW","W","NW","N","NE","E"].
	 */
	public static function slideMapTileWalker(ptStart:Point,dir:String,debug:Bool=false):Point{
		
		var pDest:Point = ptStart.clone();		
		var str = "";
		
		if (dir == ISO_NORTH){ 
			pDest.y-=2;
			str = ISO_NORTH;
		}
		else if (dir == ISO_NORTHEAST){ 
			pDest.y--;
			str = ISO_NORTHEAST;
		}
		else if (dir == ISO_EAST){ 
			pDest.x++;
			str = ISO_EAST;
		}
		else if (dir == ISO_SOUTHEAST ){ 
			pDest.y++;
			str = ISO_SOUTHEAST; 
		}
		else if (dir == ISO_SOUTH){ 
			pDest.y+=2;
			str = ISO_SOUTH; 
		}
		else if (dir == ISO_SOUTHWEST){ 
			pDest.x--;
			pDest.y++;
			str = ISO_SOUTHWEST; 
		}
		else if (dir == ISO_WEST){ 
			pDest.x--;
			str = ISO_WEST; 
		}
		else if (dir == ISO_NORTHWEST){ 
			pDest.x--;
			pDest.y--;
			str = ISO_NORTHWEST; 
		}
		else{ str = " PAS DE DIRECTION "; }
		
		if(debug){ trace(str); }
		return pDest;
	}
	/*
	 * @funcname posToPx @desc en fonction du point de départ redefinir un point à une position cardinale donnée
	 * @arg ptMap @type Point @desc point de départ
	 * @arg iTileWidth @type Int @desc largeur de la tile
	 * @arg iTileHeight @type Int @desc Hauteur de la tile
	 * @return Point.
	 */
	public static function posToPx(ptMap:Point):Point{
		return new Point(Std.int((ptMap.x*Config.TILE_WIDTH)+(Std.int(ptMap.y) & 1)*(Config.TILE_WIDTH>>1)),Std.int((Std.int(ptMap.y)*Config.TILE_HEIGHT>>1)));
	}	
	/*
	 * @funcname pxToPos @desc permet de récupérer la position d'une tile en fonction d'un point donnée
	 * @arg _x @type Float @desc position x
	 * @arg _y @type Float @desc position y
	 * @arg bl @type Bool @desc
	 * @return Point.
	 */
	public static function pxToPos(pt:Point,bl:Bool=false):Point{
		return new Point(-Math.ceil(-pt.x / Config.TILE_WIDTH - ((Std.int(pt.y) & 1)>>1)),(pt.y/(Config.TILE_HEIGHT>>1)));
	}
	
	/**@
         * #IsoSystem.place
         * @comp IsoSystem
         * @sign public this IsoSystem.place(Number x, Number y, Number z, Entity tile)
         * @param x - The `x` position to place the tile
         * @param y - The `y` position to place the tile
         * @param z - The `z` position or height to place the tile
         * @param tile - The entity that should be position in the isometric fashion
         *
         * Use this method to place an entity in an isometric grid.
         *
         * @example
         * ~~~
         * var iso = IsoSystem.size(128);
         * iso.place(2, 1, 0, Crafty.e('2D, DOM, Color').color('red').attr({w:128, h:128}));
         * ~~~
         *
         * @see IsoSystem.size
         */
        /*public function place(x, y, z, obj){
            var pos = posToPx(x, y);
            pos.top -= z * (Config.TILE_HEIGHT >>1 );
            obj.x = pos.x + viewport.x;
			obj.y = pos.y + viewport.y;
			obj.z += z;
        }*/
	
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