#ifndef INCLUDED_spritesheet_data_BehaviorData
#define INCLUDED_spritesheet_data_BehaviorData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spritesheet,data,BehaviorData)
namespace spritesheet{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  BehaviorData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BehaviorData_obj OBJ_;
		BehaviorData_obj();
		Void __construct(::String __o_name,Array< int > frames,hx::Null< bool >  __o_loop,hx::Null< int >  __o_frameRate,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="spritesheet.data.BehaviorData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BehaviorData_obj > __new(::String __o_name,Array< int > frames,hx::Null< bool >  __o_loop,hx::Null< int >  __o_frameRate,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BehaviorData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BehaviorData","\xfc","\x0f","\xea","\x74"); }

		static void __boot();
		static int uniqueID;
		cpp::ArrayBase frameData;
		int frameRate;
		Array< int > frames;
		bool loop;
		::String name;
		Float originX;
		Float originY;
		virtual ::spritesheet::data::BehaviorData clone( );
		Dynamic clone_dyn();

};

} // end namespace spritesheet
} // end namespace data

#endif /* INCLUDED_spritesheet_data_BehaviorData */ 
