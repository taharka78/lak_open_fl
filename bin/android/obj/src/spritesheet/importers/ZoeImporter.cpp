#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_spritesheet_Spritesheet
#include <spritesheet/Spritesheet.h>
#endif
#ifndef INCLUDED_spritesheet_data_BehaviorData
#include <spritesheet/data/BehaviorData.h>
#endif
#ifndef INCLUDED_spritesheet_data_SpritesheetFrame
#include <spritesheet/data/SpritesheetFrame.h>
#endif
#ifndef INCLUDED_spritesheet_importers_ZoeImporter
#include <spritesheet/importers/ZoeImporter.h>
#endif
namespace spritesheet{
namespace importers{

Void ZoeImporter_obj::__construct()
{
	return null();
}

//ZoeImporter_obj::~ZoeImporter_obj() { }

Dynamic ZoeImporter_obj::__CreateEmpty() { return  new ZoeImporter_obj; }
hx::ObjectPtr< ZoeImporter_obj > ZoeImporter_obj::__new()
{  hx::ObjectPtr< ZoeImporter_obj > _result_ = new ZoeImporter_obj();
	_result_->__construct();
	return _result_;}

Dynamic ZoeImporter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZoeImporter_obj > _result_ = new ZoeImporter_obj();
	_result_->__construct();
	return _result_;}

::spritesheet::Spritesheet ZoeImporter_obj::parse( ::String data,::String __o_assetDirectory,::String __o_spritesheetName){
::String assetDirectory = __o_assetDirectory.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String spritesheetName = __o_spritesheetName.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("spritesheet.importers.ZoeImporter","parse",0x06c0ed66,"spritesheet.importers.ZoeImporter.parse","spritesheet/importers/ZoeImporter.hx",27,0x1a27eabf)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(assetDirectory,"assetDirectory")
	HX_STACK_ARG(spritesheetName,"spritesheetName")
{
		HX_STACK_LINE(29)
		::haxe::format::JsonParser tmp = ::haxe::format::JsonParser_obj::__new(data);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		Dynamic tmp1 = tmp->parseRec();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		Dynamic json = tmp1;		HX_STACK_VAR(json,"json");
		HX_STACK_LINE(30)
		Array< ::Dynamic > images = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(images,"images");
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			cpp::ArrayBase _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(32)
			_g1 = hx::TCastToArray(json->__Field(HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"), hx::paccDynamic ));
			HX_STACK_LINE(32)
			while((true)){
				HX_STACK_LINE(32)
				bool tmp2 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(32)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(32)
				if ((tmp3)){
					HX_STACK_LINE(32)
					break;
				}
				HX_STACK_LINE(32)
				Dynamic tmp4 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				Dynamic image = tmp4;		HX_STACK_VAR(image,"image");
				HX_STACK_LINE(32)
				++(_g);
				HX_STACK_LINE(34)
				::String tmp5 = (assetDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				Dynamic tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(34)
				::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(34)
				::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(34)
				::openfl::display::BitmapData tmp9 = ::openfl::Assets_obj::getBitmapData(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(34)
				::openfl::display::Bitmap tmp10 = ::openfl::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(34)
				images->push(tmp10);
			}
		}
		HX_STACK_LINE(38)
		Array< ::Dynamic > frames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(frames,"frames");
		HX_STACK_LINE(40)
		Dynamic tmp2 = json->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		if ((tmp3)){
			HX_STACK_LINE(42)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			cpp::ArrayBase _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			_g1 = hx::TCastToArray(json->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic ));
			HX_STACK_LINE(42)
			while((true)){
				HX_STACK_LINE(42)
				bool tmp4 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(42)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(42)
				if ((tmp5)){
					HX_STACK_LINE(42)
					break;
				}
				HX_STACK_LINE(42)
				Dynamic tmp6 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				Dynamic frame = tmp6;		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(42)
				++(_g);
				HX_STACK_LINE(45)
				int tmp7 = frame->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(45)
				int tmp8 = frame->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(45)
				int tmp9 = frame->__GetItem((int)2);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(45)
				int tmp10 = frame->__GetItem((int)3);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(45)
				Float tmp11 = frame->__GetItem((int)5);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				Float tmp14 = frame->__GetItem((int)6);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(45)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(45)
				::spritesheet::data::SpritesheetFrame tmp17 = ::spritesheet::data::SpritesheetFrame_obj::__new(tmp7,tmp8,tmp9,tmp10,tmp13,tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(45)
				frames->push(tmp17);
			}
		}
		else{
			HX_STACK_LINE(51)
			::openfl::display::Bitmap tmp4 = images->__get((int)0).StaticCast< ::openfl::display::Bitmap >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			int tmp6 = json->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			int columns = tmp8;		HX_STACK_VAR(columns,"columns");
			HX_STACK_LINE(52)
			::openfl::display::Bitmap tmp9 = images->__get((int)0).StaticCast< ::openfl::display::Bitmap >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			int tmp11 = json->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(52)
			int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(52)
			int rows = tmp13;		HX_STACK_VAR(rows,"rows");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				while((true)){
					HX_STACK_LINE(54)
					bool tmp14 = (_g < rows);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					if ((tmp15)){
						HX_STACK_LINE(54)
						break;
					}
					HX_STACK_LINE(54)
					int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(54)
					int k = tmp16;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp17 = (_g1 < columns);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(56)
							bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(56)
							if ((tmp18)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(56)
							int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(56)
							int i = tmp19;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(58)
							int tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(58)
							int tmp21 = json->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(58)
							int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(58)
							int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(58)
							int tmp24 = k;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(58)
							int tmp25 = json->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(58)
							int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(58)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(58)
							int tmp28 = json->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(58)
							int tmp29 = json->__Field(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"), hx::paccDynamic )->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(58)
							::spritesheet::data::SpritesheetFrame tmp30 = ::spritesheet::data::SpritesheetFrame_obj::__new(tmp23,tmp27,tmp28,tmp29,(int)0,(int)0,null());		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(58)
							frames->push(tmp30);
						}
					}
				}
			}
		}
		HX_STACK_LINE(67)
		::haxe::ds::StringMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			tmp4 = tmp6;
		}
		HX_STACK_LINE(67)
		::haxe::ds::StringMap behaviors = tmp4;		HX_STACK_VAR(behaviors,"behaviors");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			Dynamic tmp5 = json->__Field(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp5);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(69)
			while((true)){
				HX_STACK_LINE(69)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(69)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(69)
				if ((tmp7)){
					HX_STACK_LINE(69)
					break;
				}
				HX_STACK_LINE(69)
				::String tmp8 = _g1->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				::String key = tmp8;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(69)
				++(_g);
				HX_STACK_LINE(71)
				Dynamic tmp9 = json->__Field(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(71)
				::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(71)
				Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(71)
				Dynamic state = tmp11;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(72)
				Array< int > behaviorFrames = Array_obj< int >::__new();		HX_STACK_VAR(behaviorFrames,"behaviorFrames");
				HX_STACK_LINE(73)
				Dynamic tmp12 = state;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				Dynamic tmp13 = ::Reflect_obj::field(tmp12,HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				Dynamic frames1 = tmp13;		HX_STACK_VAR(frames1,"frames1");
				HX_STACK_LINE(75)
				bool tmp14 = (frames1 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(75)
				if ((tmp14)){
					HX_STACK_LINE(79)
					Dynamic tmp15 = json->__Field(HX_HCSTRING("animations","\xef","\x34","\x1c","\x83"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(79)
					::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(79)
					Dynamic tmp17 = ::Reflect_obj::field(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(79)
					Array< int > list_frames = tmp17;		HX_STACK_VAR(list_frames,"list_frames");
					HX_STACK_LINE(81)
					{
						HX_STACK_LINE(81)
						int tmp18 = list_frames->__get((int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(81)
						int _g3 = tmp18;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(81)
						int tmp19 = list_frames->__get((int)1);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(81)
						int _g2 = tmp19;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(81)
						while((true)){
							HX_STACK_LINE(81)
							bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(81)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(81)
							if ((tmp21)){
								HX_STACK_LINE(81)
								break;
							}
							HX_STACK_LINE(81)
							int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(81)
							int i = tmp22;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(83)
							int tmp23 = i;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(83)
							behaviorFrames->push(tmp23);
						}
					}
				}
				else{
					HX_STACK_LINE(89)
					Dynamic tmp15 = state;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(89)
					Dynamic tmp16 = ::Reflect_obj::field(tmp15,HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(89)
					behaviorFrames = tmp16;
				}
				HX_STACK_LINE(95)
				::spritesheet::data::BehaviorData tmp15 = ::spritesheet::data::BehaviorData_obj::__new(key,behaviorFrames,true,(int)30,(int)0,(int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(95)
				::spritesheet::data::BehaviorData behavior = tmp15;		HX_STACK_VAR(behavior,"behavior");
				HX_STACK_LINE(96)
				::String tmp16 = behavior->name;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				::spritesheet::data::BehaviorData tmp17 = behavior;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(96)
				behaviors->set(tmp16,tmp17);
			}
		}
		HX_STACK_LINE(102)
		bool tmp5 = (spritesheetName == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		if ((tmp5)){
			HX_STACK_LINE(104)
			Dynamic tmp6 = json->__Field(HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			::String tmp7 = tmp6->__Field(HX_HCSTRING("split","\xda","\xea","\x6e","\x81"), hx::paccDynamic )(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			::String spritesheetName1 = tmp7;		HX_STACK_VAR(spritesheetName1,"spritesheetName1");
			HX_STACK_LINE(106)
			bool tmp8 = (spritesheetName1 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			if ((tmp8)){
				HX_STACK_LINE(108)
				spritesheetName1 = HX_HCSTRING("undefined","\x90","\x3e","\x0a","\x9d");
			}
		}
		HX_STACK_LINE(113)
		::String tmp6 = (assetDirectory + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		Dynamic tmp7 = json->__Field(HX_HCSTRING("images","\xb8","\x50","\x92","\xfe"), hx::paccDynamic )->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(113)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(113)
		::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(113)
		::openfl::display::BitmapData tmp10 = ::openfl::Assets_obj::getBitmapData(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(113)
		::haxe::ds::StringMap tmp11 = behaviors;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(113)
		::spritesheet::Spritesheet tmp12 = ::spritesheet::Spritesheet_obj::__new(tmp10,frames,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(113)
		::spritesheet::Spritesheet spritesheet2 = tmp12;		HX_STACK_VAR(spritesheet2,"spritesheet2");
		HX_STACK_LINE(114)
		spritesheet2->name = spritesheetName;
		HX_STACK_LINE(116)
		::spritesheet::Spritesheet tmp13 = spritesheet2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(116)
		return tmp13;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZoeImporter_obj,parse,return )


ZoeImporter_obj::ZoeImporter_obj()
{
}

bool ZoeImporter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZoeImporter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZoeImporter_obj::__mClass,"__mClass");
};

#endif

hx::Class ZoeImporter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null()) };

void ZoeImporter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("spritesheet.importers.ZoeImporter","\x61","\x05","\x4d","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ZoeImporter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ZoeImporter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace spritesheet
} // end namespace importers
