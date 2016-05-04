#ifndef INCLUDED_spritesheet_importers_ZoeImporter
#define INCLUDED_spritesheet_importers_ZoeImporter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spritesheet,Spritesheet)
HX_DECLARE_CLASS2(spritesheet,importers,ZoeImporter)
namespace spritesheet{
namespace importers{


class HXCPP_CLASS_ATTRIBUTES  ZoeImporter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZoeImporter_obj OBJ_;
		ZoeImporter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="spritesheet.importers.ZoeImporter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ZoeImporter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZoeImporter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ZoeImporter","\x22","\xb5","\xe5","\xe8"); }

		static ::spritesheet::Spritesheet parse( ::String data,::String assetDirectory,::String spritesheetName);
		static Dynamic parse_dyn();

};

} // end namespace spritesheet
} // end namespace importers

#endif /* INCLUDED_spritesheet_importers_ZoeImporter */ 
