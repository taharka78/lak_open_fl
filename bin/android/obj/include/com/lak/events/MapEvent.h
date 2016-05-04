#ifndef INCLUDED_com_lak_events_MapEvent
#define INCLUDED_com_lak_events_MapEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS3(com,lak,events,MapEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
namespace com{
namespace lak{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  MapEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef MapEvent_obj OBJ_;
		MapEvent_obj();
		Void __construct(::String ype,Dynamic _dataObj);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.lak.events.MapEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapEvent_obj > __new(::String ype,Dynamic _dataObj);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapEvent","\xfe","\xf3","\xb8","\xc6"); }

		static void __boot();
		static ::String SETUP_WORLD;
		static ::String INIT;
		Dynamic dataObj;
		virtual ::openfl::events::Event clone( );

};

} // end namespace com
} // end namespace lak
} // end namespace events

#endif /* INCLUDED_com_lak_events_MapEvent */ 
