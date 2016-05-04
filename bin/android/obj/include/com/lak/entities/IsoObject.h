#ifndef INCLUDED_com_lak_entities_IsoObject
#define INCLUDED_com_lak_entities_IsoObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(com,lak,entities,IsoObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(spritesheet,AnimatedSprite)
namespace com{
namespace lak{
namespace entities{


class HXCPP_CLASS_ATTRIBUTES  IsoObject_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef IsoObject_obj OBJ_;
		IsoObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.lak.entities.IsoObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IsoObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IsoObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("IsoObject","\xc4","\xa5","\x22","\x2a"); }

		::String type;
		bool hasBullet;
		bool hasPath;
		bool canAttack;
		bool isAttack;
		::spritesheet::AnimatedSprite spriteSheet;
		Float scale;
		::String currentAction;
		::String phase;
		int angle;
		bool clone;
		bool isLive;
		Float speed;
		virtual Void centerPoint( );
		Dynamic centerPoint_dyn();

};

} // end namespace com
} // end namespace lak
} // end namespace entities

#endif /* INCLUDED_com_lak_entities_IsoObject */ 
