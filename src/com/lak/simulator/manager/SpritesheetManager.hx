package com.lak.simulator.manager;

/**
 * ...
 * @author Youssouf & Moussa Sissoko
 */
import spritesheet.Spritesheet;
import spritesheet.importers.ZoeImporter;
import openfl.display.BitmapData;
import openfl.Assets;

class SpritesheetManager
{
	var sheetsCache:Map<String,Spritesheet> = new Map<String,Spritesheet>();
	public function new() { }
	/*
	 * @funcname  getSpritesheet fonction de récupération du spritesheet (ajout si il n'est pas dans le tableau sheetCache).
	 * @arg assetFolderName @type String @desc nom du dossier (représenté par le nom de la civilisation ).
	 * @arg assetName @type String @desc nom de l'image et du json (représenté par le nom de l'image sans extension ).
	 * @return Spritesheet.
	 */
	public function getSpritesheet(assetFolderName:String,assetName:String):Spritesheet{
		if(!sheetsCache.exists(assetFolderName+"_"+assetName)){
			addSpriteSheet(assetFolderName,assetName);
		}
		return sheetsCache.get(assetFolderName+"_"+assetName);
	}
	/*
	 * @funcname  addSpriteSheet function d'ajout d'un spritesheet à la bibliothèque de spritesheet
	 * @arg assetFolderName @type String @desc nom du dossier (représenté par le nom de la civilisation ).
	 * @arg assetName @type String @desc nom de l'image et du json (représenté par le nom de l'image sans extension ).
	 * @return Void.
	 */
	public function addSpriteSheet(assetFolderName:String, assetName:String):Void{
		if(!sheetsCache.exists(assetFolderName+"_"+assetName)){
			var bitmapData:BitmapData = openfl.Assets.getBitmapData(assetFolderName+"/"+assetName+".png");		
			var spriteSht:Spritesheet = ZoeImporter.parse(openfl.Assets.getText(assetFolderName+"/" + assetName+".json"), assetFolderName, assetName+".png");
			sheetsCache.set((assetFolderName+"_"+assetName),spriteSht);
		}else{
			haxe.Log.trace(" spritesheet already cached ");
		}
	}
	
}