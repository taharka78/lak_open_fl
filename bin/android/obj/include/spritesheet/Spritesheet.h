#ifndef INCLUDED_spritesheet_Spritesheet
#define INCLUDED_spritesheet_Spritesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)
HX_DECLARE_CLASS2(spritesheet,data,BehaviorData)
HX_DECLARE_CLASS2(spritesheet,data,SpritesheetFrame)
namespace spritesheet{


class HXCPP_CLASS_ATTRIBUTES  Spritesheet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Spritesheet_obj OBJ_;
		Spritesheet_obj();
		Void __construct(::openfl::display::BitmapData image,Array< ::Dynamic > frames,::haxe::ds::StringMap behaviors,::openfl::display::BitmapData imageAlpha);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="spritesheet.Spritesheet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Spritesheet_obj > __new(::openfl::display::BitmapData image,Array< ::Dynamic > frames,::haxe::ds::StringMap behaviors,::openfl::display::BitmapData imageAlpha);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Spritesheet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Spritesheet","\x5a","\xec","\xc7","\x03"); }

		::haxe::ds::StringMap behaviors;
		::String name;
		int totalFrames;
		Array< ::Dynamic > frames;
		::openfl::display::BitmapData sourceImage;
		::openfl::display::BitmapData sourceImageAlpha;
		virtual Void addBehavior( ::spritesheet::data::BehaviorData behavior);
		Dynamic addBehavior_dyn();

		virtual Void addFrame( ::spritesheet::data::SpritesheetFrame frame);
		Dynamic addFrame_dyn();

		virtual Void generateBitmaps( );
		Dynamic generateBitmaps_dyn();

		virtual Void generateBitmap( int index);
		Dynamic generateBitmap_dyn();

		virtual ::spritesheet::data::SpritesheetFrame getFrame( int index,hx::Null< bool >  autoGenerate);
		Dynamic getFrame_dyn();

		virtual Array< int > getFrameIDs( );
		Dynamic getFrameIDs_dyn();

		virtual Array< ::Dynamic > getFrames( );
		Dynamic getFrames_dyn();

		virtual Array< int > merge( ::spritesheet::Spritesheet spritesheet1);
		Dynamic merge_dyn();

		virtual Void updateImage( ::openfl::display::BitmapData image,::openfl::display::BitmapData imageAlpha);
		Dynamic updateImage_dyn();

};

} // end namespace spritesheet

#endif /* INCLUDED_spritesheet_Spritesheet */ 
