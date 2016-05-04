#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_spritesheet_AnimatedSprite
#include <spritesheet/AnimatedSprite.h>
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

Void AnimatedSprite_obj::__construct(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("spritesheet.AnimatedSprite","new",0x54560b8e,"spritesheet.AnimatedSprite.new","spritesheet/AnimatedSprite.hx",12,0xb6ee0e81)
HX_STACK_THIS(this)
HX_STACK_ARG(sheet,"sheet")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(26)
	this->unitScale = (int)1;
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(32)
	this->smoothing = smoothing;
	HX_STACK_LINE(33)
	this->spritesheet = sheet;
	HX_STACK_LINE(35)
	this->behaviorQueue = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	::openfl::display::Bitmap tmp = ::openfl::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->bitmap = tmp;
	HX_STACK_LINE(37)
	::openfl::display::Bitmap tmp1 = this->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->addChild(tmp1);
}
;
	return null();
}

//AnimatedSprite_obj::~AnimatedSprite_obj() { }

Dynamic AnimatedSprite_obj::__CreateEmpty() { return  new AnimatedSprite_obj; }
hx::ObjectPtr< AnimatedSprite_obj > AnimatedSprite_obj::__new(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< AnimatedSprite_obj > _result_ = new AnimatedSprite_obj();
	_result_->__construct(sheet,__o_smoothing);
	return _result_;}

