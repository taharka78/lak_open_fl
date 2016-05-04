#ifndef INCLUDED_com_lak_Camera
#define INCLUDED_com_lak_Camera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,lak,Camera)
HX_DECLARE_CLASS2(com,lak,IsoWorld)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
namespace com{
namespace lak{


class HXCPP_CLASS_ATTRIBUTES  Camera_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Camera_obj OBJ_;
		Camera_obj();
		Void __construct(::com::lak::IsoWorld _world,::openfl::display::Stage _stg);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.lak.Camera")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Camera_obj > __new(::com::lak::IsoWorld _world,::openfl::display::Stage _stg);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Camera_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Camera","\xc5","\xba","\x20","\xec"); }

		Array< bool > aKeyPress;
		::com::lak::IsoWorld world;
		virtual Void keyDownListener( ::openfl::events::KeyboardEvent kevt);
		Dynamic keyDownListener_dyn();

		virtual Void keyUpListener( ::openfl::events::KeyboardEvent kevt);
		Dynamic keyUpListener_dyn();

		virtual Void checkKeys( );
		Dynamic checkKeys_dyn();

};

} // end namespace com
} // end namespace lak

#endif /* INCLUDED_com_lak_Camera */ 
