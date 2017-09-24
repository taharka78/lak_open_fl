package com.lak.simulator.controllers;

import com.lak.simulator.command.CreateBuildingCommand;
import com.lak.simulator.data.GameData;
import openfl.geom.Point;
import com.lak.simulator.isometric.utils.IsoUtils;
import com.lak.core.managers.LevelManager;
import com.lak.simulator.isometric.grid.Node;
/**
 * ...
 * @author Moussa & Youssouf Sissoko
 */
class BuildingController 
{
	public static function enableToPlace(pos:Point,type:String):Bool{
		var bShape:Array<Array<Int>> = GameData.instance.getBuildingData(type).shape;
		var n:Node;
		var colPos:Point= pos.clone();
		var colLEn:Int = 0;
		var linePos:Point;
		var linecount:Int = 0;
		var colCount:Int = 0;
		if (bShape != null){
			for ( i in 0...bShape.length){
				if (i != 0) colPos = IsoUtils.slideMapTileWalker(colPos, IsoUtils.ISO_SOUTHWEST);				
				n = LevelManager.instance.getNodeAt(Std.int(colPos.x), Std.int(colPos.y));				
				
				if (n != null){
					
					n.index = 1;		
					n.ndType = "rtees";
					n.selected = true;
					colLEn = bShape[i].length;
					
					linePos = colPos.clone();
					for ( j in 0...colLEn){
						linePos = IsoUtils.slideMapTileWalker(linePos, IsoUtils.ISO_SOUTHEAST);
						n = LevelManager.instance.getNodeAt(Std.int(linePos.x), Std.int(linePos.y));
						n.index = 1;		
						n.ndType = "rtees";
						n.selected = true;
					}
				}				
			}
			return true;
		}
		return false;
	}
}