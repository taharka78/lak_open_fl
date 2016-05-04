#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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
namespace spritesheet{

Void Spritesheet_obj::__construct(::openfl::display::BitmapData image,Array< ::Dynamic > frames,::haxe::ds::StringMap behaviors,::openfl::display::BitmapData imageAlpha)
{
HX_STACK_FRAME("spritesheet.Spritesheet","new",0x02508e58,"spritesheet.Spritesheet.new","spritesheet/Spritesheet.hx",23,0x514323d9)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
HX_STACK_ARG(frames,"frames")
HX_STACK_ARG(behaviors,"behaviors")
HX_STACK_ARG(imageAlpha,"imageAlpha")
{
	HX_STACK_LINE(25)
	this->sourceImage = image;
	HX_STACK_LINE(26)
	this->sourceImageAlpha = imageAlpha;
	HX_STACK_LINE(28)
	bool tmp = (frames == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	if ((tmp)){
		HX_STACK_LINE(30)
		this->frames = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(31)
		this->totalFrames = (int)0;
	}
	else{
		HX_STACK_LINE(35)
		this->frames = frames;
		HX_STACK_LINE(36)
		this->totalFrames = frames->length;
	}
	HX_STACK_LINE(40)
	bool tmp1 = (behaviors == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	if ((tmp1)){
		HX_STACK_LINE(42)
		::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(42)
		this->behaviors = tmp2;
	}
	else{
		HX_STACK_LINE(46)
		this->behaviors = behaviors;
	}
}
;
	return null();
}

//Spritesheet_obj::~Spritesheet_obj() { }

Dynamic Spritesheet_obj::__CreateEmpty() { return  new Spritesheet_obj; }
hx::ObjectPtr< Spritesheet_obj > Spritesheet_obj::__new(::openfl::display::BitmapData image,Array< ::Dynamic > frames,::haxe::ds::StringMap behaviors,::openfl::display::BitmapData imageAlpha)
{  hx::ObjectPtr< Spritesheet_obj > _result_ = new Spritesheet_obj();
	_result_->__construct(image,frames,behaviors,imageAlpha);
	return _result_;}

Dynamic Spritesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spritesheet_obj > _result_ = new Spritesheet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Spritesheet_obj::addBehavior( ::spritesheet::data::BehaviorData behavior){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","addBehavior",0x2e4e3dcb,"spritesheet.Spritesheet.addBehavior","spritesheet/Spritesheet.hx",53,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(behavior,"behavior")
		HX_STACK_LINE(55)
		::haxe::ds::StringMap tmp = this->behaviors;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::String tmp1 = behavior->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		::spritesheet::data::BehaviorData tmp2 = behavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spritesheet_obj,addBehavior,(void))

Void Spritesheet_obj::addFrame( ::spritesheet::data::SpritesheetFrame frame){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","addFrame",0x68183d54,"spritesheet.Spritesheet.addFrame","spritesheet/Spritesheet.hx",60,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(62)
		::spritesheet::data::SpritesheetFrame tmp = frame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		this->frames->push(tmp);
		HX_STACK_LINE(63)
		(this->totalFrames)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spritesheet_obj,addFrame,(void))

Void Spritesheet_obj::generateBitmaps( ){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","generateBitmaps",0x9059fce7,"spritesheet.Spritesheet.generateBitmaps","spritesheet/Spritesheet.hx",70,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		int tmp = this->totalFrames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			if ((tmp2)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			this->generateBitmap(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritesheet_obj,generateBitmaps,(void))

Void Spritesheet_obj::generateBitmap( int index){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","generateBitmap",0x84aa4e0c,"spritesheet.Spritesheet.generateBitmap","spritesheet/Spritesheet.hx",79,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(81)
		::spritesheet::data::SpritesheetFrame tmp = this->frames->__get(index).StaticCast< ::spritesheet::data::SpritesheetFrame >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::spritesheet::data::SpritesheetFrame frame = tmp;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(83)
		::openfl::display::BitmapData tmp1 = ::openfl::display::BitmapData_obj::__new(frame->width,frame->height,true,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		::openfl::display::BitmapData bitmapData = tmp1;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(84)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(frame->x,frame->y,frame->width,frame->height);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		::openfl::geom::Rectangle sourceRectangle = tmp2;		HX_STACK_VAR(sourceRectangle,"sourceRectangle");
		HX_STACK_LINE(85)
		::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		::openfl::geom::Point targetPoint = tmp3;		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(87)
		::openfl::display::BitmapData tmp4 = this->sourceImage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		::openfl::geom::Rectangle tmp5 = sourceRectangle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::openfl::geom::Point tmp6 = targetPoint;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		bitmapData->copyPixels(tmp4,tmp5,tmp6,null(),null(),null());
		HX_STACK_LINE(89)
		::openfl::display::BitmapData tmp7 = this->sourceImageAlpha;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		if ((tmp8)){
			HX_STACK_LINE(91)
			::openfl::display::BitmapData tmp9 = this->sourceImageAlpha;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(91)
			::openfl::geom::Rectangle tmp10 = sourceRectangle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			::openfl::geom::Point tmp11 = targetPoint;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(91)
			bitmapData->copyChannel(tmp9,tmp10,tmp11,(int)2,(int)8);
		}
		HX_STACK_LINE(95)
		frame->bitmapData = bitmapData;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spritesheet_obj,generateBitmap,(void))

::spritesheet::data::SpritesheetFrame Spritesheet_obj::getFrame( int index,hx::Null< bool >  __o_autoGenerate){
bool autoGenerate = __o_autoGenerate.Default(true);
	HX_STACK_FRAME("spritesheet.Spritesheet","getFrame",0x4e9226bf,"spritesheet.Spritesheet.getFrame","spritesheet/Spritesheet.hx",100,0x514323d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(autoGenerate,"autoGenerate")
{
		HX_STACK_LINE(102)
		::spritesheet::data::SpritesheetFrame tmp = this->frames->__get(index).StaticCast< ::spritesheet::data::SpritesheetFrame >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::spritesheet::data::SpritesheetFrame frame = tmp;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(104)
		bool tmp1 = (frame != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		if ((tmp2)){
			HX_STACK_LINE(104)
			tmp3 = (frame->bitmapData == null());
		}
		else{
			HX_STACK_LINE(104)
			tmp3 = false;
		}
		HX_STACK_LINE(104)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		if ((tmp3)){
			HX_STACK_LINE(104)
			tmp4 = autoGenerate;
		}
		else{
			HX_STACK_LINE(104)
			tmp4 = false;
		}
		HX_STACK_LINE(104)
		if ((tmp4)){
			HX_STACK_LINE(106)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			this->generateBitmap(tmp5);
		}
		HX_STACK_LINE(110)
		::spritesheet::data::SpritesheetFrame tmp5 = frame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Spritesheet_obj,getFrame,return )

Array< int > Spritesheet_obj::getFrameIDs( ){
	HX_STACK_FRAME("spritesheet.Spritesheet","getFrameIDs",0x3540fad9,"spritesheet.Spritesheet.getFrameIDs","spritesheet/Spritesheet.hx",115,0x514323d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	Array< int > ids = Array_obj< int >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		int tmp = this->totalFrames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		while((true)){
			HX_STACK_LINE(119)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			if ((tmp2)){
				HX_STACK_LINE(119)
				break;
			}
			HX_STACK_LINE(119)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(121)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			ids->push(tmp4);
		}
	}
	HX_STACK_LINE(125)
	return ids;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritesheet_obj,getFrameIDs,return )

Array< ::Dynamic > Spritesheet_obj::getFrames( ){
	HX_STACK_FRAME("spritesheet.Spritesheet","getFrames",0x714fc0d4,"spritesheet.Spritesheet.getFrames","spritesheet/Spritesheet.hx",132,0x514323d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	return this->frames->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritesheet_obj,getFrames,return )

Array< int > Spritesheet_obj::merge( ::spritesheet::Spritesheet spritesheet1){
	HX_STACK_FRAME("spritesheet.Spritesheet","merge",0x0ee8ceb0,"spritesheet.Spritesheet.merge","spritesheet/Spritesheet.hx",137,0x514323d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spritesheet1,"spritesheet1")
	HX_STACK_LINE(139)
	int tmp = this->totalFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	int cacheTotalFrames = tmp;		HX_STACK_VAR(cacheTotalFrames,"cacheTotalFrames");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		int tmp1 = spritesheet1->frames->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			if ((tmp3)){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(143)
			::spritesheet::data::SpritesheetFrame tmp5 = spritesheet1->frames->__get(i).StaticCast< ::spritesheet::data::SpritesheetFrame >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			::openfl::display::BitmapData tmp6 = tmp5->bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(143)
			if ((tmp7)){
				HX_STACK_LINE(143)
				::openfl::display::BitmapData tmp9 = spritesheet1->sourceImage;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(143)
				::openfl::display::BitmapData tmp10 = this->sourceImage;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(143)
				::openfl::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(143)
				bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(143)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(143)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(143)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(143)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(143)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(143)
				if ((tmp17)){
					HX_STACK_LINE(143)
					::openfl::display::BitmapData tmp18 = spritesheet1->sourceImageAlpha;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(143)
					::openfl::display::BitmapData tmp19 = this->sourceImageAlpha;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(143)
					::openfl::display::BitmapData tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(143)
					::openfl::display::BitmapData tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(143)
					tmp8 = (tmp18 != tmp21);
				}
				else{
					HX_STACK_LINE(143)
					tmp8 = true;
				}
			}
			else{
				HX_STACK_LINE(143)
				tmp8 = false;
			}
			HX_STACK_LINE(143)
			if ((tmp8)){
				HX_STACK_LINE(145)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(145)
				spritesheet1->generateBitmap(tmp9);
			}
			HX_STACK_LINE(149)
			::spritesheet::data::SpritesheetFrame tmp9 = spritesheet1->frames->__get(i).StaticCast< ::spritesheet::data::SpritesheetFrame >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			this->addFrame(tmp9);
		}
	}
	HX_STACK_LINE(153)
	Dynamic tmp1 = spritesheet1->behaviors->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	for(::cpp::FastIterator_obj< ::spritesheet::data::BehaviorData > *__it = ::cpp::CreateFastIterator< ::spritesheet::data::BehaviorData >(tmp1);  __it->hasNext(); ){
		::spritesheet::data::BehaviorData behavior = __it->next();
		{
			HX_STACK_LINE(155)
			::haxe::ds::StringMap tmp2 = this->behaviors;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			::String tmp3 = behavior->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			if ((tmp5)){
				HX_STACK_LINE(157)
				::spritesheet::data::BehaviorData tmp6 = behavior->clone();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(157)
				::spritesheet::data::BehaviorData clone = tmp6;		HX_STACK_VAR(clone,"clone");
				HX_STACK_LINE(158)
				clone->name = behavior->name;
				HX_STACK_LINE(160)
				{
					HX_STACK_LINE(160)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(160)
					int tmp7 = behavior->frames->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(160)
					int _g = tmp7;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(160)
					while((true)){
						HX_STACK_LINE(160)
						bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(160)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(160)
						if ((tmp9)){
							HX_STACK_LINE(160)
							break;
						}
						HX_STACK_LINE(160)
						int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(160)
						int i = tmp10;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(162)
						int tmp11 = cacheTotalFrames;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(162)
						hx::AddEq(behavior->frames[i],tmp11);
					}
				}
				HX_STACK_LINE(166)
				::spritesheet::data::BehaviorData tmp7 = behavior;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				this->addBehavior(tmp7);
			}
		}
;
	}
	HX_STACK_LINE(172)
	Array< int > ids = Array_obj< int >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		int _g1 = cacheTotalFrames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(174)
		int tmp2 = this->totalFrames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(174)
		while((true)){
			HX_STACK_LINE(174)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(174)
			if ((tmp4)){
				HX_STACK_LINE(174)
				break;
			}
			HX_STACK_LINE(174)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(176)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			ids->push(tmp6);
		}
	}
	HX_STACK_LINE(180)
	return ids;
}


HX_DEFINE_DYNAMIC_FUNC1(Spritesheet_obj,merge,return )

Void Spritesheet_obj::updateImage( ::openfl::display::BitmapData image,::openfl::display::BitmapData imageAlpha){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","updateImage",0x9560fe8a,"spritesheet.Spritesheet.updateImage","spritesheet/Spritesheet.hx",185,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(imageAlpha,"imageAlpha")
		HX_STACK_LINE(187)
		this->sourceImage = image;
		HX_STACK_LINE(188)
		this->sourceImageAlpha = imageAlpha;
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(190)
			while((true)){
				HX_STACK_LINE(190)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(190)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(190)
				if ((tmp1)){
					HX_STACK_LINE(190)
					break;
				}
				HX_STACK_LINE(190)
				::spritesheet::data::SpritesheetFrame tmp2 = _g1->__get(_g).StaticCast< ::spritesheet::data::SpritesheetFrame >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(190)
				::spritesheet::data::SpritesheetFrame frame = tmp2;		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(190)
				++(_g);
				HX_STACK_LINE(192)
				bool tmp3 = (frame->bitmapData != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(192)
				if ((tmp3)){
					HX_STACK_LINE(194)
					frame->bitmapData = null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Spritesheet_obj,updateImage,(void))


Spritesheet_obj::Spritesheet_obj()
{
}

void Spritesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spritesheet);
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(sourceImage,"sourceImage");
	HX_MARK_MEMBER_NAME(sourceImageAlpha,"sourceImageAlpha");
	HX_MARK_END_CLASS();
}

void Spritesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(sourceImage,"sourceImage");
	HX_VISIT_MEMBER_NAME(sourceImageAlpha,"sourceImageAlpha");
}

Dynamic Spritesheet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addFrame") ) { return addFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		if (HX_FIELD_EQ(inName,"getFrames") ) { return getFrames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return totalFrames; }
		if (HX_FIELD_EQ(inName,"sourceImage") ) { return sourceImage; }
		if (HX_FIELD_EQ(inName,"addBehavior") ) { return addBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameIDs") ) { return getFrameIDs_dyn(); }
		if (HX_FIELD_EQ(inName,"updateImage") ) { return updateImage_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generateBitmap") ) { return generateBitmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateBitmaps") ) { return generateBitmaps_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sourceImageAlpha") ) { return sourceImageAlpha; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spritesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceImage") ) { sourceImage=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sourceImageAlpha") ) { sourceImageAlpha=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spritesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("behaviors","\xa1","\xef","\xab","\x35"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("sourceImage","\x80","\xe4","\x6e","\xec"));
	outFields->push(HX_HCSTRING("sourceImageAlpha","\xbe","\xe2","\x88","\x85"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Spritesheet_obj,behaviors),HX_HCSTRING("behaviors","\xa1","\xef","\xab","\x35")},
	{hx::fsString,(int)offsetof(Spritesheet_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Spritesheet_obj,totalFrames),HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Spritesheet_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Spritesheet_obj,sourceImage),HX_HCSTRING("sourceImage","\x80","\xe4","\x6e","\xec")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Spritesheet_obj,sourceImageAlpha),HX_HCSTRING("sourceImageAlpha","\xbe","\xe2","\x88","\x85")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("behaviors","\xa1","\xef","\xab","\x35"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("sourceImage","\x80","\xe4","\x6e","\xec"),
	HX_HCSTRING("sourceImageAlpha","\xbe","\xe2","\x88","\x85"),
	HX_HCSTRING("addBehavior","\xd3","\xc7","\xee","\x3b"),
	HX_HCSTRING("addFrame","\x4c","\x9e","\xe0","\x7f"),
	HX_HCSTRING("generateBitmaps","\xef","\x2a","\x3c","\xd5"),
	HX_HCSTRING("generateBitmap","\x04","\xb9","\xc5","\xf7"),
	HX_HCSTRING("getFrame","\xb7","\x87","\x5a","\x66"),
	HX_HCSTRING("getFrameIDs","\xe1","\x84","\xe1","\x42"),
	HX_HCSTRING("getFrames","\xdc","\x38","\xdc","\x28"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("updateImage","\x92","\x88","\x01","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spritesheet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spritesheet_obj::__mClass,"__mClass");
};

#endif

hx::Class Spritesheet_obj::__mClass;

void Spritesheet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("spritesheet.Spritesheet","\x66","\xc2","\x2c","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Spritesheet_obj >;
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
