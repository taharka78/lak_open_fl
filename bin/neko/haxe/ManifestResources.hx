package;


import lime.app.Config;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {
	
	
	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	
	
	public static function init (config:Config):Void {
		
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
		
		var rootPath = null;
		
		if (config != null && Reflect.hasField (config, "rootPath")) {
			
			rootPath = Reflect.field (config, "rootPath");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif (windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		Assets.defaultRootPath = rootPath;
		
		#if (openfl && !flash && !display)
		
		#end
		
		var data, manifest, library;
		
		Assets.libraryPaths["default"] = rootPath + "manifest/default.json";
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__mali_archery_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_archery_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_caserne_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_caserne_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_castle_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_castle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_cavalier_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_cavalier_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_farm_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_farm_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_forge_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_forge_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_forum_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_forum_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_general_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_general_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_home_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_home_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_king_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_king_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_market_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_market_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_mine_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_mine_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_mosque_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_mosque_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_stable_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_stable_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_stablebread_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_stablebread_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__mali_tower_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_tower_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__data_animations_json extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_data_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_config_json extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__data_world_animations_json extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_config_json extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_0_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_1_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_2_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_3_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_4_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_5_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_6_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_7_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_8_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_9_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__world_grass_json extends null { }
@:keep @:bind #if display private #end class __ASSET__world_grass_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__ui_test_xml extends null { }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)




#else



#end

#if (openfl && !flash)



#end
#end