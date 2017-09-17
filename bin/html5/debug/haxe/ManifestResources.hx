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
		
		data = '{"name":null,"assets":"aoy4:pathy19:mali%2Farchery.jsony4:sizei98y4:typey4:TEXTy2:idR1y7:preloadtgoR0y18:mali%2Farchery.pngR2i36239R3y5:IMAGER5R7R6tgoR0y19:mali%2Fcaserne.jsonR2i100R3R4R5R9R6tgoR0y18:mali%2Fcaserne.pngR2i30630R3R8R5R10R6tgoR0y18:mali%2Fcastle.jsonR2i99R3R4R5R11R6tgoR0y17:mali%2Fcastle.pngR2i70062R3R8R5R12R6tgoR0y20:mali%2Fcavalier.jsonR2i23526R3R4R5R13R6tgoR0y19:mali%2Fcavalier.pngR2i964525R3R8R5R14R6tgoR0y16:mali%2Ffarm.jsonR2i97R3R4R5R15R6tgoR0y15:mali%2Ffarm.pngR2i13756R3R8R5R16R6tgoR0y17:mali%2Fforge.jsonR2i98R3R4R5R17R6tgoR0y16:mali%2Fforge.pngR2i9253R3R8R5R18R6tgoR0y17:mali%2Fforum.jsonR2i98R3R4R5R19R6tgoR0y16:mali%2Fforum.pngR2i45075R3R8R5R20R6tgoR0y19:mali%2Fgeneral.jsonR2i24082R3R4R5R21R6tgoR0y18:mali%2Fgeneral.pngR2i998268R3R8R5R22R6tgoR0y16:mali%2Fhome.jsonR2i96R3R4R5R23R6tgoR0y15:mali%2Fhome.pngR2i7976R3R8R5R24R6tgoR0y16:mali%2Fking.jsonR2i24352R3R4R5R25R6tgoR0y15:mali%2Fking.pngR2i1017095R3R8R5R26R6tgoR0y18:mali%2Fmarket.jsonR2i98R3R4R5R27R6tgoR0y17:mali%2Fmarket.pngR2i23460R3R8R5R28R6tgoR0y16:mali%2Fmine.jsonR2i97R3R4R5R29R6tgoR0y15:mali%2Fmine.pngR2i5656R3R8R5R30R6tgoR0y18:mali%2Fmosque.jsonR2i99R3R4R5R31R6tgoR0y17:mali%2Fmosque.pngR2i57319R3R8R5R32R6tgoR0y18:mali%2Fstable.jsonR2i98R3R4R5R33R6tgoR0y17:mali%2Fstable.pngR2i32591R3R8R5R34R6tgoR0y23:mali%2Fstablebread.jsonR2i104R3R4R5R35R6tgoR0y22:mali%2Fstablebread.pngR2i9576R3R8R5R36R6tgoR0y17:mali%2Ftower.jsonR2i97R3R4R5R37R6tgoR0y16:mali%2Ftower.pngR2i11887R3R8R5R38R6tgoR0y22:data%2Fanimations.jsonR2i68251R3R4R5R39R6tgoR0y22:data%2Fmaps%2Fdata.txtR2i8916R3R4R5R40R6tgoR0y34:data%2Fmaps%2Fworld1%2Fconfig.jsonR2i73R3R4R5R41R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-0.txtR2i46R3R4R5R42R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-1.txtR2i46R3R4R5R43R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-2.txtR2i46R3R4R5R44R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-3.txtR2i46R3R4R5R45R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-4.txtR2i46R3R4R5R46R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-5.txtR2i46R3R4R5R47R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-6.txtR2i46R3R4R5R48R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-7.txtR2i46R3R4R5R49R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-8.txtR2i46R3R4R5R50R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_0-9.txtR2i46R3R4R5R51R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-0.txtR2i46R3R4R5R52R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-1.txtR2i46R3R4R5R53R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-2.txtR2i46R3R4R5R54R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-3.txtR2i46R3R4R5R55R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-4.txtR2i46R3R4R5R56R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-5.txtR2i46R3R4R5R57R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-6.txtR2i46R3R4R5R58R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-7.txtR2i46R3R4R5R59R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-8.txtR2i46R3R4R5R60R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_1-9.txtR2i46R3R4R5R61R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-0.txtR2i46R3R4R5R62R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-1.txtR2i46R3R4R5R63R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-2.txtR2i46R3R4R5R64R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-3.txtR2i46R3R4R5R65R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-4.txtR2i46R3R4R5R66R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-5.txtR2i46R3R4R5R67R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-6.txtR2i46R3R4R5R68R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-7.txtR2i46R3R4R5R69R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-8.txtR2i46R3R4R5R70R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_2-9.txtR2i46R3R4R5R71R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-0.txtR2i46R3R4R5R72R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-1.txtR2i46R3R4R5R73R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-2.txtR2i46R3R4R5R74R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-3.txtR2i46R3R4R5R75R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-4.txtR2i46R3R4R5R76R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-5.txtR2i46R3R4R5R77R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-6.txtR2i46R3R4R5R78R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-7.txtR2i46R3R4R5R79R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-8.txtR2i46R3R4R5R80R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_3-9.txtR2i46R3R4R5R81R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-0.txtR2i46R3R4R5R82R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-1.txtR2i46R3R4R5R83R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-2.txtR2i46R3R4R5R84R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-3.txtR2i46R3R4R5R85R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-4.txtR2i46R3R4R5R86R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-5.txtR2i46R3R4R5R87R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-6.txtR2i46R3R4R5R88R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-7.txtR2i46R3R4R5R89R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-8.txtR2i46R3R4R5R90R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_4-9.txtR2i46R3R4R5R91R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-0.txtR2i46R3R4R5R92R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-1.txtR2i46R3R4R5R93R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-2.txtR2i46R3R4R5R94R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-3.txtR2i46R3R4R5R95R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-4.txtR2i46R3R4R5R96R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-5.txtR2i46R3R4R5R97R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-6.txtR2i46R3R4R5R98R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-7.txtR2i46R3R4R5R99R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-8.txtR2i46R3R4R5R100R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_5-9.txtR2i46R3R4R5R101R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-0.txtR2i46R3R4R5R102R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-1.txtR2i46R3R4R5R103R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-2.txtR2i46R3R4R5R104R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-3.txtR2i46R3R4R5R105R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-4.txtR2i46R3R4R5R106R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-5.txtR2i46R3R4R5R107R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-6.txtR2i46R3R4R5R108R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-7.txtR2i46R3R4R5R109R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-8.txtR2i46R3R4R5R110R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_6-9.txtR2i46R3R4R5R111R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-0.txtR2i46R3R4R5R112R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-1.txtR2i46R3R4R5R113R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-2.txtR2i46R3R4R5R114R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-3.txtR2i46R3R4R5R115R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-4.txtR2i46R3R4R5R116R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-5.txtR2i46R3R4R5R117R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-6.txtR2i46R3R4R5R118R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-7.txtR2i46R3R4R5R119R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-8.txtR2i46R3R4R5R120R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_7-9.txtR2i46R3R4R5R121R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-0.txtR2i46R3R4R5R122R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-1.txtR2i46R3R4R5R123R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-2.txtR2i46R3R4R5R124R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-3.txtR2i46R3R4R5R125R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-4.txtR2i46R3R4R5R126R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-5.txtR2i46R3R4R5R127R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-6.txtR2i46R3R4R5R128R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-7.txtR2i46R3R4R5R129R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-8.txtR2i46R3R4R5R130R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_8-9.txtR2i46R3R4R5R131R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-0.txtR2i46R3R4R5R132R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-1.txtR2i46R3R4R5R133R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-2.txtR2i46R3R4R5R134R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-3.txtR2i46R3R4R5R135R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-4.txtR2i46R3R4R5R136R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-5.txtR2i46R3R4R5R137R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-6.txtR2i46R3R4R5R138R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-7.txtR2i46R3R4R5R139R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-8.txtR2i46R3R4R5R140R6tgoR0y35:data%2Fmaps%2Fworld1%2Fpart_9-9.txtR2i46R3R4R5R141R6tgoR0y28:data%2Fworld_animations.jsonR2i1296R3R4R5R142R6tgoR0y20:world1%2Fconfig.jsonR2i73R3R4R5R143R6tgoR0y21:world1%2Fpart_0-0.txtR2i46R3R4R5R144R6tgoR0y21:world1%2Fpart_0-1.txtR2i46R3R4R5R145R6tgoR0y21:world1%2Fpart_0-2.txtR2i46R3R4R5R146R6tgoR0y21:world1%2Fpart_0-3.txtR2i46R3R4R5R147R6tgoR0y21:world1%2Fpart_0-4.txtR2i46R3R4R5R148R6tgoR0y21:world1%2Fpart_0-5.txtR2i46R3R4R5R149R6tgoR0y21:world1%2Fpart_0-6.txtR2i46R3R4R5R150R6tgoR0y21:world1%2Fpart_0-7.txtR2i46R3R4R5R151R6tgoR0y21:world1%2Fpart_0-8.txtR2i46R3R4R5R152R6tgoR0y21:world1%2Fpart_0-9.txtR2i46R3R4R5R153R6tgoR0y21:world1%2Fpart_1-0.txtR2i46R3R4R5R154R6tgoR0y21:world1%2Fpart_1-1.txtR2i46R3R4R5R155R6tgoR0y21:world1%2Fpart_1-2.txtR2i46R3R4R5R156R6tgoR0y21:world1%2Fpart_1-3.txtR2i46R3R4R5R157R6tgoR0y21:world1%2Fpart_1-4.txtR2i46R3R4R5R158R6tgoR0y21:world1%2Fpart_1-5.txtR2i46R3R4R5R159R6tgoR0y21:world1%2Fpart_1-6.txtR2i46R3R4R5R160R6tgoR0y21:world1%2Fpart_1-7.txtR2i46R3R4R5R161R6tgoR0y21:world1%2Fpart_1-8.txtR2i46R3R4R5R162R6tgoR0y21:world1%2Fpart_1-9.txtR2i46R3R4R5R163R6tgoR0y21:world1%2Fpart_2-0.txtR2i46R3R4R5R164R6tgoR0y21:world1%2Fpart_2-1.txtR2i46R3R4R5R165R6tgoR0y21:world1%2Fpart_2-2.txtR2i46R3R4R5R166R6tgoR0y21:world1%2Fpart_2-3.txtR2i46R3R4R5R167R6tgoR0y21:world1%2Fpart_2-4.txtR2i46R3R4R5R168R6tgoR0y21:world1%2Fpart_2-5.txtR2i46R3R4R5R169R6tgoR0y21:world1%2Fpart_2-6.txtR2i46R3R4R5R170R6tgoR0y21:world1%2Fpart_2-7.txtR2i46R3R4R5R171R6tgoR0y21:world1%2Fpart_2-8.txtR2i46R3R4R5R172R6tgoR0y21:world1%2Fpart_2-9.txtR2i46R3R4R5R173R6tgoR0y21:world1%2Fpart_3-0.txtR2i46R3R4R5R174R6tgoR0y21:world1%2Fpart_3-1.txtR2i46R3R4R5R175R6tgoR0y21:world1%2Fpart_3-2.txtR2i46R3R4R5R176R6tgoR0y21:world1%2Fpart_3-3.txtR2i46R3R4R5R177R6tgoR0y21:world1%2Fpart_3-4.txtR2i46R3R4R5R178R6tgoR0y21:world1%2Fpart_3-5.txtR2i46R3R4R5R179R6tgoR0y21:world1%2Fpart_3-6.txtR2i46R3R4R5R180R6tgoR0y21:world1%2Fpart_3-7.txtR2i46R3R4R5R181R6tgoR0y21:world1%2Fpart_3-8.txtR2i46R3R4R5R182R6tgoR0y21:world1%2Fpart_3-9.txtR2i46R3R4R5R183R6tgoR0y21:world1%2Fpart_4-0.txtR2i46R3R4R5R184R6tgoR0y21:world1%2Fpart_4-1.txtR2i46R3R4R5R185R6tgoR0y21:world1%2Fpart_4-2.txtR2i46R3R4R5R186R6tgoR0y21:world1%2Fpart_4-3.txtR2i46R3R4R5R187R6tgoR0y21:world1%2Fpart_4-4.txtR2i46R3R4R5R188R6tgoR0y21:world1%2Fpart_4-5.txtR2i46R3R4R5R189R6tgoR0y21:world1%2Fpart_4-6.txtR2i46R3R4R5R190R6tgoR0y21:world1%2Fpart_4-7.txtR2i46R3R4R5R191R6tgoR0y21:world1%2Fpart_4-8.txtR2i46R3R4R5R192R6tgoR0y21:world1%2Fpart_4-9.txtR2i46R3R4R5R193R6tgoR0y21:world1%2Fpart_5-0.txtR2i46R3R4R5R194R6tgoR0y21:world1%2Fpart_5-1.txtR2i46R3R4R5R195R6tgoR0y21:world1%2Fpart_5-2.txtR2i46R3R4R5R196R6tgoR0y21:world1%2Fpart_5-3.txtR2i46R3R4R5R197R6tgoR0y21:world1%2Fpart_5-4.txtR2i46R3R4R5R198R6tgoR0y21:world1%2Fpart_5-5.txtR2i46R3R4R5R199R6tgoR0y21:world1%2Fpart_5-6.txtR2i46R3R4R5R200R6tgoR0y21:world1%2Fpart_5-7.txtR2i46R3R4R5R201R6tgoR0y21:world1%2Fpart_5-8.txtR2i46R3R4R5R202R6tgoR0y21:world1%2Fpart_5-9.txtR2i46R3R4R5R203R6tgoR0y21:world1%2Fpart_6-0.txtR2i46R3R4R5R204R6tgoR0y21:world1%2Fpart_6-1.txtR2i46R3R4R5R205R6tgoR0y21:world1%2Fpart_6-2.txtR2i46R3R4R5R206R6tgoR0y21:world1%2Fpart_6-3.txtR2i46R3R4R5R207R6tgoR0y21:world1%2Fpart_6-4.txtR2i46R3R4R5R208R6tgoR0y21:world1%2Fpart_6-5.txtR2i46R3R4R5R209R6tgoR0y21:world1%2Fpart_6-6.txtR2i46R3R4R5R210R6tgoR0y21:world1%2Fpart_6-7.txtR2i46R3R4R5R211R6tgoR0y21:world1%2Fpart_6-8.txtR2i46R3R4R5R212R6tgoR0y21:world1%2Fpart_6-9.txtR2i46R3R4R5R213R6tgoR0y21:world1%2Fpart_7-0.txtR2i46R3R4R5R214R6tgoR0y21:world1%2Fpart_7-1.txtR2i46R3R4R5R215R6tgoR0y21:world1%2Fpart_7-2.txtR2i46R3R4R5R216R6tgoR0y21:world1%2Fpart_7-3.txtR2i46R3R4R5R217R6tgoR0y21:world1%2Fpart_7-4.txtR2i46R3R4R5R218R6tgoR0y21:world1%2Fpart_7-5.txtR2i46R3R4R5R219R6tgoR0y21:world1%2Fpart_7-6.txtR2i46R3R4R5R220R6tgoR0y21:world1%2Fpart_7-7.txtR2i46R3R4R5R221R6tgoR0y21:world1%2Fpart_7-8.txtR2i46R3R4R5R222R6tgoR0y21:world1%2Fpart_7-9.txtR2i46R3R4R5R223R6tgoR0y21:world1%2Fpart_8-0.txtR2i46R3R4R5R224R6tgoR0y21:world1%2Fpart_8-1.txtR2i46R3R4R5R225R6tgoR0y21:world1%2Fpart_8-2.txtR2i46R3R4R5R226R6tgoR0y21:world1%2Fpart_8-3.txtR2i46R3R4R5R227R6tgoR0y21:world1%2Fpart_8-4.txtR2i46R3R4R5R228R6tgoR0y21:world1%2Fpart_8-5.txtR2i46R3R4R5R229R6tgoR0y21:world1%2Fpart_8-6.txtR2i46R3R4R5R230R6tgoR0y21:world1%2Fpart_8-7.txtR2i46R3R4R5R231R6tgoR0y21:world1%2Fpart_8-8.txtR2i46R3R4R5R232R6tgoR0y21:world1%2Fpart_8-9.txtR2i46R3R4R5R233R6tgoR0y21:world1%2Fpart_9-0.txtR2i46R3R4R5R234R6tgoR0y21:world1%2Fpart_9-1.txtR2i46R3R4R5R235R6tgoR0y21:world1%2Fpart_9-2.txtR2i46R3R4R5R236R6tgoR0y21:world1%2Fpart_9-3.txtR2i46R3R4R5R237R6tgoR0y21:world1%2Fpart_9-4.txtR2i46R3R4R5R238R6tgoR0y21:world1%2Fpart_9-5.txtR2i46R3R4R5R239R6tgoR0y21:world1%2Fpart_9-6.txtR2i46R3R4R5R240R6tgoR0y21:world1%2Fpart_9-7.txtR2i46R3R4R5R241R6tgoR0y21:world1%2Fpart_9-8.txtR2i46R3R4R5R242R6tgoR0y21:world1%2Fpart_9-9.txtR2i46R3R4R5R243R6tgoR0y18:world%2Fgrass.jsonR2i121R3R4R5R244R6tgoR0y17:world%2Fgrass.pngR2i10797R3R8R5R245R6tgh","version":2,"libraryArgs":[],"libraryType":null}';
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

