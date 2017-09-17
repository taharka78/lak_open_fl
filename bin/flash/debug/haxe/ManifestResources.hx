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
			
			#if (ios || tvos)
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
		
		data = '{"name":null,"assets":"aoy4:sizei23526y4:typey4:TEXTy9:classNamey27:__ASSET__mali_cavalier_jsony2:idy20:mali%2Fcavalier.jsongoR0i964525R1y5:IMAGER3y26:__ASSET__mali_cavalier_pngR5y19:mali%2Fcavalier.pnggoR0i24082R1R2R3y26:__ASSET__mali_general_jsonR5y19:mali%2Fgeneral.jsongoR0i998268R1R7R3y25:__ASSET__mali_general_pngR5y18:mali%2Fgeneral.pnggoR0i24352R1R2R3y23:__ASSET__mali_king_jsonR5y16:mali%2Fking.jsongoR0i1017095R1R7R3y22:__ASSET__mali_king_pngR5y15:mali%2Fking.pnggoR0i68251R1R2R3y29:__ASSET__data_animations_jsonR5y22:data%2Fanimations.jsongoR0i8916R1R2R3y27:__ASSET__data_maps_data_txtR5y22:data%2Fmaps%2Fdata.txtgoR0i73R1R2R3y37:__ASSET__data_maps_world1_config_jsonR5y34:data%2Fmaps%2Fworld1%2Fconfig.jsongoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_0_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_0-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_1_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_1-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_2_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_2-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_3_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_3-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_4_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_4-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_5_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_5-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_6_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_6-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_7_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_7-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_8_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_8-9.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_0_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-0.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_1_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-1.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_2_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-2.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_3_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-3.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_4_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-4.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_5_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-5.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_6_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-6.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_7_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-7.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_8_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-8.txtgoR0i46R1R2R3y38:__ASSET__data_maps_world1_part_9_9_txtR5y35:data%2Fmaps%2Fworld1%2Fpart_9-9.txtgoR0i1296R1R2R3y35:__ASSET__data_world_animations_jsonR5y28:data%2Fworld_animations.jsongoR0i73R1R2R3y27:__ASSET__world1_config_jsonR5y20:world1%2Fconfig.jsongoR0i46R1R2R3y28:__ASSET__world1_part_0_0_txtR5y21:world1%2Fpart_0-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_1_txtR5y21:world1%2Fpart_0-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_2_txtR5y21:world1%2Fpart_0-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_3_txtR5y21:world1%2Fpart_0-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_4_txtR5y21:world1%2Fpart_0-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_5_txtR5y21:world1%2Fpart_0-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_6_txtR5y21:world1%2Fpart_0-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_7_txtR5y21:world1%2Fpart_0-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_8_txtR5y21:world1%2Fpart_0-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_0_9_txtR5y21:world1%2Fpart_0-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_0_txtR5y21:world1%2Fpart_1-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_1_txtR5y21:world1%2Fpart_1-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_2_txtR5y21:world1%2Fpart_1-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_3_txtR5y21:world1%2Fpart_1-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_4_txtR5y21:world1%2Fpart_1-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_5_txtR5y21:world1%2Fpart_1-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_6_txtR5y21:world1%2Fpart_1-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_7_txtR5y21:world1%2Fpart_1-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_8_txtR5y21:world1%2Fpart_1-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_1_9_txtR5y21:world1%2Fpart_1-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_0_txtR5y21:world1%2Fpart_2-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_1_txtR5y21:world1%2Fpart_2-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_2_txtR5y21:world1%2Fpart_2-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_3_txtR5y21:world1%2Fpart_2-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_4_txtR5y21:world1%2Fpart_2-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_5_txtR5y21:world1%2Fpart_2-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_6_txtR5y21:world1%2Fpart_2-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_7_txtR5y21:world1%2Fpart_2-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_8_txtR5y21:world1%2Fpart_2-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_2_9_txtR5y21:world1%2Fpart_2-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_0_txtR5y21:world1%2Fpart_3-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_1_txtR5y21:world1%2Fpart_3-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_2_txtR5y21:world1%2Fpart_3-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_3_txtR5y21:world1%2Fpart_3-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_4_txtR5y21:world1%2Fpart_3-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_5_txtR5y21:world1%2Fpart_3-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_6_txtR5y21:world1%2Fpart_3-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_7_txtR5y21:world1%2Fpart_3-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_8_txtR5y21:world1%2Fpart_3-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_3_9_txtR5y21:world1%2Fpart_3-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_0_txtR5y21:world1%2Fpart_4-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_1_txtR5y21:world1%2Fpart_4-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_2_txtR5y21:world1%2Fpart_4-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_3_txtR5y21:world1%2Fpart_4-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_4_txtR5y21:world1%2Fpart_4-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_5_txtR5y21:world1%2Fpart_4-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_6_txtR5y21:world1%2Fpart_4-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_7_txtR5y21:world1%2Fpart_4-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_8_txtR5y21:world1%2Fpart_4-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_4_9_txtR5y21:world1%2Fpart_4-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_0_txtR5y21:world1%2Fpart_5-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_1_txtR5y21:world1%2Fpart_5-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_2_txtR5y21:world1%2Fpart_5-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_3_txtR5y21:world1%2Fpart_5-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_4_txtR5y21:world1%2Fpart_5-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_5_txtR5y21:world1%2Fpart_5-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_6_txtR5y21:world1%2Fpart_5-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_7_txtR5y21:world1%2Fpart_5-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_8_txtR5y21:world1%2Fpart_5-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_5_9_txtR5y21:world1%2Fpart_5-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_0_txtR5y21:world1%2Fpart_6-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_1_txtR5y21:world1%2Fpart_6-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_2_txtR5y21:world1%2Fpart_6-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_3_txtR5y21:world1%2Fpart_6-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_4_txtR5y21:world1%2Fpart_6-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_5_txtR5y21:world1%2Fpart_6-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_6_txtR5y21:world1%2Fpart_6-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_7_txtR5y21:world1%2Fpart_6-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_8_txtR5y21:world1%2Fpart_6-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_6_9_txtR5y21:world1%2Fpart_6-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_0_txtR5y21:world1%2Fpart_7-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_1_txtR5y21:world1%2Fpart_7-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_2_txtR5y21:world1%2Fpart_7-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_3_txtR5y21:world1%2Fpart_7-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_4_txtR5y21:world1%2Fpart_7-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_5_txtR5y21:world1%2Fpart_7-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_6_txtR5y21:world1%2Fpart_7-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_7_txtR5y21:world1%2Fpart_7-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_8_txtR5y21:world1%2Fpart_7-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_7_9_txtR5y21:world1%2Fpart_7-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_0_txtR5y21:world1%2Fpart_8-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_1_txtR5y21:world1%2Fpart_8-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_2_txtR5y21:world1%2Fpart_8-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_3_txtR5y21:world1%2Fpart_8-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_4_txtR5y21:world1%2Fpart_8-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_5_txtR5y21:world1%2Fpart_8-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_6_txtR5y21:world1%2Fpart_8-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_7_txtR5y21:world1%2Fpart_8-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_8_txtR5y21:world1%2Fpart_8-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_8_9_txtR5y21:world1%2Fpart_8-9.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_0_txtR5y21:world1%2Fpart_9-0.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_1_txtR5y21:world1%2Fpart_9-1.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_2_txtR5y21:world1%2Fpart_9-2.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_3_txtR5y21:world1%2Fpart_9-3.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_4_txtR5y21:world1%2Fpart_9-4.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_5_txtR5y21:world1%2Fpart_9-5.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_6_txtR5y21:world1%2Fpart_9-6.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_7_txtR5y21:world1%2Fpart_9-7.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_8_txtR5y21:world1%2Fpart_9-8.txtgoR0i46R1R2R3y28:__ASSET__world1_part_9_9_txtR5y21:world1%2Fpart_9-9.txtgoR0i135194R1R7R3y26:__ASSET__world_grass___pngR5y19:world%2Fgrass--.pnggoR0i3424R1R2R3y25:__ASSET__world_grass_jsonR5y18:world%2Fgrass.jsongoR0i334266R1R7R3y24:__ASSET__world_grass_pngR5y17:world%2Fgrass.pnggoR0i86016R1R7R3y30:__ASSET__world_ground_deco_pngR5y23:world%2Fground_deco.pnggoR0i258676R1R7R3y27:__ASSET__world_mountain_pngR5y20:world%2Fmountain.pnggoR0i76085R1R7R3y29:__ASSET__world_ressources_pngR5y22:world%2Fressources.pnggoR0i167613R1R7R3y23:__ASSET__world_sand_pngR5y16:world%2Fsand.pnggoR0i266325R1R7R3y24:__ASSET__world_trees_pngR5y17:world%2Ftrees.pnggh","version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__mali_cavalier_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__mali_cavalier_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_general_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__mali_general_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_king_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__mali_king_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__data_animations_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_data_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_config_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_0_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_1_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_2_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_3_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_4_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_5_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_6_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_7_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_8_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_maps_world1_part_9_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__data_world_animations_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_config_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_0_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_1_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_2_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_3_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_4_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_5_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_6_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_7_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_8_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_0_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_1_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_2_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_3_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_4_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_5_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_6_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_7_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_8_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world1_part_9_9_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world_grass___png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__world_grass_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__world_grass_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__world_ground_deco_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__world_mountain_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__world_ressources_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__world_sand_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__world_trees_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


