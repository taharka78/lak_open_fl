#ifndef INCLUDED_com_lak_IsoWorld
#define INCLUDED_com_lak_IsoWorld

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(com,lak,Camera)
HX_DECLARE_CLASS2(com,lak,IsoWorld)
HX_DECLARE_CLASS3(com,lak,entities,IsoObject)
HX_DECLARE_CLASS3(com,lak,manager,AttackMananger)
HX_DECLARE_CLASS3(com,lak,manager,EntitiesManager)
HX_DECLARE_CLASS3(com,lak,manager,LevelManager)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)
namespace com{
namespace lak{


class HXCPP_CLASS_ATTRIBUTES  IsoWorld_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef IsoWorld_obj OBJ_;
		IsoWorld_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.lak.IsoWorld")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IsoWorld_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IsoWorld_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("IsoWorld","\xed","\xf6","\xb5","\xc0"); }

		static ::com::lak::IsoWorld instance;
		::openfl::utils::ByteArrayData data;
		::openfl::display::Bitmap floor;
		Array< ::Dynamic > aWorld;
		Array< ::Dynamic > tilesArray;
		::openfl::display::BitmapData groundCanvas;
		::spritesheet::Spritesheet worldGrass;
		::openfl::geom::Matrix mtrx;
		int NB_TILE_W;
		int VIEW_WIDTH;
		int VIEW_HEIGHT;
		int worldTileWidth;
		int NB_LIGNE_WORLD;
		int worldTileHeight;
		cpp::ArrayBase levelData;
		int NB_TILE_H;
		int NB_COLONNE_WORLD;
		int PART_NUM_TILE_W;
		int PART_NUM_TILE_H;
		int offsetXCost;
		int offsetYCost;
		::String curentLevel;
		int OFFSET_LIGNE_WORLD;
		int OFFSET_COLONNE_WORLD;
		Float COLONNE_VISIBLE_OFFSET;
		Float LIGNE_VISIBLE_OFFSET;
		int tileH;
		int tileW;
		int halfH;
		int halfW;
		::openfl::geom::Point pt;
		Array< ::Dynamic > worldObject;
		::com::lak::manager::EntitiesManager entitiesManager;
		::com::lak::manager::AttackMananger attackMananger;
		::com::lak::Camera wCamera;
		::com::lak::manager::LevelManager levelManager;
		virtual Void onWorldaddedToStage( ::openfl::events::Event e);
		Dynamic onWorldaddedToStage_dyn();

		virtual Void worldSize( hx::Null< bool >  _first);
		Dynamic worldSize_dyn();

		virtual Void setupMapData( ::String partNum,hx::Null< int >  sensX,hx::Null< int >  sensY,hx::Null< bool >  creation);
		Dynamic setupMapData_dyn();

		virtual Void addChildToWorld( ::com::lak::entities::IsoObject child);
		Dynamic addChildToWorld_dyn();

		virtual Void setupWorld( hx::Null< bool >  createWorld);
		Dynamic setupWorld_dyn();

		virtual Void drawView( );
		Dynamic drawView_dyn();

		virtual Void update( int delta);
		Dynamic update_dyn();

};

} // end namespace com
} // end namespace lak

#endif /* INCLUDED_com_lak_IsoWorld */ 
