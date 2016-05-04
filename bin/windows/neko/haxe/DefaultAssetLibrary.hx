package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		path.set ("mali/cavalier.json", "mali/cavalier.json");
		type.set ("mali/cavalier.json", AssetType.TEXT);
		path.set ("mali/cavalier.png", "mali/cavalier.png");
		type.set ("mali/cavalier.png", AssetType.IMAGE);
		path.set ("mali/general.json", "mali/general.json");
		type.set ("mali/general.json", AssetType.TEXT);
		path.set ("mali/general.png", "mali/general.png");
		type.set ("mali/general.png", AssetType.IMAGE);
		path.set ("mali/king.json", "mali/king.json");
		type.set ("mali/king.json", AssetType.TEXT);
		path.set ("mali/king.png", "mali/king.png");
		type.set ("mali/king.png", AssetType.IMAGE);
		path.set ("data/animations.json", "data/animations.json");
		type.set ("data/animations.json", AssetType.TEXT);
		path.set ("data/maps/data.txt", "data/maps/data.txt");
		type.set ("data/maps/data.txt", AssetType.TEXT);
		path.set ("data/maps/world1/config.json", "data/maps/world1/config.json");
		type.set ("data/maps/world1/config.json", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-0.txt", "data/maps/world1/part_0-0.txt");
		type.set ("data/maps/world1/part_0-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-1.txt", "data/maps/world1/part_0-1.txt");
		type.set ("data/maps/world1/part_0-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-2.txt", "data/maps/world1/part_0-2.txt");
		type.set ("data/maps/world1/part_0-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-3.txt", "data/maps/world1/part_0-3.txt");
		type.set ("data/maps/world1/part_0-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-4.txt", "data/maps/world1/part_0-4.txt");
		type.set ("data/maps/world1/part_0-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-5.txt", "data/maps/world1/part_0-5.txt");
		type.set ("data/maps/world1/part_0-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-6.txt", "data/maps/world1/part_0-6.txt");
		type.set ("data/maps/world1/part_0-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-7.txt", "data/maps/world1/part_0-7.txt");
		type.set ("data/maps/world1/part_0-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-8.txt", "data/maps/world1/part_0-8.txt");
		type.set ("data/maps/world1/part_0-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_0-9.txt", "data/maps/world1/part_0-9.txt");
		type.set ("data/maps/world1/part_0-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-0.txt", "data/maps/world1/part_1-0.txt");
		type.set ("data/maps/world1/part_1-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-1.txt", "data/maps/world1/part_1-1.txt");
		type.set ("data/maps/world1/part_1-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-2.txt", "data/maps/world1/part_1-2.txt");
		type.set ("data/maps/world1/part_1-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-3.txt", "data/maps/world1/part_1-3.txt");
		type.set ("data/maps/world1/part_1-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-4.txt", "data/maps/world1/part_1-4.txt");
		type.set ("data/maps/world1/part_1-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-5.txt", "data/maps/world1/part_1-5.txt");
		type.set ("data/maps/world1/part_1-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-6.txt", "data/maps/world1/part_1-6.txt");
		type.set ("data/maps/world1/part_1-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-7.txt", "data/maps/world1/part_1-7.txt");
		type.set ("data/maps/world1/part_1-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-8.txt", "data/maps/world1/part_1-8.txt");
		type.set ("data/maps/world1/part_1-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_1-9.txt", "data/maps/world1/part_1-9.txt");
		type.set ("data/maps/world1/part_1-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-0.txt", "data/maps/world1/part_2-0.txt");
		type.set ("data/maps/world1/part_2-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-1.txt", "data/maps/world1/part_2-1.txt");
		type.set ("data/maps/world1/part_2-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-2.txt", "data/maps/world1/part_2-2.txt");
		type.set ("data/maps/world1/part_2-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-3.txt", "data/maps/world1/part_2-3.txt");
		type.set ("data/maps/world1/part_2-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-4.txt", "data/maps/world1/part_2-4.txt");
		type.set ("data/maps/world1/part_2-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-5.txt", "data/maps/world1/part_2-5.txt");
		type.set ("data/maps/world1/part_2-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-6.txt", "data/maps/world1/part_2-6.txt");
		type.set ("data/maps/world1/part_2-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-7.txt", "data/maps/world1/part_2-7.txt");
		type.set ("data/maps/world1/part_2-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-8.txt", "data/maps/world1/part_2-8.txt");
		type.set ("data/maps/world1/part_2-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_2-9.txt", "data/maps/world1/part_2-9.txt");
		type.set ("data/maps/world1/part_2-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-0.txt", "data/maps/world1/part_3-0.txt");
		type.set ("data/maps/world1/part_3-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-1.txt", "data/maps/world1/part_3-1.txt");
		type.set ("data/maps/world1/part_3-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-2.txt", "data/maps/world1/part_3-2.txt");
		type.set ("data/maps/world1/part_3-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-3.txt", "data/maps/world1/part_3-3.txt");
		type.set ("data/maps/world1/part_3-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-4.txt", "data/maps/world1/part_3-4.txt");
		type.set ("data/maps/world1/part_3-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-5.txt", "data/maps/world1/part_3-5.txt");
		type.set ("data/maps/world1/part_3-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-6.txt", "data/maps/world1/part_3-6.txt");
		type.set ("data/maps/world1/part_3-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-7.txt", "data/maps/world1/part_3-7.txt");
		type.set ("data/maps/world1/part_3-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-8.txt", "data/maps/world1/part_3-8.txt");
		type.set ("data/maps/world1/part_3-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_3-9.txt", "data/maps/world1/part_3-9.txt");
		type.set ("data/maps/world1/part_3-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-0.txt", "data/maps/world1/part_4-0.txt");
		type.set ("data/maps/world1/part_4-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-1.txt", "data/maps/world1/part_4-1.txt");
		type.set ("data/maps/world1/part_4-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-2.txt", "data/maps/world1/part_4-2.txt");
		type.set ("data/maps/world1/part_4-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-3.txt", "data/maps/world1/part_4-3.txt");
		type.set ("data/maps/world1/part_4-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-4.txt", "data/maps/world1/part_4-4.txt");
		type.set ("data/maps/world1/part_4-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-5.txt", "data/maps/world1/part_4-5.txt");
		type.set ("data/maps/world1/part_4-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-6.txt", "data/maps/world1/part_4-6.txt");
		type.set ("data/maps/world1/part_4-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-7.txt", "data/maps/world1/part_4-7.txt");
		type.set ("data/maps/world1/part_4-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-8.txt", "data/maps/world1/part_4-8.txt");
		type.set ("data/maps/world1/part_4-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_4-9.txt", "data/maps/world1/part_4-9.txt");
		type.set ("data/maps/world1/part_4-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-0.txt", "data/maps/world1/part_5-0.txt");
		type.set ("data/maps/world1/part_5-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-1.txt", "data/maps/world1/part_5-1.txt");
		type.set ("data/maps/world1/part_5-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-2.txt", "data/maps/world1/part_5-2.txt");
		type.set ("data/maps/world1/part_5-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-3.txt", "data/maps/world1/part_5-3.txt");
		type.set ("data/maps/world1/part_5-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-4.txt", "data/maps/world1/part_5-4.txt");
		type.set ("data/maps/world1/part_5-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-5.txt", "data/maps/world1/part_5-5.txt");
		type.set ("data/maps/world1/part_5-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-6.txt", "data/maps/world1/part_5-6.txt");
		type.set ("data/maps/world1/part_5-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-7.txt", "data/maps/world1/part_5-7.txt");
		type.set ("data/maps/world1/part_5-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-8.txt", "data/maps/world1/part_5-8.txt");
		type.set ("data/maps/world1/part_5-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_5-9.txt", "data/maps/world1/part_5-9.txt");
		type.set ("data/maps/world1/part_5-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-0.txt", "data/maps/world1/part_6-0.txt");
		type.set ("data/maps/world1/part_6-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-1.txt", "data/maps/world1/part_6-1.txt");
		type.set ("data/maps/world1/part_6-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-2.txt", "data/maps/world1/part_6-2.txt");
		type.set ("data/maps/world1/part_6-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-3.txt", "data/maps/world1/part_6-3.txt");
		type.set ("data/maps/world1/part_6-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-4.txt", "data/maps/world1/part_6-4.txt");
		type.set ("data/maps/world1/part_6-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-5.txt", "data/maps/world1/part_6-5.txt");
		type.set ("data/maps/world1/part_6-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-6.txt", "data/maps/world1/part_6-6.txt");
		type.set ("data/maps/world1/part_6-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-7.txt", "data/maps/world1/part_6-7.txt");
		type.set ("data/maps/world1/part_6-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-8.txt", "data/maps/world1/part_6-8.txt");
		type.set ("data/maps/world1/part_6-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_6-9.txt", "data/maps/world1/part_6-9.txt");
		type.set ("data/maps/world1/part_6-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-0.txt", "data/maps/world1/part_7-0.txt");
		type.set ("data/maps/world1/part_7-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-1.txt", "data/maps/world1/part_7-1.txt");
		type.set ("data/maps/world1/part_7-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-2.txt", "data/maps/world1/part_7-2.txt");
		type.set ("data/maps/world1/part_7-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-3.txt", "data/maps/world1/part_7-3.txt");
		type.set ("data/maps/world1/part_7-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-4.txt", "data/maps/world1/part_7-4.txt");
		type.set ("data/maps/world1/part_7-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-5.txt", "data/maps/world1/part_7-5.txt");
		type.set ("data/maps/world1/part_7-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-6.txt", "data/maps/world1/part_7-6.txt");
		type.set ("data/maps/world1/part_7-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-7.txt", "data/maps/world1/part_7-7.txt");
		type.set ("data/maps/world1/part_7-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-8.txt", "data/maps/world1/part_7-8.txt");
		type.set ("data/maps/world1/part_7-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_7-9.txt", "data/maps/world1/part_7-9.txt");
		type.set ("data/maps/world1/part_7-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-0.txt", "data/maps/world1/part_8-0.txt");
		type.set ("data/maps/world1/part_8-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-1.txt", "data/maps/world1/part_8-1.txt");
		type.set ("data/maps/world1/part_8-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-2.txt", "data/maps/world1/part_8-2.txt");
		type.set ("data/maps/world1/part_8-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-3.txt", "data/maps/world1/part_8-3.txt");
		type.set ("data/maps/world1/part_8-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-4.txt", "data/maps/world1/part_8-4.txt");
		type.set ("data/maps/world1/part_8-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-5.txt", "data/maps/world1/part_8-5.txt");
		type.set ("data/maps/world1/part_8-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-6.txt", "data/maps/world1/part_8-6.txt");
		type.set ("data/maps/world1/part_8-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-7.txt", "data/maps/world1/part_8-7.txt");
		type.set ("data/maps/world1/part_8-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-8.txt", "data/maps/world1/part_8-8.txt");
		type.set ("data/maps/world1/part_8-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_8-9.txt", "data/maps/world1/part_8-9.txt");
		type.set ("data/maps/world1/part_8-9.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-0.txt", "data/maps/world1/part_9-0.txt");
		type.set ("data/maps/world1/part_9-0.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-1.txt", "data/maps/world1/part_9-1.txt");
		type.set ("data/maps/world1/part_9-1.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-2.txt", "data/maps/world1/part_9-2.txt");
		type.set ("data/maps/world1/part_9-2.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-3.txt", "data/maps/world1/part_9-3.txt");
		type.set ("data/maps/world1/part_9-3.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-4.txt", "data/maps/world1/part_9-4.txt");
		type.set ("data/maps/world1/part_9-4.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-5.txt", "data/maps/world1/part_9-5.txt");
		type.set ("data/maps/world1/part_9-5.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-6.txt", "data/maps/world1/part_9-6.txt");
		type.set ("data/maps/world1/part_9-6.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-7.txt", "data/maps/world1/part_9-7.txt");
		type.set ("data/maps/world1/part_9-7.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-8.txt", "data/maps/world1/part_9-8.txt");
		type.set ("data/maps/world1/part_9-8.txt", AssetType.TEXT);
		path.set ("data/maps/world1/part_9-9.txt", "data/maps/world1/part_9-9.txt");
		type.set ("data/maps/world1/part_9-9.txt", AssetType.TEXT);
		path.set ("data/world_animations.json", "data/world_animations.json");
		type.set ("data/world_animations.json", AssetType.TEXT);
		path.set ("world1/config.json", "world1/config.json");
		type.set ("world1/config.json", AssetType.TEXT);
		path.set ("world1/part_0-0.txt", "world1/part_0-0.txt");
		type.set ("world1/part_0-0.txt", AssetType.TEXT);
		path.set ("world1/part_0-1.txt", "world1/part_0-1.txt");
		type.set ("world1/part_0-1.txt", AssetType.TEXT);
		path.set ("world1/part_0-2.txt", "world1/part_0-2.txt");
		type.set ("world1/part_0-2.txt", AssetType.TEXT);
		path.set ("world1/part_0-3.txt", "world1/part_0-3.txt");
		type.set ("world1/part_0-3.txt", AssetType.TEXT);
		path.set ("world1/part_0-4.txt", "world1/part_0-4.txt");
		type.set ("world1/part_0-4.txt", AssetType.TEXT);
		path.set ("world1/part_0-5.txt", "world1/part_0-5.txt");
		type.set ("world1/part_0-5.txt", AssetType.TEXT);
		path.set ("world1/part_0-6.txt", "world1/part_0-6.txt");
		type.set ("world1/part_0-6.txt", AssetType.TEXT);
		path.set ("world1/part_0-7.txt", "world1/part_0-7.txt");
		type.set ("world1/part_0-7.txt", AssetType.TEXT);
		path.set ("world1/part_0-8.txt", "world1/part_0-8.txt");
		type.set ("world1/part_0-8.txt", AssetType.TEXT);
		path.set ("world1/part_0-9.txt", "world1/part_0-9.txt");
		type.set ("world1/part_0-9.txt", AssetType.TEXT);
		path.set ("world1/part_1-0.txt", "world1/part_1-0.txt");
		type.set ("world1/part_1-0.txt", AssetType.TEXT);
		path.set ("world1/part_1-1.txt", "world1/part_1-1.txt");
		type.set ("world1/part_1-1.txt", AssetType.TEXT);
		path.set ("world1/part_1-2.txt", "world1/part_1-2.txt");
		type.set ("world1/part_1-2.txt", AssetType.TEXT);
		path.set ("world1/part_1-3.txt", "world1/part_1-3.txt");
		type.set ("world1/part_1-3.txt", AssetType.TEXT);
		path.set ("world1/part_1-4.txt", "world1/part_1-4.txt");
		type.set ("world1/part_1-4.txt", AssetType.TEXT);
		path.set ("world1/part_1-5.txt", "world1/part_1-5.txt");
		type.set ("world1/part_1-5.txt", AssetType.TEXT);
		path.set ("world1/part_1-6.txt", "world1/part_1-6.txt");
		type.set ("world1/part_1-6.txt", AssetType.TEXT);
		path.set ("world1/part_1-7.txt", "world1/part_1-7.txt");
		type.set ("world1/part_1-7.txt", AssetType.TEXT);
		path.set ("world1/part_1-8.txt", "world1/part_1-8.txt");
		type.set ("world1/part_1-8.txt", AssetType.TEXT);
		path.set ("world1/part_1-9.txt", "world1/part_1-9.txt");
		type.set ("world1/part_1-9.txt", AssetType.TEXT);
		path.set ("world1/part_2-0.txt", "world1/part_2-0.txt");
		type.set ("world1/part_2-0.txt", AssetType.TEXT);
		path.set ("world1/part_2-1.txt", "world1/part_2-1.txt");
		type.set ("world1/part_2-1.txt", AssetType.TEXT);
		path.set ("world1/part_2-2.txt", "world1/part_2-2.txt");
		type.set ("world1/part_2-2.txt", AssetType.TEXT);
		path.set ("world1/part_2-3.txt", "world1/part_2-3.txt");
		type.set ("world1/part_2-3.txt", AssetType.TEXT);
		path.set ("world1/part_2-4.txt", "world1/part_2-4.txt");
		type.set ("world1/part_2-4.txt", AssetType.TEXT);
		path.set ("world1/part_2-5.txt", "world1/part_2-5.txt");
		type.set ("world1/part_2-5.txt", AssetType.TEXT);
		path.set ("world1/part_2-6.txt", "world1/part_2-6.txt");
		type.set ("world1/part_2-6.txt", AssetType.TEXT);
		path.set ("world1/part_2-7.txt", "world1/part_2-7.txt");
		type.set ("world1/part_2-7.txt", AssetType.TEXT);
		path.set ("world1/part_2-8.txt", "world1/part_2-8.txt");
		type.set ("world1/part_2-8.txt", AssetType.TEXT);
		path.set ("world1/part_2-9.txt", "world1/part_2-9.txt");
		type.set ("world1/part_2-9.txt", AssetType.TEXT);
		path.set ("world1/part_3-0.txt", "world1/part_3-0.txt");
		type.set ("world1/part_3-0.txt", AssetType.TEXT);
		path.set ("world1/part_3-1.txt", "world1/part_3-1.txt");
		type.set ("world1/part_3-1.txt", AssetType.TEXT);
		path.set ("world1/part_3-2.txt", "world1/part_3-2.txt");
		type.set ("world1/part_3-2.txt", AssetType.TEXT);
		path.set ("world1/part_3-3.txt", "world1/part_3-3.txt");
		type.set ("world1/part_3-3.txt", AssetType.TEXT);
		path.set ("world1/part_3-4.txt", "world1/part_3-4.txt");
		type.set ("world1/part_3-4.txt", AssetType.TEXT);
		path.set ("world1/part_3-5.txt", "world1/part_3-5.txt");
		type.set ("world1/part_3-5.txt", AssetType.TEXT);
		path.set ("world1/part_3-6.txt", "world1/part_3-6.txt");
		type.set ("world1/part_3-6.txt", AssetType.TEXT);
		path.set ("world1/part_3-7.txt", "world1/part_3-7.txt");
		type.set ("world1/part_3-7.txt", AssetType.TEXT);
		path.set ("world1/part_3-8.txt", "world1/part_3-8.txt");
		type.set ("world1/part_3-8.txt", AssetType.TEXT);
		path.set ("world1/part_3-9.txt", "world1/part_3-9.txt");
		type.set ("world1/part_3-9.txt", AssetType.TEXT);
		path.set ("world1/part_4-0.txt", "world1/part_4-0.txt");
		type.set ("world1/part_4-0.txt", AssetType.TEXT);
		path.set ("world1/part_4-1.txt", "world1/part_4-1.txt");
		type.set ("world1/part_4-1.txt", AssetType.TEXT);
		path.set ("world1/part_4-2.txt", "world1/part_4-2.txt");
		type.set ("world1/part_4-2.txt", AssetType.TEXT);
		path.set ("world1/part_4-3.txt", "world1/part_4-3.txt");
		type.set ("world1/part_4-3.txt", AssetType.TEXT);
		path.set ("world1/part_4-4.txt", "world1/part_4-4.txt");
		type.set ("world1/part_4-4.txt", AssetType.TEXT);
		path.set ("world1/part_4-5.txt", "world1/part_4-5.txt");
		type.set ("world1/part_4-5.txt", AssetType.TEXT);
		path.set ("world1/part_4-6.txt", "world1/part_4-6.txt");
		type.set ("world1/part_4-6.txt", AssetType.TEXT);
		path.set ("world1/part_4-7.txt", "world1/part_4-7.txt");
		type.set ("world1/part_4-7.txt", AssetType.TEXT);
		path.set ("world1/part_4-8.txt", "world1/part_4-8.txt");
		type.set ("world1/part_4-8.txt", AssetType.TEXT);
		path.set ("world1/part_4-9.txt", "world1/part_4-9.txt");
		type.set ("world1/part_4-9.txt", AssetType.TEXT);
		path.set ("world1/part_5-0.txt", "world1/part_5-0.txt");
		type.set ("world1/part_5-0.txt", AssetType.TEXT);
		path.set ("world1/part_5-1.txt", "world1/part_5-1.txt");
		type.set ("world1/part_5-1.txt", AssetType.TEXT);
		path.set ("world1/part_5-2.txt", "world1/part_5-2.txt");
		type.set ("world1/part_5-2.txt", AssetType.TEXT);
		path.set ("world1/part_5-3.txt", "world1/part_5-3.txt");
		type.set ("world1/part_5-3.txt", AssetType.TEXT);
		path.set ("world1/part_5-4.txt", "world1/part_5-4.txt");
		type.set ("world1/part_5-4.txt", AssetType.TEXT);
		path.set ("world1/part_5-5.txt", "world1/part_5-5.txt");
		type.set ("world1/part_5-5.txt", AssetType.TEXT);
		path.set ("world1/part_5-6.txt", "world1/part_5-6.txt");
		type.set ("world1/part_5-6.txt", AssetType.TEXT);
		path.set ("world1/part_5-7.txt", "world1/part_5-7.txt");
		type.set ("world1/part_5-7.txt", AssetType.TEXT);
		path.set ("world1/part_5-8.txt", "world1/part_5-8.txt");
		type.set ("world1/part_5-8.txt", AssetType.TEXT);
		path.set ("world1/part_5-9.txt", "world1/part_5-9.txt");
		type.set ("world1/part_5-9.txt", AssetType.TEXT);
		path.set ("world1/part_6-0.txt", "world1/part_6-0.txt");
		type.set ("world1/part_6-0.txt", AssetType.TEXT);
		path.set ("world1/part_6-1.txt", "world1/part_6-1.txt");
		type.set ("world1/part_6-1.txt", AssetType.TEXT);
		path.set ("world1/part_6-2.txt", "world1/part_6-2.txt");
		type.set ("world1/part_6-2.txt", AssetType.TEXT);
		path.set ("world1/part_6-3.txt", "world1/part_6-3.txt");
		type.set ("world1/part_6-3.txt", AssetType.TEXT);
		path.set ("world1/part_6-4.txt", "world1/part_6-4.txt");
		type.set ("world1/part_6-4.txt", AssetType.TEXT);
		path.set ("world1/part_6-5.txt", "world1/part_6-5.txt");
		type.set ("world1/part_6-5.txt", AssetType.TEXT);
		path.set ("world1/part_6-6.txt", "world1/part_6-6.txt");
		type.set ("world1/part_6-6.txt", AssetType.TEXT);
		path.set ("world1/part_6-7.txt", "world1/part_6-7.txt");
		type.set ("world1/part_6-7.txt", AssetType.TEXT);
		path.set ("world1/part_6-8.txt", "world1/part_6-8.txt");
		type.set ("world1/part_6-8.txt", AssetType.TEXT);
		path.set ("world1/part_6-9.txt", "world1/part_6-9.txt");
		type.set ("world1/part_6-9.txt", AssetType.TEXT);
		path.set ("world1/part_7-0.txt", "world1/part_7-0.txt");
		type.set ("world1/part_7-0.txt", AssetType.TEXT);
		path.set ("world1/part_7-1.txt", "world1/part_7-1.txt");
		type.set ("world1/part_7-1.txt", AssetType.TEXT);
		path.set ("world1/part_7-2.txt", "world1/part_7-2.txt");
		type.set ("world1/part_7-2.txt", AssetType.TEXT);
		path.set ("world1/part_7-3.txt", "world1/part_7-3.txt");
		type.set ("world1/part_7-3.txt", AssetType.TEXT);
		path.set ("world1/part_7-4.txt", "world1/part_7-4.txt");
		type.set ("world1/part_7-4.txt", AssetType.TEXT);
		path.set ("world1/part_7-5.txt", "world1/part_7-5.txt");
		type.set ("world1/part_7-5.txt", AssetType.TEXT);
		path.set ("world1/part_7-6.txt", "world1/part_7-6.txt");
		type.set ("world1/part_7-6.txt", AssetType.TEXT);
		path.set ("world1/part_7-7.txt", "world1/part_7-7.txt");
		type.set ("world1/part_7-7.txt", AssetType.TEXT);
		path.set ("world1/part_7-8.txt", "world1/part_7-8.txt");
		type.set ("world1/part_7-8.txt", AssetType.TEXT);
		path.set ("world1/part_7-9.txt", "world1/part_7-9.txt");
		type.set ("world1/part_7-9.txt", AssetType.TEXT);
		path.set ("world1/part_8-0.txt", "world1/part_8-0.txt");
		type.set ("world1/part_8-0.txt", AssetType.TEXT);
		path.set ("world1/part_8-1.txt", "world1/part_8-1.txt");
		type.set ("world1/part_8-1.txt", AssetType.TEXT);
		path.set ("world1/part_8-2.txt", "world1/part_8-2.txt");
		type.set ("world1/part_8-2.txt", AssetType.TEXT);
		path.set ("world1/part_8-3.txt", "world1/part_8-3.txt");
		type.set ("world1/part_8-3.txt", AssetType.TEXT);
		path.set ("world1/part_8-4.txt", "world1/part_8-4.txt");
		type.set ("world1/part_8-4.txt", AssetType.TEXT);
		path.set ("world1/part_8-5.txt", "world1/part_8-5.txt");
		type.set ("world1/part_8-5.txt", AssetType.TEXT);
		path.set ("world1/part_8-6.txt", "world1/part_8-6.txt");
		type.set ("world1/part_8-6.txt", AssetType.TEXT);
		path.set ("world1/part_8-7.txt", "world1/part_8-7.txt");
		type.set ("world1/part_8-7.txt", AssetType.TEXT);
		path.set ("world1/part_8-8.txt", "world1/part_8-8.txt");
		type.set ("world1/part_8-8.txt", AssetType.TEXT);
		path.set ("world1/part_8-9.txt", "world1/part_8-9.txt");
		type.set ("world1/part_8-9.txt", AssetType.TEXT);
		path.set ("world1/part_9-0.txt", "world1/part_9-0.txt");
		type.set ("world1/part_9-0.txt", AssetType.TEXT);
		path.set ("world1/part_9-1.txt", "world1/part_9-1.txt");
		type.set ("world1/part_9-1.txt", AssetType.TEXT);
		path.set ("world1/part_9-2.txt", "world1/part_9-2.txt");
		type.set ("world1/part_9-2.txt", AssetType.TEXT);
		path.set ("world1/part_9-3.txt", "world1/part_9-3.txt");
		type.set ("world1/part_9-3.txt", AssetType.TEXT);
		path.set ("world1/part_9-4.txt", "world1/part_9-4.txt");
		type.set ("world1/part_9-4.txt", AssetType.TEXT);
		path.set ("world1/part_9-5.txt", "world1/part_9-5.txt");
		type.set ("world1/part_9-5.txt", AssetType.TEXT);
		path.set ("world1/part_9-6.txt", "world1/part_9-6.txt");
		type.set ("world1/part_9-6.txt", AssetType.TEXT);
		path.set ("world1/part_9-7.txt", "world1/part_9-7.txt");
		type.set ("world1/part_9-7.txt", AssetType.TEXT);
		path.set ("world1/part_9-8.txt", "world1/part_9-8.txt");
		type.set ("world1/part_9-8.txt", AssetType.TEXT);
		path.set ("world1/part_9-9.txt", "world1/part_9-9.txt");
		type.set ("world1/part_9-9.txt", AssetType.TEXT);
		path.set ("world/grass--.png", "world/grass--.png");
		type.set ("world/grass--.png", AssetType.IMAGE);
		path.set ("world/grass.json", "world/grass.json");
		type.set ("world/grass.json", AssetType.TEXT);
		path.set ("world/grass.png", "world/grass.png");
		type.set ("world/grass.png", AssetType.IMAGE);
		path.set ("world/ground_deco.png", "world/ground_deco.png");
		type.set ("world/ground_deco.png", AssetType.IMAGE);
		path.set ("world/mountain.png", "world/mountain.png");
		type.set ("world/mountain.png", AssetType.IMAGE);
		path.set ("world/ressources.png", "world/ressources.png");
		type.set ("world/ressources.png", AssetType.IMAGE);
		path.set ("world/sand.png", "world/sand.png");
		type.set ("world/sand.png", AssetType.IMAGE);
		path.set ("world/trees.png", "world/trees.png");
		type.set ("world/trees.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "mali/cavalier.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "mali/cavalier.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "mali/general.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "mali/general.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "mali/king.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "mali/king.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "data/animations.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/data.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/config.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_0-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_1-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_2-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_3-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_4-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_5-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_6-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_7-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_8-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/maps/world1/part_9-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "data/world_animations.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/config.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_0-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_1-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_2-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_3-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_4-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_5-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_6-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_7-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_8-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-0.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-1.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-2.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-3.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-4.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-5.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-6.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-7.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-8.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world1/part_9-9.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world/grass--.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "world/grass.json";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "world/grass.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "world/ground_deco.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "world/mountain.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "world/ressources.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "world/sand.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "world/trees.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofString (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash






























































































































































































































#elseif html5






























































































































































































































#else



#if (windows || mac || linux || cpp)





#end
#end

#if (openfl && !flash)

#end

#end