#elseif (desktop || cpp)

@:file("assets/mali/cavalier.json") #if display private #end class __ASSET__mali_cavalier_json extends haxe.io.Bytes {}
@:image("assets/mali/cavalier.png") #if display private #end class __ASSET__mali_cavalier_png extends lime.graphics.Image {}
@:file("assets/mali/general.json") #if display private #end class __ASSET__mali_general_json extends haxe.io.Bytes {}
@:image("assets/mali/general.png") #if display private #end class __ASSET__mali_general_png extends lime.graphics.Image {}
@:file("assets/mali/king.json") #if display private #end class __ASSET__mali_king_json extends haxe.io.Bytes {}
@:image("assets/mali/king.png") #if display private #end class __ASSET__mali_king_png extends lime.graphics.Image {}
@:file("assets/data/animations.json") #if display private #end class __ASSET__data_animations_json extends haxe.io.Bytes {}
@:file("assets/data/maps/data.txt") #if display private #end class __ASSET__data_maps_data_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/config.json") #if display private #end class __ASSET__data_maps_world1_config_json extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-0.txt") #if display private #end class __ASSET__data_maps_world1_part_0_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-1.txt") #if display private #end class __ASSET__data_maps_world1_part_0_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-2.txt") #if display private #end class __ASSET__data_maps_world1_part_0_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-3.txt") #if display private #end class __ASSET__data_maps_world1_part_0_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-4.txt") #if display private #end class __ASSET__data_maps_world1_part_0_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-5.txt") #if display private #end class __ASSET__data_maps_world1_part_0_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-6.txt") #if display private #end class __ASSET__data_maps_world1_part_0_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-7.txt") #if display private #end class __ASSET__data_maps_world1_part_0_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-8.txt") #if display private #end class __ASSET__data_maps_world1_part_0_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-9.txt") #if display private #end class __ASSET__data_maps_world1_part_0_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-0.txt") #if display private #end class __ASSET__data_maps_world1_part_1_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-1.txt") #if display private #end class __ASSET__data_maps_world1_part_1_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-2.txt") #if display private #end class __ASSET__data_maps_world1_part_1_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-3.txt") #if display private #end class __ASSET__data_maps_world1_part_1_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-4.txt") #if display private #end class __ASSET__data_maps_world1_part_1_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-5.txt") #if display private #end class __ASSET__data_maps_world1_part_1_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-6.txt") #if display private #end class __ASSET__data_maps_world1_part_1_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-7.txt") #if display private #end class __ASSET__data_maps_world1_part_1_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-8.txt") #if display private #end class __ASSET__data_maps_world1_part_1_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-9.txt") #if display private #end class __ASSET__data_maps_world1_part_1_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-0.txt") #if display private #end class __ASSET__data_maps_world1_part_2_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-1.txt") #if display private #end class __ASSET__data_maps_world1_part_2_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-2.txt") #if display private #end class __ASSET__data_maps_world1_part_2_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-3.txt") #if display private #end class __ASSET__data_maps_world1_part_2_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-4.txt") #if display private #end class __ASSET__data_maps_world1_part_2_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-5.txt") #if display private #end class __ASSET__data_maps_world1_part_2_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-6.txt") #if display private #end class __ASSET__data_maps_world1_part_2_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-7.txt") #if display private #end class __ASSET__data_maps_world1_part_2_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-8.txt") #if display private #end class __ASSET__data_maps_world1_part_2_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-9.txt") #if display private #end class __ASSET__data_maps_world1_part_2_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-0.txt") #if display private #end class __ASSET__data_maps_world1_part_3_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-1.txt") #if display private #end class __ASSET__data_maps_world1_part_3_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-2.txt") #if display private #end class __ASSET__data_maps_world1_part_3_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-3.txt") #if display private #end class __ASSET__data_maps_world1_part_3_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-4.txt") #if display private #end class __ASSET__data_maps_world1_part_3_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-5.txt") #if display private #end class __ASSET__data_maps_world1_part_3_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-6.txt") #if display private #end class __ASSET__data_maps_world1_part_3_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-7.txt") #if display private #end class __ASSET__data_maps_world1_part_3_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-8.txt") #if display private #end class __ASSET__data_maps_world1_part_3_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-9.txt") #if display private #end class __ASSET__data_maps_world1_part_3_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-0.txt") #if display private #end class __ASSET__data_maps_world1_part_4_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-1.txt") #if display private #end class __ASSET__data_maps_world1_part_4_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-2.txt") #if display private #end class __ASSET__data_maps_world1_part_4_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-3.txt") #if display private #end class __ASSET__data_maps_world1_part_4_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-4.txt") #if display private #end class __ASSET__data_maps_world1_part_4_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-5.txt") #if display private #end class __ASSET__data_maps_world1_part_4_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-6.txt") #if display private #end class __ASSET__data_maps_world1_part_4_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-7.txt") #if display private #end class __ASSET__data_maps_world1_part_4_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-8.txt") #if display private #end class __ASSET__data_maps_world1_part_4_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-9.txt") #if display private #end class __ASSET__data_maps_world1_part_4_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-0.txt") #if display private #end class __ASSET__data_maps_world1_part_5_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-1.txt") #if display private #end class __ASSET__data_maps_world1_part_5_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-2.txt") #if display private #end class __ASSET__data_maps_world1_part_5_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-3.txt") #if display private #end class __ASSET__data_maps_world1_part_5_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-4.txt") #if display private #end class __ASSET__data_maps_world1_part_5_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-5.txt") #if display private #end class __ASSET__data_maps_world1_part_5_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-6.txt") #if display private #end class __ASSET__data_maps_world1_part_5_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-7.txt") #if display private #end class __ASSET__data_maps_world1_part_5_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-8.txt") #if display private #end class __ASSET__data_maps_world1_part_5_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-9.txt") #if display private #end class __ASSET__data_maps_world1_part_5_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-0.txt") #if display private #end class __ASSET__data_maps_world1_part_6_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-1.txt") #if display private #end class __ASSET__data_maps_world1_part_6_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-2.txt") #if display private #end class __ASSET__data_maps_world1_part_6_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-3.txt") #if display private #end class __ASSET__data_maps_world1_part_6_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-4.txt") #if display private #end class __ASSET__data_maps_world1_part_6_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-5.txt") #if display private #end class __ASSET__data_maps_world1_part_6_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-6.txt") #if display private #end class __ASSET__data_maps_world1_part_6_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-7.txt") #if display private #end class __ASSET__data_maps_world1_part_6_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-8.txt") #if display private #end class __ASSET__data_maps_world1_part_6_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-9.txt") #if display private #end class __ASSET__data_maps_world1_part_6_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-0.txt") #if display private #end class __ASSET__data_maps_world1_part_7_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-1.txt") #if display private #end class __ASSET__data_maps_world1_part_7_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-2.txt") #if display private #end class __ASSET__data_maps_world1_part_7_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-3.txt") #if display private #end class __ASSET__data_maps_world1_part_7_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-4.txt") #if display private #end class __ASSET__data_maps_world1_part_7_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-5.txt") #if display private #end class __ASSET__data_maps_world1_part_7_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-6.txt") #if display private #end class __ASSET__data_maps_world1_part_7_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-7.txt") #if display private #end class __ASSET__data_maps_world1_part_7_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-8.txt") #if display private #end class __ASSET__data_maps_world1_part_7_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-9.txt") #if display private #end class __ASSET__data_maps_world1_part_7_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-0.txt") #if display private #end class __ASSET__data_maps_world1_part_8_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-1.txt") #if display private #end class __ASSET__data_maps_world1_part_8_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-2.txt") #if display private #end class __ASSET__data_maps_world1_part_8_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-3.txt") #if display private #end class __ASSET__data_maps_world1_part_8_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-4.txt") #if display private #end class __ASSET__data_maps_world1_part_8_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-5.txt") #if display private #end class __ASSET__data_maps_world1_part_8_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-6.txt") #if display private #end class __ASSET__data_maps_world1_part_8_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-7.txt") #if display private #end class __ASSET__data_maps_world1_part_8_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-8.txt") #if display private #end class __ASSET__data_maps_world1_part_8_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-9.txt") #if display private #end class __ASSET__data_maps_world1_part_8_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-0.txt") #if display private #end class __ASSET__data_maps_world1_part_9_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-1.txt") #if display private #end class __ASSET__data_maps_world1_part_9_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-2.txt") #if display private #end class __ASSET__data_maps_world1_part_9_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-3.txt") #if display private #end class __ASSET__data_maps_world1_part_9_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-4.txt") #if display private #end class __ASSET__data_maps_world1_part_9_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-5.txt") #if display private #end class __ASSET__data_maps_world1_part_9_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-6.txt") #if display private #end class __ASSET__data_maps_world1_part_9_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-7.txt") #if display private #end class __ASSET__data_maps_world1_part_9_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-8.txt") #if display private #end class __ASSET__data_maps_world1_part_9_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-9.txt") #if display private #end class __ASSET__data_maps_world1_part_9_9_txt extends haxe.io.Bytes {}
@:file("assets/data/world_animations.json") #if display private #end class __ASSET__data_world_animations_json extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/config.json") #if display private #end class __ASSET__world1_config_json extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-0.txt") #if display private #end class __ASSET__world1_part_0_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-1.txt") #if display private #end class __ASSET__world1_part_0_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-2.txt") #if display private #end class __ASSET__world1_part_0_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-3.txt") #if display private #end class __ASSET__world1_part_0_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-4.txt") #if display private #end class __ASSET__world1_part_0_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-5.txt") #if display private #end class __ASSET__world1_part_0_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-6.txt") #if display private #end class __ASSET__world1_part_0_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-7.txt") #if display private #end class __ASSET__world1_part_0_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-8.txt") #if display private #end class __ASSET__world1_part_0_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_0-9.txt") #if display private #end class __ASSET__world1_part_0_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-0.txt") #if display private #end class __ASSET__world1_part_1_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-1.txt") #if display private #end class __ASSET__world1_part_1_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-2.txt") #if display private #end class __ASSET__world1_part_1_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-3.txt") #if display private #end class __ASSET__world1_part_1_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-4.txt") #if display private #end class __ASSET__world1_part_1_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-5.txt") #if display private #end class __ASSET__world1_part_1_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-6.txt") #if display private #end class __ASSET__world1_part_1_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-7.txt") #if display private #end class __ASSET__world1_part_1_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-8.txt") #if display private #end class __ASSET__world1_part_1_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_1-9.txt") #if display private #end class __ASSET__world1_part_1_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-0.txt") #if display private #end class __ASSET__world1_part_2_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-1.txt") #if display private #end class __ASSET__world1_part_2_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-2.txt") #if display private #end class __ASSET__world1_part_2_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-3.txt") #if display private #end class __ASSET__world1_part_2_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-4.txt") #if display private #end class __ASSET__world1_part_2_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-5.txt") #if display private #end class __ASSET__world1_part_2_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-6.txt") #if display private #end class __ASSET__world1_part_2_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-7.txt") #if display private #end class __ASSET__world1_part_2_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-8.txt") #if display private #end class __ASSET__world1_part_2_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_2-9.txt") #if display private #end class __ASSET__world1_part_2_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-0.txt") #if display private #end class __ASSET__world1_part_3_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-1.txt") #if display private #end class __ASSET__world1_part_3_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-2.txt") #if display private #end class __ASSET__world1_part_3_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-3.txt") #if display private #end class __ASSET__world1_part_3_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-4.txt") #if display private #end class __ASSET__world1_part_3_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-5.txt") #if display private #end class __ASSET__world1_part_3_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-6.txt") #if display private #end class __ASSET__world1_part_3_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-7.txt") #if display private #end class __ASSET__world1_part_3_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-8.txt") #if display private #end class __ASSET__world1_part_3_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_3-9.txt") #if display private #end class __ASSET__world1_part_3_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-0.txt") #if display private #end class __ASSET__world1_part_4_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-1.txt") #if display private #end class __ASSET__world1_part_4_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-2.txt") #if display private #end class __ASSET__world1_part_4_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-3.txt") #if display private #end class __ASSET__world1_part_4_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-4.txt") #if display private #end class __ASSET__world1_part_4_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-5.txt") #if display private #end class __ASSET__world1_part_4_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-6.txt") #if display private #end class __ASSET__world1_part_4_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-7.txt") #if display private #end class __ASSET__world1_part_4_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-8.txt") #if display private #end class __ASSET__world1_part_4_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_4-9.txt") #if display private #end class __ASSET__world1_part_4_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-0.txt") #if display private #end class __ASSET__world1_part_5_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-1.txt") #if display private #end class __ASSET__world1_part_5_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-2.txt") #if display private #end class __ASSET__world1_part_5_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-3.txt") #if display private #end class __ASSET__world1_part_5_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-4.txt") #if display private #end class __ASSET__world1_part_5_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-5.txt") #if display private #end class __ASSET__world1_part_5_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-6.txt") #if display private #end class __ASSET__world1_part_5_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-7.txt") #if display private #end class __ASSET__world1_part_5_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-8.txt") #if display private #end class __ASSET__world1_part_5_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_5-9.txt") #if display private #end class __ASSET__world1_part_5_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-0.txt") #if display private #end class __ASSET__world1_part_6_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-1.txt") #if display private #end class __ASSET__world1_part_6_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-2.txt") #if display private #end class __ASSET__world1_part_6_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-3.txt") #if display private #end class __ASSET__world1_part_6_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-4.txt") #if display private #end class __ASSET__world1_part_6_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-5.txt") #if display private #end class __ASSET__world1_part_6_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-6.txt") #if display private #end class __ASSET__world1_part_6_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-7.txt") #if display private #end class __ASSET__world1_part_6_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-8.txt") #if display private #end class __ASSET__world1_part_6_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_6-9.txt") #if display private #end class __ASSET__world1_part_6_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-0.txt") #if display private #end class __ASSET__world1_part_7_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-1.txt") #if display private #end class __ASSET__world1_part_7_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-2.txt") #if display private #end class __ASSET__world1_part_7_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-3.txt") #if display private #end class __ASSET__world1_part_7_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-4.txt") #if display private #end class __ASSET__world1_part_7_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-5.txt") #if display private #end class __ASSET__world1_part_7_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-6.txt") #if display private #end class __ASSET__world1_part_7_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-7.txt") #if display private #end class __ASSET__world1_part_7_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-8.txt") #if display private #end class __ASSET__world1_part_7_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_7-9.txt") #if display private #end class __ASSET__world1_part_7_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-0.txt") #if display private #end class __ASSET__world1_part_8_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-1.txt") #if display private #end class __ASSET__world1_part_8_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-2.txt") #if display private #end class __ASSET__world1_part_8_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-3.txt") #if display private #end class __ASSET__world1_part_8_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-4.txt") #if display private #end class __ASSET__world1_part_8_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-5.txt") #if display private #end class __ASSET__world1_part_8_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-6.txt") #if display private #end class __ASSET__world1_part_8_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-7.txt") #if display private #end class __ASSET__world1_part_8_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-8.txt") #if display private #end class __ASSET__world1_part_8_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_8-9.txt") #if display private #end class __ASSET__world1_part_8_9_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-0.txt") #if display private #end class __ASSET__world1_part_9_0_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-1.txt") #if display private #end class __ASSET__world1_part_9_1_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-2.txt") #if display private #end class __ASSET__world1_part_9_2_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-3.txt") #if display private #end class __ASSET__world1_part_9_3_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-4.txt") #if display private #end class __ASSET__world1_part_9_4_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-5.txt") #if display private #end class __ASSET__world1_part_9_5_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-6.txt") #if display private #end class __ASSET__world1_part_9_6_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-7.txt") #if display private #end class __ASSET__world1_part_9_7_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-8.txt") #if display private #end class __ASSET__world1_part_9_8_txt extends haxe.io.Bytes {}
@:file("assets/data/maps/world1/part_9-9.txt") #if display private #end class __ASSET__world1_part_9_9_txt extends haxe.io.Bytes {}
@:image("assets/world/grass--.png") #if display private #end class __ASSET__world_grass___png extends lime.graphics.Image {}
@:file("assets/world/grass.json") #if display private #end class __ASSET__world_grass_json extends haxe.io.Bytes {}
@:image("assets/world/grass.png") #if display private #end class __ASSET__world_grass_png extends lime.graphics.Image {}
@:image("assets/world/ground_deco.png") #if display private #end class __ASSET__world_ground_deco_png extends lime.graphics.Image {}
@:image("assets/world/mountain.png") #if display private #end class __ASSET__world_mountain_png extends lime.graphics.Image {}
@:image("assets/world/ressources.png") #if display private #end class __ASSET__world_ressources_png extends lime.graphics.Image {}
@:image("assets/world/sand.png") #if display private #end class __ASSET__world_sand_png extends lime.graphics.Image {}
@:image("assets/world/trees.png") #if display private #end class __ASSET__world_trees_png extends lime.graphics.Image {}
@:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)



#end
#end