package com.lak.simulator.isometric.utils;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import com.lak.simulator.isometric.Config;
import openfl.display.Shape;
import openfl.geom.Point;
import com.lak.simulator.isometric.world.IsoWorld;
class IsoUtils
{
	public static var spiralWalkStepArray:Array<String> = ["N", "NE", "E", "SE", "S", "SW", "W", "NW"];
	public static var spiralStepArray:Array<String> = ["SE","SW","NW","NE"];
	public static var ISO_NORTH = "N";
	public static var ISO_NORTHEAST = "NE";
	public static var ISO_EAST = "E";
	public static var ISO_SOUTHEAST = "SE";
	public static var ISO_SOUTH = "S";
	public static var ISO_SOUTHWEST = "SW";
	public static var ISO_WEST = "W";
	public static var ISO_NORTHWEST = "NW";
	
	public static function spiralSearch(deptPoint:Point,numTileSearch:Int=10,maxY:Int=1,maxX:Int=0):Array<Point>
	{
		var pointsArray:Array<Point> = new Array<Point>();
		var index:Int = -1;
		maxY=1;
		maxX=0;
		var iX = 0;
		var iY = 0;
		var XOrY = 0;
		var sign = 1;
		for(i in 0...numTileSearch){	
			if (i > 0){ 
				if (XOrY == 0){ 
					deptPoint = IsoUtils.slideMapTileWalker(deptPoint, IsoUtils.spiralStepArray[index]);
					pointsArray.push(deptPoint.clone());
					iX++;
					if (iX >= maxX){ 
					iX = 0;
					maxX +=  1;XOrY = 1;
					index++;
						if (index > IsoUtils.spiralStepArray.length - 1){ 
							index = 0; 
						}
					}
				}else{ 
					deptPoint = IsoUtils.slideMapTileWalker(deptPoint, IsoUtils.spiralStepArray[index]);
					pointsArray.push(deptPoint.clone());
					iY++;
					if (iY >= maxY){ 
						sign *=  -1;
						iY = 0;
						maxY +=  1;
						XOrY = 0;
						index++;
						if(index > IsoUtils.spiralStepArray.length-1){ index = 0; }
					}
				}
			}
		}
		return pointsArray;
	}
	public static function debugTile(n:Dynamic):Void{
		n.index = 1;		
		n.ndType = "rtees";
		n.selected = true;
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
			pDest.x += ((Std.int(ptStart.y)&1));
			str = ISO_NORTHEAST;
		}
		else if (dir == ISO_EAST){ 
			pDest.x++;
			str = ISO_EAST;
		}
		else if (dir == ISO_SOUTHEAST ){ 
			pDest.y++;
			pDest.x += ((Std.int(ptStart.y)&1));
			str = ISO_SOUTHEAST; 
		}
		else if (dir == ISO_SOUTH){ 
			pDest.y+=2;
			str = ISO_SOUTH; 
		}
		else if (dir == ISO_SOUTHWEST){ 
			pDest.y++;
			pDest.x += ((Std.int(ptStart.y)&1)-1);
			str = ISO_SOUTHWEST; 
		}
		else if (dir == ISO_WEST){ 
			pDest.x--;
			str = ISO_WEST; 
		}
		else if (dir == ISO_NORTHWEST){ 
			pDest.y--;
			pDest.x += ((Std.int(ptStart.y)&1)-1);
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