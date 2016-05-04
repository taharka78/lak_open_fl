#ifndef INCLUDED_com_lak_entities_ai_Astar
#define INCLUDED_com_lak_entities_ai_Astar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,lak,entities,IsoObject)
HX_DECLARE_CLASS3(com,lak,entities,IsoUnit)
HX_DECLARE_CLASS4(com,lak,entities,ai,Astar)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace com{
namespace lak{
namespace entities{
namespace ai{


class HXCPP_CLASS_ATTRIBUTES  Astar_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Astar_obj OBJ_;
		Astar_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.lak.entities.ai.Astar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Astar_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Astar_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Astar","\x93","\x98","\x67","\xb9"); }

		static void __boot();
		static Float _straightCost;
		static Float _diagCost;
		static ::com::lak::entities::IsoUnit _unit;
		static Void findPath( ::com::lak::entities::IsoUnit unit);
		static Dynamic findPath_dyn();

		static Float diagonal( ::openfl::geom::Point node,::openfl::geom::Point endNode);
		static Dynamic diagonal_dyn();

		static Float manhattan( ::openfl::geom::Point newNode,::openfl::geom::Point end);
		static Dynamic manhattan_dyn();

		static int heuristic( ::openfl::geom::Point pt1,::openfl::geom::Point pt2);
		static Dynamic heuristic_dyn();

};

} // end namespace com
} // end namespace lak
} // end namespace entities
} // end namespace ai

#endif /* INCLUDED_com_lak_entities_ai_Astar */ 
