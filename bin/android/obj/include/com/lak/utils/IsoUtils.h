#ifndef INCLUDED_com_lak_utils_IsoUtils
#define INCLUDED_com_lak_utils_IsoUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,lak,utils,IsoUtils)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace com{
namespace lak{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  IsoUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IsoUtils_obj OBJ_;
		IsoUtils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.lak.utils.IsoUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IsoUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IsoUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IsoUtils","\xcc","\x0a","\x30","\x9d"); }

		static void __boot();
		static Array< ::String > spiralWalkStepArray;
		static ::String ISO_NORTH;
		static ::String ISO_NORTHEAST;
		static ::String ISO_EAST;
		static ::String ISO_SOUTHEAST;
		static ::String ISO_SOUTH;
		static ::String ISO_SOUTHWEST;
		static ::String ISO_WEST;
		static ::String ISO_NORTHWEST;
		static ::openfl::geom::Point slideMapTileWalker( ::openfl::geom::Point ptStart,::String dir,hx::Null< bool >  debug);
		static Dynamic slideMapTileWalker_dyn();

		static ::openfl::geom::Point mapTilePosition( ::openfl::geom::Point ptMap,hx::Null< int >  iTileWidth,hx::Null< int >  iTileHeight);
		static Dynamic mapTilePosition_dyn();

		static ::openfl::geom::Point getTileAt( ::openfl::geom::Point pt,hx::Null< bool >  bl);
		static Dynamic getTileAt_dyn();

		static int getPos( Float _ax,Float _ay,Float _bx,Float _by,Float _cx,Float _cy);
		static Dynamic getPos_dyn();

};

} // end namespace com
} // end namespace lak
} // end namespace utils

#endif /* INCLUDED_com_lak_utils_IsoUtils */ 