Dynamic AnimatedSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimatedSprite_obj > _result_ = new AnimatedSprite_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic AnimatedSprite_obj::getFrameData( int index){
	HX_STACK_FRAME("spritesheet.AnimatedSprite","getFrameData",0x11faa093,"spritesheet.AnimatedSprite.getFrameData","spritesheet/AnimatedSprite.hx",42,0xb6ee0e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(44)
	::spritesheet::data::BehaviorData tmp = this->currentBehavior;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	if ((tmp1)){
		HX_STACK_LINE(44)
		::spritesheet::data::BehaviorData tmp3 = this->currentBehavior;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		::spritesheet::data::BehaviorData tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		int tmp5 = tmp4->frameData->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		tmp2 = (tmp6 > tmp7);
	}
	else{
		HX_STACK_LINE(44)
		tmp2 = false;
	}
	HX_STACK_LINE(44)
	if ((tmp2)){
		HX_STACK_LINE(46)
		::spritesheet::data::BehaviorData tmp3 = this->currentBehavior;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		Dynamic tmp4 = tmp3->frameData->__GetItem(index);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		return tmp4;
	}
	else{
		HX_STACK_LINE(50)
		return null();
	}
	HX_STACK_LINE(44)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,getFrameData,return )

Void AnimatedSprite_obj::queueBehavior( Dynamic behavior){
{
		HX_STACK_FRAME("spritesheet.AnimatedSprite","queueBehavior",0x42f193f1,"spritesheet.AnimatedSprite.queueBehavior","spritesheet/AnimatedSprite.hx",57,0xb6ee0e81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(behavior,"behavior")
		HX_STACK_LINE(59)
		Dynamic tmp = behavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		::spritesheet::data::BehaviorData tmp1 = this->resolveBehavior(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		::spritesheet::data::BehaviorData behaviorData = tmp1;		HX_STACK_VAR(behaviorData,"behaviorData");
		HX_STACK_LINE(61)
		::spritesheet::data::BehaviorData tmp2 = this->currentBehavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		if ((tmp3)){
			HX_STACK_LINE(63)
			::spritesheet::data::BehaviorData tmp4 = behaviorData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			this->updateBehavior(tmp4,null());
		}
		else{
			HX_STACK_LINE(67)
			::spritesheet::data::BehaviorData tmp4 = behaviorData;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			this->behaviorQueue->push(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,queueBehavior,(void))

::spritesheet::data::BehaviorData AnimatedSprite_obj::resolveBehavior( Dynamic behavior){
	HX_STACK_FRAME("spritesheet.AnimatedSprite","resolveBehavior",0x501873cc,"spritesheet.AnimatedSprite.resolveBehavior","spritesheet/AnimatedSprite.hx",74,0xb6ee0e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(behavior,"behavior")
	HX_STACK_LINE(76)
	Dynamic tmp = behavior;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::spritesheet::data::BehaviorData >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	if ((tmp1)){
		HX_STACK_LINE(78)
		::spritesheet::data::BehaviorData tmp2 = ((::spritesheet::data::BehaviorData)(behavior));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		return tmp2;
	}
	else{
		HX_STACK_LINE(80)
		Dynamic tmp2 = behavior;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		if ((tmp3)){
			HX_STACK_LINE(82)
			::spritesheet::Spritesheet tmp4 = this->spritesheet;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			if ((tmp5)){
				HX_STACK_LINE(84)
				::spritesheet::Spritesheet tmp6 = this->spritesheet;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				::String tmp7 = ((::String)(behavior));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				::spritesheet::data::BehaviorData tmp8 = tmp6->behaviors->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				::spritesheet::data::BehaviorData tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(90)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,resolveBehavior,return )

Void AnimatedSprite_obj::showBehavior( Dynamic behavior,hx::Null< bool >  __o_restart){
bool restart = __o_restart.Default(true);
	HX_STACK_FRAME("spritesheet.AnimatedSprite","showBehavior",0x08dfd5c1,"spritesheet.AnimatedSprite.showBehavior","spritesheet/AnimatedSprite.hx",95,0xb6ee0e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(behavior,"behavior")
	HX_STACK_ARG(restart,"restart")
{
		HX_STACK_LINE(97)
		this->behaviorQueue = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(98)
		Dynamic tmp = behavior;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::spritesheet::data::BehaviorData tmp1 = this->resolveBehavior(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		bool tmp2 = restart;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		this->updateBehavior(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimatedSprite_obj,showBehavior,(void))

Void AnimatedSprite_obj::showBehaviors( cpp::ArrayBase behaviors){
{
		HX_STACK_FRAME("spritesheet.AnimatedSprite","showBehaviors",0xbafb3392,"spritesheet.AnimatedSprite.showBehaviors","spritesheet/AnimatedSprite.hx",103,0xb6ee0e81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(behaviors,"behaviors")
		HX_STACK_LINE(105)
		this->behaviorQueue = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			while((true)){
				HX_STACK_LINE(107)
				bool tmp = (_g < behaviors->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(107)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(107)
				if ((tmp1)){
					HX_STACK_LINE(107)
					break;
				}
				HX_STACK_LINE(107)
				Dynamic tmp2 = behaviors->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(107)
				Dynamic behavior = tmp2;		HX_STACK_VAR(behavior,"behavior");
				HX_STACK_LINE(107)
				++(_g);
				HX_STACK_LINE(109)
				Dynamic tmp3 = behavior;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(109)
				::spritesheet::data::BehaviorData tmp4 = this->resolveBehavior(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(109)
				this->behaviorQueue->push(tmp4);
			}
		}
		HX_STACK_LINE(113)
		int tmp = this->behaviorQueue->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(115)
			::spritesheet::data::BehaviorData tmp2 = this->behaviorQueue->shift().StaticCast< ::spritesheet::data::BehaviorData >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			this->updateBehavior(tmp2,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,showBehaviors,(void))

Void AnimatedSprite_obj::update( int deltaTime){
{
		HX_STACK_FRAME("spritesheet.AnimatedSprite","update",0x3e41fb9b,"spritesheet.AnimatedSprite.update","spritesheet/AnimatedSprite.hx",122,0xb6ee0e81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(123)
		int tmp = this->unitScale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		this->set_scaleX(tmp);
		HX_STACK_LINE(124)
		bool tmp1 = this->behaviorComplete;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp2)){
			HX_STACK_LINE(126)
			hx::AddEq(this->timeElapsed,deltaTime);
			HX_STACK_LINE(128)
			int tmp3 = this->timeElapsed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			int tmp4 = this->loopTime;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			Float ratio = tmp5;		HX_STACK_VAR(ratio,"ratio");
			HX_STACK_LINE(130)
			bool tmp6 = (ratio >= (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(130)
			if ((tmp6)){
				HX_STACK_LINE(132)
				::spritesheet::data::BehaviorData tmp7 = this->currentBehavior;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(132)
				bool tmp8 = tmp7->loop;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(132)
				if ((tmp8)){
					HX_STACK_LINE(134)
					Float tmp9 = ratio;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(134)
					int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(134)
					hx::SubEq(ratio,tmp10);
				}
				else{
					HX_STACK_LINE(138)
					this->behaviorComplete = true;
					HX_STACK_LINE(139)
					ratio = (int)1;
				}
			}
			HX_STACK_LINE(145)
			Float tmp7 = ratio;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(145)
			::spritesheet::data::BehaviorData tmp8 = this->currentBehavior;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(145)
			int tmp9 = tmp8->frames->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(145)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(145)
			Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(145)
			int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(145)
			this->currentFrameIndex = tmp12;
			HX_STACK_LINE(146)
			::spritesheet::Spritesheet tmp13 = this->spritesheet;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(146)
			::spritesheet::data::BehaviorData tmp14 = this->currentBehavior;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(146)
			int tmp15 = this->currentFrameIndex;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(146)
			int tmp16 = tmp14->frames->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(146)
			::spritesheet::data::SpritesheetFrame tmp17 = tmp13->getFrame(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(146)
			::spritesheet::data::SpritesheetFrame frame = tmp17;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(147)
			::openfl::display::Bitmap tmp18 = this->bitmap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(147)
			tmp18->bitmapData = frame->bitmapData;
			HX_STACK_LINE(148)
			bool tmp19 = this->smoothing;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(148)
			::openfl::display::Bitmap tmp20 = this->bitmap;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(148)
			tmp20->smoothing = tmp19;
			HX_STACK_LINE(149)
			::openfl::display::Bitmap tmp21 = this->bitmap;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(149)
			int tmp22 = frame->offsetX;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(149)
			::spritesheet::data::BehaviorData tmp23 = this->currentBehavior;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(149)
			Float tmp24 = tmp23->originX;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(149)
			Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(149)
			tmp21->set_x(tmp25);
			HX_STACK_LINE(150)
			::openfl::display::Bitmap tmp26 = this->bitmap;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(150)
			int tmp27 = frame->offsetY;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(150)
			::spritesheet::data::BehaviorData tmp28 = this->currentBehavior;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(150)
			Float tmp29 = tmp28->originY;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(150)
			Float tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(150)
			tmp26->set_y(tmp30);
			HX_STACK_LINE(151)
			bool tmp31 = this->behaviorComplete;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(151)
			if ((tmp31)){
				HX_STACK_LINE(153)
				int tmp32 = this->behaviorQueue->length;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(153)
				bool tmp33 = (tmp32 > (int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(153)
				if ((tmp33)){
					HX_STACK_LINE(154)
					::spritesheet::data::BehaviorData tmp34 = this->behaviorQueue->shift().StaticCast< ::spritesheet::data::BehaviorData >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(154)
					this->updateBehavior(tmp34,null());
				}
				else{
					HX_STACK_LINE(156)
					bool tmp34 = this->hasEventListener(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(156)
					if ((tmp34)){
						HX_STACK_LINE(158)
						::openfl::events::Event tmp35 = ::openfl::events::Event_obj::__new(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),null(),null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(158)
						this->dispatchEvent(tmp35);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,update,(void))

Void AnimatedSprite_obj::updateBehavior( ::spritesheet::data::BehaviorData behavior,hx::Null< bool >  __o_restart){
bool restart = __o_restart.Default(true);
	HX_STACK_FRAME("spritesheet.AnimatedSprite","updateBehavior",0x35a3db4d,"spritesheet.AnimatedSprite.updateBehavior","spritesheet/AnimatedSprite.hx",168,0xb6ee0e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(behavior,"behavior")
	HX_STACK_ARG(restart,"restart")
{
		HX_STACK_LINE(170)
		bool tmp = (behavior != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		if ((tmp)){
			HX_STACK_LINE(172)
			bool tmp1 = restart;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(172)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			if ((tmp2)){
				HX_STACK_LINE(172)
				::spritesheet::data::BehaviorData tmp4 = behavior;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				::spritesheet::data::BehaviorData tmp5 = this->currentBehavior;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(172)
				::spritesheet::data::BehaviorData tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(172)
				tmp3 = (tmp4 != tmp6);
			}
			else{
				HX_STACK_LINE(172)
				tmp3 = true;
			}
			HX_STACK_LINE(172)
			if ((tmp3)){
				HX_STACK_LINE(174)
				this->currentBehavior = behavior;
				HX_STACK_LINE(175)
				this->timeElapsed = (int)0;
				HX_STACK_LINE(176)
				this->behaviorComplete = false;
				HX_STACK_LINE(178)
				int tmp4 = behavior->frames->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(178)
				int tmp5 = behavior->frameRate;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(178)
				Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(178)
				Float tmp7 = (tmp6 * (int)1000);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(178)
				this->loopTime = tmp8;
				HX_STACK_LINE(180)
				::openfl::display::Bitmap tmp9 = this->bitmap;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(180)
				::openfl::display::BitmapData tmp10 = tmp9->bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(180)
				bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(180)
				if ((tmp11)){
					HX_STACK_LINE(182)
					this->update((int)0);
				}
			}
		}
		else{
			HX_STACK_LINE(190)
			::openfl::display::Bitmap tmp1 = this->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(190)
			tmp1->bitmapData = null();
			HX_STACK_LINE(191)
			this->currentBehavior = null();
			HX_STACK_LINE(192)
			this->currentFrameIndex = (int)-1;
			HX_STACK_LINE(193)
			this->behaviorComplete = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimatedSprite_obj,updateBehavior,(void))


AnimatedSprite_obj::AnimatedSprite_obj()
{
}

void AnimatedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatedSprite);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(currentBehavior,"currentBehavior");
	HX_MARK_MEMBER_NAME(currentFrameIndex,"currentFrameIndex");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(spritesheet,"spritesheet");
	HX_MARK_MEMBER_NAME(behaviorComplete,"behaviorComplete");
	HX_MARK_MEMBER_NAME(behaviorQueue,"behaviorQueue");
	HX_MARK_MEMBER_NAME(behavior,"behavior");
	HX_MARK_MEMBER_NAME(loopTime,"loopTime");
	HX_MARK_MEMBER_NAME(timeElapsed,"timeElapsed");
	HX_MARK_MEMBER_NAME(unitScale,"unitScale");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimatedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(currentBehavior,"currentBehavior");
	HX_VISIT_MEMBER_NAME(currentFrameIndex,"currentFrameIndex");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(spritesheet,"spritesheet");
	HX_VISIT_MEMBER_NAME(behaviorComplete,"behaviorComplete");
	HX_VISIT_MEMBER_NAME(behaviorQueue,"behaviorQueue");
	HX_VISIT_MEMBER_NAME(behavior,"behavior");
	HX_VISIT_MEMBER_NAME(loopTime,"loopTime");
	HX_VISIT_MEMBER_NAME(timeElapsed,"timeElapsed");
	HX_VISIT_MEMBER_NAME(unitScale,"unitScale");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AnimatedSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"behavior") ) { return behavior; }
		if (HX_FIELD_EQ(inName,"loopTime") ) { return loopTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"unitScale") ) { return unitScale; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { return spritesheet; }
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { return timeElapsed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFrameData") ) { return getFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"showBehavior") ) { return showBehavior_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"behaviorQueue") ) { return behaviorQueue; }
		if (HX_FIELD_EQ(inName,"queueBehavior") ) { return queueBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"showBehaviors") ) { return showBehaviors_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateBehavior") ) { return updateBehavior_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentBehavior") ) { return currentBehavior; }
		if (HX_FIELD_EQ(inName,"resolveBehavior") ) { return resolveBehavior_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"behaviorComplete") ) { return behaviorComplete; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameIndex") ) { return currentFrameIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimatedSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"behavior") ) { behavior=inValue.Cast< ::spritesheet::data::BehaviorData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loopTime") ) { loopTime=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unitScale") ) { unitScale=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { spritesheet=inValue.Cast< ::spritesheet::Spritesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { timeElapsed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"behaviorQueue") ) { behaviorQueue=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentBehavior") ) { currentBehavior=inValue.Cast< ::spritesheet::data::BehaviorData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"behaviorComplete") ) { behaviorComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameIndex") ) { currentFrameIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimatedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("currentBehavior","\xeb","\x49","\xe4","\xde"));
	outFields->push(HX_HCSTRING("currentFrameIndex","\x3e","\x51","\x70","\x78"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("spritesheet","\x7a","\x54","\x95","\x1f"));
	outFields->push(HX_HCSTRING("behaviorComplete","\x6b","\x2f","\xca","\x5e"));
	outFields->push(HX_HCSTRING("behaviorQueue","\x9f","\x1b","\x56","\x19"));
	outFields->push(HX_HCSTRING("behavior","\x92","\x90","\x92","\x0a"));
	outFields->push(HX_HCSTRING("loopTime","\x91","\xa0","\x6a","\x3f"));
	outFields->push(HX_HCSTRING("timeElapsed","\xaf","\x3f","\x16","\x2d"));
	outFields->push(HX_HCSTRING("unitScale","\x66","\xd5","\xb1","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(AnimatedSprite_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsObject /*::spritesheet::data::BehaviorData*/ ,(int)offsetof(AnimatedSprite_obj,currentBehavior),HX_HCSTRING("currentBehavior","\xeb","\x49","\xe4","\xde")},
	{hx::fsInt,(int)offsetof(AnimatedSprite_obj,currentFrameIndex),HX_HCSTRING("currentFrameIndex","\x3e","\x51","\x70","\x78")},
	{hx::fsBool,(int)offsetof(AnimatedSprite_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsObject /*::spritesheet::Spritesheet*/ ,(int)offsetof(AnimatedSprite_obj,spritesheet),HX_HCSTRING("spritesheet","\x7a","\x54","\x95","\x1f")},
	{hx::fsBool,(int)offsetof(AnimatedSprite_obj,behaviorComplete),HX_HCSTRING("behaviorComplete","\x6b","\x2f","\xca","\x5e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AnimatedSprite_obj,behaviorQueue),HX_HCSTRING("behaviorQueue","\x9f","\x1b","\x56","\x19")},
	{hx::fsObject /*::spritesheet::data::BehaviorData*/ ,(int)offsetof(AnimatedSprite_obj,behavior),HX_HCSTRING("behavior","\x92","\x90","\x92","\x0a")},
	{hx::fsInt,(int)offsetof(AnimatedSprite_obj,loopTime),HX_HCSTRING("loopTime","\x91","\xa0","\x6a","\x3f")},
	{hx::fsInt,(int)offsetof(AnimatedSprite_obj,timeElapsed),HX_HCSTRING("timeElapsed","\xaf","\x3f","\x16","\x2d")},
	{hx::fsInt,(int)offsetof(AnimatedSprite_obj,unitScale),HX_HCSTRING("unitScale","\x66","\xd5","\xb1","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("currentBehavior","\xeb","\x49","\xe4","\xde"),
	HX_HCSTRING("currentFrameIndex","\x3e","\x51","\x70","\x78"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("spritesheet","\x7a","\x54","\x95","\x1f"),
	HX_HCSTRING("behaviorComplete","\x6b","\x2f","\xca","\x5e"),
	HX_HCSTRING("behaviorQueue","\x9f","\x1b","\x56","\x19"),
	HX_HCSTRING("behavior","\x92","\x90","\x92","\x0a"),
	HX_HCSTRING("loopTime","\x91","\xa0","\x6a","\x3f"),
	HX_HCSTRING("timeElapsed","\xaf","\x3f","\x16","\x2d"),
	HX_HCSTRING("unitScale","\x66","\xd5","\xb1","\x77"),
	HX_HCSTRING("getFrameData","\x81","\xb1","\x3a","\x3f"),
	HX_HCSTRING("queueBehavior","\x43","\x53","\xc0","\xad"),
	HX_HCSTRING("resolveBehavior","\x9e","\x2b","\x93","\x1b"),
	HX_HCSTRING("showBehavior","\xaf","\xe6","\x1f","\x36"),
	HX_HCSTRING("showBehaviors","\xe4","\xf2","\xc9","\x25"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateBehavior","\xbb","\x83","\xbc","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimatedSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimatedSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimatedSprite_obj::__mClass;

void AnimatedSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("spritesheet.AnimatedSprite","\x9c","\xec","\xb1","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimatedSprite_obj >;
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
