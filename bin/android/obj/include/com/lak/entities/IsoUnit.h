#ifndef INCLUDED_com_lak_entities_IsoUnit
#define INCLUDED_com_lak_entities_IsoUnit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_lak_entities_IsoObject
#include <com/lak/entities/IsoObject.h>
#endif
HX_DECLARE_CLASS3(com,lak,entities,IsoObject)
HX_DECLARE_CLASS3(com,lak,entities,IsoUnit)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace com{
namespace lak{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  IsoUnit_obj : public ::com::lak::entities::IsoObject_obj{
	public:
		typedef ::com::lak::entities::IsoObject_obj super;
		typedef IsoUnit_obj OBJ_;
		IsoUnit_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.lak.entities.IsoUnit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IsoUnit_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IsoUnit_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("IsoUnit","\x49","\xb6","\xa6","\xf8"); }

		cpp::ArrayBase nodeTab;
		::openfl::geom::Point pCurr;
		::openfl::geom::Point pEnd;
		::String lastNode;
		Float xmovement;
		Float ymovement;
		virtual Void initilizeUnit( ::String assetName,::String civ);
		Dynamic initilizeUnit_dyn();

		virtual Void goTo( ::openfl::geom::Point targetpt);
		Dynamic goTo_dyn();

		virtual Void onStateChange( ::openfl::events::Event e);
		Dynamic onStateChange_dyn();

		virtual Void update( int delta);
		Dynamic update_dyn();

		virtual Void moveEnterFrame( );
		Dynamic moveEnterFrame_dyn();

		virtual Void moveAtDir( ::String lookdir);
		Dynamic moveAtDir_dyn();

		virtual Void lookAtDir( ::String lookdir);
		Dynamic lookAtDir_dyn();

};

} // end namespace com
} // end namespace lak
} // end namespace entities

#endif /* INCLUDED_com_lak_entities_IsoUnit */ 
