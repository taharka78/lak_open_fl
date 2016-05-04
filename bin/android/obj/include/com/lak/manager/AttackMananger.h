#ifndef INCLUDED_com_lak_manager_AttackMananger
#define INCLUDED_com_lak_manager_AttackMananger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,lak,IsoWorld)
HX_DECLARE_CLASS3(com,lak,entities,IsoObject)
HX_DECLARE_CLASS3(com,lak,manager,AttackMananger)
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


class HXCPP_CLASS_ATTRIBUTES  AttackMananger_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AttackMananger_obj OBJ_;
		AttackMananger_obj();
		Void __construct(::com::lak::IsoWorld _world);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.lak.manager.AttackMananger")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AttackMananger_obj > __new(::com::lak::IsoWorld _world);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AttackMananger_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AttackMananger","\xf5","\xd8","\xe4","\x43"); }

		::com::lak::IsoWorld world;
		virtual Void run( );
		Dynamic run_dyn();

		virtual Void manageAttack( ::com::lak::entities::IsoObject obj);
		Dynamic manageAttack_dyn();

};

} // end namespace com
} // end namespace lak
} // end namespace manager

#endif /* INCLUDED_com_lak_manager_AttackMananger */ 
