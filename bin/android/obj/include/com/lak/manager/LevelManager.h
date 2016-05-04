#ifndef INCLUDED_com_lak_manager_LevelManager
#define INCLUDED_com_lak_manager_LevelManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,lak,entities,IsoObject)
HX_DECLARE_CLASS3(com,lak,entities,IsoUnit)
HX_DECLARE_CLASS3(com,lak,manager,LevelManager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace com{
namespace lak{
namespace manager{


class HXCPP_CLASS_ATTRIBUTES  LevelManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LevelManager_obj OBJ_;
		LevelManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.lak.manager.LevelManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LevelManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LevelManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LevelManager","\x69","\x69","\x81","\x3a"); }

		static ::com::lak::manager::LevelManager instance;
		::com::lak::entities::IsoUnit tempUnit;
		virtual Void get9Nodes( ::com::lak::entities::IsoUnit _unit);
		Dynamic get9Nodes_dyn();

		virtual cpp::ArrayBase mapPartArray( ::String partName);
		Dynamic mapPartArray_dyn();

		virtual Void getUnitAdjacentNodes( ::com::lak::entities::IsoUnit _unit,cpp::ArrayBase tempMapAr);
		Dynamic getUnitAdjacentNodes_dyn();

};

} // end namespace com
} // end namespace lak
} // end namespace manager

#endif /* INCLUDED_com_lak_manager_LevelManager */ 
