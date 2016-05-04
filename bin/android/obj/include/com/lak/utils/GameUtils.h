#ifndef INCLUDED_com_lak_utils_GameUtils
#define INCLUDED_com_lak_utils_GameUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,lak,utils,GameUtils)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace com{
namespace lak{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  GameUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameUtils_obj OBJ_;
		GameUtils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.lak.utils.GameUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GameUtils","\xbf","\x78","\xcc","\x81"); }

		static Float getAngleBetweenPt( ::openfl::geom::Point pt1,::openfl::geom::Point pt2);
		static Dynamic getAngleBetweenPt_dyn();

		static int sortByF( Dynamic a,Dynamic b);
		static Dynamic sortByF_dyn();

		static int random( int min,int max);
		static Dynamic random_dyn();

		static Float dx( ::openfl::geom::Point objectA,::openfl::geom::Point objectB);
		static Dynamic dx_dyn();

		static Float dy( ::openfl::geom::Point objectA,::openfl::geom::Point objectB);
		static Dynamic dy_dyn();

		static int distanceBetweenPt( ::openfl::geom::Point pt1,::openfl::geom::Point pt2);
		static Dynamic distanceBetweenPt_dyn();

		static Float toGridCoord( Float n1,Float factor);
		static Dynamic toGridCoord_dyn();

		static cpp::ArrayBase to2DDimension( ::String str,hx::Null< int >  size);
		static Dynamic to2DDimension_dyn();

};

} // end namespace com
} // end namespace lak
} // end namespace utils

#endif /* INCLUDED_com_lak_utils_GameUtils */ 