@:keep @:bind #if display private #end class __ASSET__mali_archery_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_archery_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_caserne_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_caserne_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_castle_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_castle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_cavalier_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_cavalier_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_farm_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_farm_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_forge_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_forge_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_forum_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_forum_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_general_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_general_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_home_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_home_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_king_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_king_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_market_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_market_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_mine_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_mine_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_mosque_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_mosque_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_stable_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_stable_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_stablebread_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_stablebread_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__mali_tower_json extends null { }
@:keep @:bind #if display private #end class __ASSET__mali_tower_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__data_animations_json extends null { }
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
@:keep @:bind #if display private #end class __ASSET__world_grass_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:file("assets/mali/archery.json") #if display private #end class __ASSET__mali_archery_json extends haxe.io.Bytes {}
@:image("assets/mali/archery.png") #if display private #end class __ASSET__mali_archery_png extends lime.graphics.Image {}
@:file("assets/mali/caserne.json") #if display private #end class __ASSET__mali_caserne_json extends haxe.io.Bytes {}
@:image("assets/mali/caserne.png") #if display private #end class __ASSET__mali_caserne_png extends lime.graphics.Image {}
@:file("assets/mali/castle.json") #if display private #end class __ASSET__mali_castle_json extends haxe.io.Bytes {}
@:image("assets/mali/castle.png") #if display private #end class __ASSET__mali_castle_png extends lime.graphics.Image {}
@:file("assets/mali/cavalier.json") #if display private #end class __ASSET__mali_cavalier_json extends haxe.io.Bytes {}
@:image("assets/mali/cavalier.png") #if display private #end class __ASSET__mali_cavalier_png extends lime.graphics.Image {}
@:file("assets/mali/farm.json") #if display private #end class __ASSET__mali_farm_json extends haxe.io.Bytes {}
@:image("assets/mali/farm.png") #if display private #end class __ASSET__mali_farm_png extends lime.graphics.Image {}
@:file("assets/mali/forge.json") #if display private #end class __ASSET__mali_forge_json extends haxe.io.Bytes {}
@:image("assets/mali/forge.png") #if display private #end class __ASSET__mali_forge_png extends lime.graphics.Image {}
@:file("assets/mali/forum.json") #if display private #end class __ASSET__mali_forum_json extends haxe.io.Bytes {}
@:image("assets/mali/forum.png") #if display private #end class __ASSET__mali_forum_png extends lime.graphics.Image {}
@:file("assets/mali/general.json") #if display private #end class __ASSET__mali_general_json extends haxe.io.Bytes {}
@:image("assets/mali/general.png") #if display private #end class __ASSET__mali_general_png extends lime.graphics.Image {}
@:file("assets/mali/home.json") #if display private #end class __ASSET__mali_home_json extends haxe.io.Bytes {}
@:image("assets/mali/home.png") #if display private #end class __ASSET__mali_home_png extends lime.graphics.Image {}
@:file("assets/mali/king.json") #if display private #end class __ASSET__mali_king_json extends haxe.io.Bytes {}
@:image("assets/mali/king.png") #if display private #end class __ASSET__mali_king_png extends lime.graphics.Image {}
@:file("assets/mali/market.json") #if display private #end class __ASSET__mali_market_json extends haxe.io.Bytes {}
@:image("assets/mali/market.png") #if display private #end class __ASSET__mali_market_png extends lime.graphics.Image {}
@:file("assets/mali/mine.json") #if display private #end class __ASSET__mali_mine_json extends haxe.io.Bytes {}
@:image("assets/mali/mine.png") #if display private #end class __ASSET__mali_mine_png extends lime.graphics.Image {}
@:file("assets/mali/mosque.json") #if display private #end class __ASSET__mali_mosque_json extends haxe.io.Bytes {}
@:image("assets/mali/mosque.png") #if display private #end class __ASSET__mali_mosque_png extends lime.graphics.Image {}
@:file("assets/mali/stable.json") #if display private #end class __ASSET__mali_stable_json extends haxe.io.Bytes {}
@:image("assets/mali/stable.png") #if display private #end class __ASSET__mali_stable_png extends lime.graphics.Image {}
@:file("assets/mali/stablebread.json") #if display private #end class __ASSET__mali_stablebread_json extends haxe.io.Bytes {}
@:image("assets/mali/stablebread.png") #if display private #end class __ASSET__mali_stablebread_png extends lime.graphics.Image {}
@:file("assets/mali/tower.json") #if display private #end class __ASSET__mali_tower_json extends haxe.io.Bytes {}
@:image("assets/mali/tower.png") #if display private #end class __ASSET__mali_tower_png extends lime.graphics.Image {}
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
@:file("assets/world/grass.json") #if display private #end class __ASSET__world_grass_json extends haxe.io.Bytes {}
@:image("assets/world/grass.png") #if display private #end class __ASSET__world_grass_png extends lime.graphics.Image {}
@:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)



#end
#end