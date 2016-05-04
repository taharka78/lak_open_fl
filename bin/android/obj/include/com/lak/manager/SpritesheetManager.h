#ifndef INCLUDED_com_lak_manager_SpritesheetManager
#define INCLUDED_com_lak_manager_SpritesheetManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,lak,manager,SpritesheetManager)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)
namespace com{
namespace lak{
namespace manager{


class HXCPP_CLASS_ATTRIBUTES  SpritesheetManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SpritesheetManager_obj OBJ_;
		SpritesheetManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.lak.manager.SpritesheetManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SpritesheetManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpritesheetManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SpritesheetManager","\x33","\x6d","\x1c","\x91"); }

		::haxe::ds::StringMap sheetsCache;
		virtual ::spritesheet::Spritesheet getSpritesheet( ::String assetFolderName,::String assetName);
		Dynamic getSpritesheet_dyn();

		virtual Void addSpriteSheet( ::String assetFolderName,::String assetName);
		Dynamic addSpriteSheet_dyn();

};

} // end namespace com
} // end namespace lak
} // end namespace manager

#endif /* INCLUDED_com_lak_manager_SpritesheetManager */ 
