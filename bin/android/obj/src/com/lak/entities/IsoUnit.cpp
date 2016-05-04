#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_lak_IsoWorld
#include <com/lak/IsoWorld.h>
#endif
#ifndef INCLUDED_com_lak_entities_IsoObject
#include <com/lak/entities/IsoObject.h>
#endif
#ifndef INCLUDED_com_lak_entities_IsoUnit
#include <com/lak/entities/IsoUnit.h>
#endif
#ifndef INCLUDED_com_lak_entities_ai_Astar
#include <com/lak/entities/ai/Astar.h>
#endif
#ifndef INCLUDED_com_lak_manager_SpritesheetManager
#include <com/lak/manager/SpritesheetManager.h>
#endif
#ifndef INCLUDED_com_lak_utils_GameUtils
#include <com/lak/utils/GameUtils.h>
#endif
#ifndef INCLUDED_com_lak_utils_IsoUtils
#include <com/lak/utils/IsoUtils.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
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
namespace com{
namespace lak{
namespace entities{

Void IsoUnit_obj::__construct()
{
HX_STACK_FRAME("com.lak.entities.IsoUnit","new",0xd782ecf3,"com.lak.entities.IsoUnit.new","com/lak/entities/IsoUnit.hx",18,0x478d21dc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->ymovement = ((Float)0);
	HX_STACK_LINE(24)
	this->xmovement = ((Float)0);
	HX_STACK_LINE(23)
	this->lastNode = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(22)
	this->pEnd = ::openfl::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(21)
	this->pCurr = ::openfl::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(32)
	super::__construct();
}
;
	return null();
}

//IsoUnit_obj::~IsoUnit_obj() { }

Dynamic IsoUnit_obj::__CreateEmpty() { return  new IsoUnit_obj; }
hx::ObjectPtr< IsoUnit_obj > IsoUnit_obj::__new()
{  hx::ObjectPtr< IsoUnit_obj > _result_ = new IsoUnit_obj();
	_result_->__construct();
	return _result_;}

Dynamic IsoUnit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IsoUnit_obj > _result_ = new IsoUnit_obj();
	_result_->__construct();
	return _result_;}

Void IsoUnit_obj::initilizeUnit( ::String assetName,::String __o_civ){
::String civ = __o_civ.Default(HX_HCSTRING("mali","\xd1","\x3a","\x56","\x48"));
	HX_STACK_FRAME("com.lak.entities.IsoUnit","initilizeUnit",0x50ae13b8,"com.lak.entities.IsoUnit.initilizeUnit","com/lak/entities/IsoUnit.hx",39,0x478d21dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assetName,"assetName")
	HX_STACK_ARG(civ,"civ")
{
		HX_STACK_LINE(40)
		this->type = HX_HCSTRING("unit","\x84","\xca","\xa9","\x4d");
		HX_STACK_LINE(41)
		this->currentAction = HX_HCSTRING("attack","\xc8","\xfb","\x0f","\xe0");
		HX_STACK_LINE(42)
		this->phase = HX_HCSTRING("DL","\x88","\x3b","\x00","\x00");
		HX_STACK_LINE(44)
		::Main tmp = ::Main_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		::String tmp1 = civ;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		::String tmp2 = assetName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		::spritesheet::Spritesheet tmp3 = tmp->sprSheetManager->getSpritesheet(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		::spritesheet::AnimatedSprite tmp4 = ::spritesheet::AnimatedSprite_obj::__new(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		this->spriteSheet = tmp4;
		HX_STACK_LINE(45)
		::spritesheet::AnimatedSprite tmp5 = this->spriteSheet;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		::String tmp6 = this->currentAction;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::String tmp7 = (tmp6 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		::String tmp8 = this->phase;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		tmp5->showBehavior(tmp9,null());
		HX_STACK_LINE(46)
		::spritesheet::AnimatedSprite tmp10 = this->spriteSheet;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		::spritesheet::AnimatedSprite tmp11 = this->spriteSheet;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		Float tmp12 = tmp11->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		::spritesheet::AnimatedSprite tmp13 = this->spriteSheet;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(46)
		Float tmp14 = tmp13->bitmap->get_x();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(46)
		Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(46)
		int tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(46)
		Float tmp18 = (tmp17 * ((Float).7));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(46)
		tmp10->set_x(tmp18);
		HX_STACK_LINE(47)
		::spritesheet::AnimatedSprite tmp19 = this->spriteSheet;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(47)
		::spritesheet::AnimatedSprite tmp20 = this->spriteSheet;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(47)
		Float tmp21 = tmp20->get_height();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(47)
		::spritesheet::AnimatedSprite tmp22 = this->spriteSheet;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(47)
		Float tmp23 = tmp22->bitmap->get_y();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(47)
		Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(47)
		int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(47)
		int tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(47)
		Float tmp27 = (tmp26 * ((Float).85));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(47)
		tmp19->set_y(tmp27);
		HX_STACK_LINE(49)
		::spritesheet::AnimatedSprite tmp28 = this->spriteSheet;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(49)
		this->addChild(tmp28);
		HX_STACK_LINE(50)
		this->centerPoint();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IsoUnit_obj,initilizeUnit,(void))

Void IsoUnit_obj::goTo( ::openfl::geom::Point targetpt){
{
		HX_STACK_FRAME("com.lak.entities.IsoUnit","goTo",0xb67361d0,"com.lak.entities.IsoUnit.goTo","com/lak/entities/IsoUnit.hx",57,0x478d21dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(targetpt,"targetpt")
		HX_STACK_LINE(58)
		Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		Float tmp1 = this->get_y();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::openfl::geom::Point tmp3 = ::com::lak::utils::IsoUtils_obj::getTileAt(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::com::lak::IsoWorld tmp4 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		int tmp5 = tmp4->tileW;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		::com::lak::IsoWorld tmp6 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		int tmp7 = tmp6->tileH;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		::openfl::geom::Point tmp8 = ::com::lak::utils::IsoUtils_obj::mapTilePosition(tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		this->pCurr = tmp8;
		HX_STACK_LINE(59)
		Float tmp9 = this->get_x();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		::com::lak::IsoWorld tmp10 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		int tmp11 = tmp10->tileW;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(59)
		Float tmp12 = ::com::lak::utils::GameUtils_obj::toGridCoord(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		this->set_x(tmp12);
		HX_STACK_LINE(60)
		Float tmp13 = this->get_y();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(60)
		::com::lak::IsoWorld tmp14 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(60)
		int tmp15 = tmp14->tileH;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(60)
		Float tmp16 = ::com::lak::utils::GameUtils_obj::toGridCoord(tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(60)
		this->set_y(tmp16);
		HX_STACK_LINE(61)
		this->pEnd = targetpt;
		HX_STACK_LINE(62)
		Dynamic tmp17 = this->onStateChange_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(62)
		this->addEventListener(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),tmp17,null(),null(),null());
		HX_STACK_LINE(63)
		::com::lak::entities::ai::Astar_obj::findPath(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoUnit_obj,goTo,(void))

Void IsoUnit_obj::onStateChange( ::openfl::events::Event e){
{
		HX_STACK_FRAME("com.lak.entities.IsoUnit","onStateChange",0x3047add5,"com.lak.entities.IsoUnit.onStateChange","com/lak/entities/IsoUnit.hx",68,0x478d21dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(69)
		int tmp = this->nodeTab->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(70)
				int tmp2 = this->nodeTab->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				int _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(70)
				while((true)){
					HX_STACK_LINE(70)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(70)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(70)
					if ((tmp4)){
						HX_STACK_LINE(70)
						break;
					}
					HX_STACK_LINE(70)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(70)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(71)
					int cost = (int)0;		HX_STACK_VAR(cost,"cost");
					HX_STACK_LINE(74)
					Dynamic tmp6 = this->nodeTab->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					tmp6->__FieldRef(HX_HCSTRING("g","\x67","\x00","\x00","\x00")) = (int)0;
					HX_STACK_LINE(75)
					Dynamic tmp7 = this->nodeTab->__GetItem(i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(75)
					::openfl::geom::Point tmp8 = this->pEnd;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(75)
					int tmp9 = ::com::lak::entities::ai::Astar_obj::heuristic(tmp7->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic ),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(75)
					Dynamic tmp10 = this->nodeTab->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(75)
					tmp10->__FieldRef(HX_HCSTRING("h","\x68","\x00","\x00","\x00")) = tmp9;
					HX_STACK_LINE(76)
					Dynamic tmp11 = this->nodeTab->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(76)
					Dynamic tmp12 = this->nodeTab->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(76)
					Dynamic tmp13 = (tmp11->__Field(HX_HCSTRING("g","\x67","\x00","\x00","\x00"), hx::paccDynamic ) + tmp12->__Field(HX_HCSTRING("h","\x68","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(76)
					Dynamic tmp14 = this->nodeTab->__GetItem(i);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(76)
					tmp14->__FieldRef(HX_HCSTRING("f","\x66","\x00","\x00","\x00")) = tmp13;
				}
			}
			HX_STACK_LINE(78)
			Dynamic tmp2 = ::com::lak::utils::GameUtils_obj::sortByF_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::haxe::ds::ArraySort_obj::sort(this->nodeTab,tmp2);
			HX_STACK_LINE(79)
			this->hasPath = true;
			HX_STACK_LINE(80)
			Dynamic tmp3 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			this->lookAtDir(tmp3->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ));
			HX_STACK_LINE(81)
			this->currentAction = HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e");
		}
		else{
			HX_STACK_LINE(84)
			Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("IsoUnit.hx","\x15","\xe0","\x52","\xf0"),84,HX_HCSTRING("com.lak.entities.IsoUnit","\x81","\xf7","\xce","\x79"),HX_HCSTRING("onStateChange","\x82","\xfb","\xe5","\x94"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			::haxe::Log_obj::trace(HX_HCSTRING(" NO NODE IN _unit.nodeTab ","\xd4","\x52","\x63","\x78"),tmp2);
			HX_STACK_LINE(85)
			this->hasPath = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoUnit_obj,onStateChange,(void))

Void IsoUnit_obj::update( int delta){
{
		HX_STACK_FRAME("com.lak.entities.IsoUnit","update",0xfa5a4756,"com.lak.entities.IsoUnit.update","com/lak/entities/IsoUnit.hx",91,0x478d21dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(92)
		::spritesheet::AnimatedSprite tmp = this->spriteSheet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::String tmp1 = tmp->currentBehavior->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		::String tmp2 = this->currentAction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		::String tmp3 = (tmp2 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::String tmp4 = this->phase;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		bool tmp6 = (tmp1 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		if ((tmp6)){
			HX_STACK_LINE(92)
			::spritesheet::AnimatedSprite tmp7 = this->spriteSheet;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(92)
			::String tmp8 = this->currentAction;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			::String tmp9 = (tmp8 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(92)
			::String tmp10 = this->phase;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(92)
			tmp7->showBehavior(tmp11,null());
		}
		HX_STACK_LINE(93)
		bool tmp7 = this->hasPath;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		if ((tmp7)){
			HX_STACK_LINE(93)
			this->moveEnterFrame();
		}
		HX_STACK_LINE(94)
		::spritesheet::AnimatedSprite tmp8 = this->spriteSheet;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		int tmp9 = delta;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		tmp8->update(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoUnit_obj,update,(void))

Void IsoUnit_obj::moveEnterFrame( ){
{
		HX_STACK_FRAME("com.lak.entities.IsoUnit","moveEnterFrame",0x9b5b20b3,"com.lak.entities.IsoUnit.moveEnterFrame","com/lak/entities/IsoUnit.hx",97,0x478d21dc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		Float distEnd;		HX_STACK_VAR(distEnd,"distEnd");
		HX_STACK_LINE(99)
		::openfl::geom::Point tmp = this->pEnd;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::openfl::geom::Point tmp1 = this->pCurr;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		int tmp2 = ::com::lak::utils::GameUtils_obj::distanceBetweenPt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		distEnd = tmp2;
		HX_STACK_LINE(101)
		Float tmp3 = this->xmovement;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		::com::lak::IsoWorld tmp4 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		int tmp5 = tmp4->tileW;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		if ((tmp6)){
			HX_STACK_LINE(101)
			Float tmp8 = this->ymovement;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			::com::lak::IsoWorld tmp10 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			::com::lak::IsoWorld tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(101)
			int tmp12 = tmp11->tileH;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(101)
			tmp7 = (tmp9 < tmp12);
		}
		else{
			HX_STACK_LINE(101)
			tmp7 = false;
		}
		HX_STACK_LINE(101)
		if ((tmp7)){
			HX_STACK_LINE(102)
			Float tmp8 = this->get_x();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(102)
			Float tmp9 = this->get_y();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(102)
			::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(102)
			::openfl::geom::Point tmp11 = ::com::lak::utils::IsoUtils_obj::getTileAt(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			::com::lak::IsoWorld tmp12 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			int tmp13 = tmp12->tileW;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(102)
			::com::lak::IsoWorld tmp14 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(102)
			int tmp15 = tmp14->tileH;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(102)
			::openfl::geom::Point tmp16 = ::com::lak::utils::IsoUtils_obj::mapTilePosition(tmp11,tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(102)
			this->pCurr = tmp16;
			HX_STACK_LINE(103)
			Dynamic tmp17 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(103)
			this->moveAtDir(tmp17->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ));
		}
		else{
			HX_STACK_LINE(105)
			this->xmovement = (int)0;
			HX_STACK_LINE(106)
			this->ymovement = (int)0;
			HX_STACK_LINE(107)
			bool tmp8 = (distEnd == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			if ((tmp8)){
				HX_STACK_LINE(107)
				this->hasPath = false;
				HX_STACK_LINE(107)
				this->currentAction = HX_HCSTRING("stay","\xd9","\xe3","\x5b","\x4c");
			}
			else{
				HX_STACK_LINE(108)
				::com::lak::entities::ai::Astar_obj::findPath(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IsoUnit_obj,moveEnterFrame,(void))

Void IsoUnit_obj::moveAtDir( ::String lookdir){
{
		HX_STACK_FRAME("com.lak.entities.IsoUnit","moveAtDir",0x02c5161c,"com.lak.entities.IsoUnit.moveAtDir","com/lak/entities/IsoUnit.hx",111,0x478d21dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lookdir,"lookdir")
		HX_STACK_LINE(113)
		Dynamic tmp = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = (tmp->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ) == HX_HCSTRING("N","\x4e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(114)
				Float tmp2 = _g->get_y();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(114)
				Float tmp3 = this->speed;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(114)
				Float tmp4 = (tmp3 * ((Float).5));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(114)
				Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(114)
				_g->set_y(tmp5);
			}
			HX_STACK_LINE(115)
			Float tmp2 = this->speed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			Float tmp3 = (tmp2 * ((Float).5));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			hx::AddEq(this->ymovement,tmp3);
		}
		else{
			HX_STACK_LINE(116)
			Dynamic tmp2 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(116)
			bool tmp3 = (tmp2->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ) == HX_HCSTRING("NE","\x37","\x44","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(116)
			if ((tmp3)){
				HX_STACK_LINE(117)
				{
					HX_STACK_LINE(117)
					::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(117)
					Float tmp4 = _g->get_x();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(117)
					Float tmp5 = this->speed;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(117)
					Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(117)
					_g->set_x(tmp6);
				}
				HX_STACK_LINE(118)
				{
					HX_STACK_LINE(118)
					::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(118)
					Float tmp4 = _g->get_y();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(118)
					Float tmp5 = this->speed;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(118)
					Float tmp6 = (tmp5 * ((Float).5));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(118)
					Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(118)
					_g->set_y(tmp7);
				}
				HX_STACK_LINE(119)
				Float tmp4 = this->speed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(119)
				hx::AddEq(this->xmovement,tmp4);
				HX_STACK_LINE(120)
				Float tmp5 = this->speed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				Float tmp6 = (tmp5 * ((Float).5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(120)
				hx::AddEq(this->ymovement,tmp6);
			}
			else{
				HX_STACK_LINE(121)
				Dynamic tmp4 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(121)
				bool tmp5 = (tmp4->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ) == HX_HCSTRING("E","\x45","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				if ((tmp5)){
					HX_STACK_LINE(122)
					{
						HX_STACK_LINE(122)
						::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(122)
						Float tmp6 = _g->get_x();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(122)
						Float tmp7 = this->speed;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(122)
						Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(122)
						_g->set_x(tmp8);
					}
					HX_STACK_LINE(123)
					Float tmp6 = this->speed;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(123)
					hx::AddEq(this->xmovement,tmp6);
				}
				else{
					HX_STACK_LINE(124)
					Dynamic tmp6 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(124)
					bool tmp7 = (tmp6->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ) == HX_HCSTRING("SE","\x92","\x48","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(124)
					if ((tmp7)){
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(125)
							Float tmp8 = _g->get_x();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(125)
							Float tmp9 = this->speed;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(125)
							Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(125)
							_g->set_x(tmp10);
						}
						HX_STACK_LINE(126)
						{
							HX_STACK_LINE(126)
							::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(126)
							Float tmp8 = _g->get_y();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(126)
							Float tmp9 = this->speed;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(126)
							Float tmp10 = (tmp9 * ((Float).5));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(126)
							Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(126)
							_g->set_y(tmp11);
						}
						HX_STACK_LINE(127)
						Float tmp8 = this->speed;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(127)
						hx::AddEq(this->xmovement,tmp8);
						HX_STACK_LINE(128)
						Float tmp9 = this->speed;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(128)
						Float tmp10 = (tmp9 * ((Float).5));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(128)
						hx::AddEq(this->ymovement,tmp10);
					}
					else{
						HX_STACK_LINE(130)
						Dynamic tmp8 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(130)
						bool tmp9 = (tmp8->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ) == HX_HCSTRING("S","\x53","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(130)
						if ((tmp9)){
							HX_STACK_LINE(131)
							{
								HX_STACK_LINE(131)
								::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(131)
								Float tmp10 = _g->get_y();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(131)
								Float tmp11 = this->speed;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(131)
								Float tmp12 = (tmp11 * ((Float).5));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(131)
								Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(131)
								_g->set_y(tmp13);
							}
							HX_STACK_LINE(132)
							Float tmp10 = this->speed;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(132)
							Float tmp11 = (tmp10 * ((Float).5));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(132)
							hx::AddEq(this->ymovement,tmp11);
						}
						else{
							HX_STACK_LINE(133)
							Dynamic tmp10 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(133)
							bool tmp11 = (tmp10->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ) == HX_HCSTRING("SW","\xa4","\x48","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(133)
							if ((tmp11)){
								HX_STACK_LINE(134)
								{
									HX_STACK_LINE(134)
									::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(134)
									Float tmp12 = _g->get_x();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(134)
									Float tmp13 = this->speed;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(134)
									Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(134)
									_g->set_x(tmp14);
								}
								HX_STACK_LINE(135)
								{
									HX_STACK_LINE(135)
									::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(135)
									Float tmp12 = _g->get_y();		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(135)
									Float tmp13 = this->speed;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(135)
									Float tmp14 = (tmp13 * ((Float).5));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(135)
									Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(135)
									_g->set_y(tmp15);
								}
								HX_STACK_LINE(136)
								Float tmp12 = this->speed;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(136)
								hx::AddEq(this->xmovement,tmp12);
								HX_STACK_LINE(137)
								Float tmp13 = this->speed;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(137)
								hx::AddEq(this->ymovement,tmp13);
							}
							else{
								HX_STACK_LINE(138)
								Dynamic tmp12 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(138)
								bool tmp13 = (tmp12->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ) == HX_HCSTRING("W","\x57","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(138)
								if ((tmp13)){
									HX_STACK_LINE(139)
									{
										HX_STACK_LINE(139)
										::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(139)
										Float tmp14 = _g->get_x();		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(139)
										Float tmp15 = this->speed;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(139)
										Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(139)
										_g->set_x(tmp16);
									}
									HX_STACK_LINE(140)
									Float tmp14 = this->speed;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(140)
									hx::AddEq(this->xmovement,tmp14);
								}
								else{
									HX_STACK_LINE(141)
									Dynamic tmp14 = this->nodeTab->__GetItem((int)0);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(141)
									bool tmp15 = (tmp14->__Field(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"), hx::paccDynamic ) == HX_HCSTRING("NW","\x49","\x44","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(141)
									if ((tmp15)){
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(142)
											Float tmp16 = _g->get_x();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(142)
											Float tmp17 = this->speed;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(142)
											Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(142)
											_g->set_x(tmp18);
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											::com::lak::entities::IsoUnit _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(143)
											Float tmp16 = _g->get_y();		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(143)
											Float tmp17 = this->speed;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(143)
											Float tmp18 = (tmp17 * ((Float).5));		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(143)
											Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(143)
											_g->set_y(tmp19);
										}
										HX_STACK_LINE(144)
										Float tmp16 = this->speed;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(144)
										hx::AddEq(this->xmovement,tmp16);
										HX_STACK_LINE(145)
										Float tmp17 = this->speed;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(145)
										hx::AddEq(this->ymovement,tmp17);
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(148)
		::String tmp2 = lookdir;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		this->lookAtDir(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoUnit_obj,moveAtDir,(void))

Void IsoUnit_obj::lookAtDir( ::String lookdir){
{
		HX_STACK_FRAME("com.lak.entities.IsoUnit","lookAtDir",0x72e1980e,"com.lak.entities.IsoUnit.lookAtDir","com/lak/entities/IsoUnit.hx",150,0x478d21dc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lookdir,"lookdir")
		HX_STACK_LINE(151)
		bool tmp = (lookdir == HX_HCSTRING("N","\x4e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		if ((tmp)){
			HX_STACK_LINE(151)
			this->phase = HX_HCSTRING("U","\x55","\x00","\x00","\x00");
			HX_STACK_LINE(151)
			Float tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			this->set_scaleX(tmp1);
		}
		else{
			HX_STACK_LINE(152)
			bool tmp1 = (lookdir == HX_HCSTRING("NE","\x37","\x44","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			if ((tmp1)){
				HX_STACK_LINE(152)
				this->phase = HX_HCSTRING("UL","\x57","\x4a","\x00","\x00");
				HX_STACK_LINE(152)
				Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(152)
				Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(152)
				this->set_scaleX(tmp3);
			}
			else{
				HX_STACK_LINE(153)
				bool tmp2 = (lookdir == HX_HCSTRING("E","\x45","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(153)
				if ((tmp2)){
					HX_STACK_LINE(153)
					this->phase = HX_HCSTRING("L","\x4c","\x00","\x00","\x00");
					HX_STACK_LINE(153)
					Float tmp3 = this->scale;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(153)
					Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(153)
					this->set_scaleX(tmp4);
				}
				else{
					HX_STACK_LINE(154)
					bool tmp3 = (lookdir == HX_HCSTRING("SE","\x92","\x48","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(154)
					if ((tmp3)){
						HX_STACK_LINE(154)
						this->phase = HX_HCSTRING("DL","\x88","\x3b","\x00","\x00");
						HX_STACK_LINE(154)
						Float tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(154)
						Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(154)
						this->set_scaleX(tmp5);
					}
					else{
						HX_STACK_LINE(155)
						bool tmp4 = (lookdir == HX_HCSTRING("S","\x53","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(155)
						if ((tmp4)){
							HX_STACK_LINE(155)
							this->phase = HX_HCSTRING("D","\x44","\x00","\x00","\x00");
							HX_STACK_LINE(155)
							Float tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(155)
							this->set_scaleX(tmp5);
						}
						else{
							HX_STACK_LINE(156)
							bool tmp5 = (lookdir == HX_HCSTRING("SW","\xa4","\x48","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(156)
							if ((tmp5)){
								HX_STACK_LINE(156)
								this->phase = HX_HCSTRING("DL","\x88","\x3b","\x00","\x00");
								HX_STACK_LINE(156)
								Float tmp6 = this->scale;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(156)
								this->set_scaleX(tmp6);
							}
							else{
								HX_STACK_LINE(157)
								bool tmp6 = (lookdir == HX_HCSTRING("W","\x57","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(157)
								if ((tmp6)){
									HX_STACK_LINE(157)
									this->phase = HX_HCSTRING("L","\x4c","\x00","\x00","\x00");
									HX_STACK_LINE(157)
									Float tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(157)
									this->set_scaleX(tmp7);
								}
								else{
									HX_STACK_LINE(158)
									bool tmp7 = (lookdir == HX_HCSTRING("NW","\x49","\x44","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(158)
									if ((tmp7)){
										HX_STACK_LINE(158)
										this->phase = HX_HCSTRING("UL","\x57","\x4a","\x00","\x00");
										HX_STACK_LINE(158)
										Float tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(158)
										this->set_scaleX(tmp8);
									}
									else{
										HX_STACK_LINE(159)
										return null();
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(160)
		::spritesheet::AnimatedSprite tmp1 = this->spriteSheet;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		::String tmp2 = tmp1->currentBehavior->name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		::String tmp3 = this->currentAction;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(160)
		::String tmp4 = (tmp3 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(160)
		::String tmp5 = this->phase;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(160)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		bool tmp7 = (tmp2 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(160)
		if ((tmp7)){
			HX_STACK_LINE(160)
			::spritesheet::AnimatedSprite tmp8 = this->spriteSheet;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(160)
			::String tmp9 = this->currentAction;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			::String tmp10 = (tmp9 + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(160)
			::String tmp11 = this->phase;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(160)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(160)
			tmp8->showBehavior(tmp12,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoUnit_obj,lookAtDir,(void))


IsoUnit_obj::IsoUnit_obj()
{
}

void IsoUnit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IsoUnit);
	HX_MARK_MEMBER_NAME(nodeTab,"nodeTab");
	HX_MARK_MEMBER_NAME(pCurr,"pCurr");
	HX_MARK_MEMBER_NAME(pEnd,"pEnd");
	HX_MARK_MEMBER_NAME(lastNode,"lastNode");
	HX_MARK_MEMBER_NAME(xmovement,"xmovement");
	HX_MARK_MEMBER_NAME(ymovement,"ymovement");
	::com::lak::entities::IsoObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IsoUnit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nodeTab,"nodeTab");
	HX_VISIT_MEMBER_NAME(pCurr,"pCurr");
	HX_VISIT_MEMBER_NAME(pEnd,"pEnd");
	HX_VISIT_MEMBER_NAME(lastNode,"lastNode");
	HX_VISIT_MEMBER_NAME(xmovement,"xmovement");
	HX_VISIT_MEMBER_NAME(ymovement,"ymovement");
	::com::lak::entities::IsoObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic IsoUnit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pEnd") ) { return pEnd; }
		if (HX_FIELD_EQ(inName,"goTo") ) { return goTo_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pCurr") ) { return pCurr; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nodeTab") ) { return nodeTab; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastNode") ) { return lastNode; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"xmovement") ) { return xmovement; }
		if (HX_FIELD_EQ(inName,"ymovement") ) { return ymovement; }
		if (HX_FIELD_EQ(inName,"moveAtDir") ) { return moveAtDir_dyn(); }
		if (HX_FIELD_EQ(inName,"lookAtDir") ) { return lookAtDir_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initilizeUnit") ) { return initilizeUnit_dyn(); }
		if (HX_FIELD_EQ(inName,"onStateChange") ) { return onStateChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"moveEnterFrame") ) { return moveEnterFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IsoUnit_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pEnd") ) { pEnd=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pCurr") ) { pCurr=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nodeTab") ) { nodeTab=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastNode") ) { lastNode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"xmovement") ) { xmovement=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ymovement") ) { ymovement=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IsoUnit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nodeTab","\x73","\xb5","\xea","\x16"));
	outFields->push(HX_HCSTRING("pCurr","\x82","\x6f","\x83","\xa9"));
	outFields->push(HX_HCSTRING("pEnd","\x4b","\xa1","\x3c","\x4a"));
	outFields->push(HX_HCSTRING("lastNode","\x78","\x23","\x53","\xdc"));
	outFields->push(HX_HCSTRING("xmovement","\xa7","\xbd","\x60","\xe1"));
	outFields->push(HX_HCSTRING("ymovement","\xa8","\x26","\x52","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(IsoUnit_obj,nodeTab),HX_HCSTRING("nodeTab","\x73","\xb5","\xea","\x16")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(IsoUnit_obj,pCurr),HX_HCSTRING("pCurr","\x82","\x6f","\x83","\xa9")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(IsoUnit_obj,pEnd),HX_HCSTRING("pEnd","\x4b","\xa1","\x3c","\x4a")},
	{hx::fsString,(int)offsetof(IsoUnit_obj,lastNode),HX_HCSTRING("lastNode","\x78","\x23","\x53","\xdc")},
	{hx::fsFloat,(int)offsetof(IsoUnit_obj,xmovement),HX_HCSTRING("xmovement","\xa7","\xbd","\x60","\xe1")},
	{hx::fsFloat,(int)offsetof(IsoUnit_obj,ymovement),HX_HCSTRING("ymovement","\xa8","\x26","\x52","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nodeTab","\x73","\xb5","\xea","\x16"),
	HX_HCSTRING("pCurr","\x82","\x6f","\x83","\xa9"),
	HX_HCSTRING("pEnd","\x4b","\xa1","\x3c","\x4a"),
	HX_HCSTRING("lastNode","\x78","\x23","\x53","\xdc"),
	HX_HCSTRING("xmovement","\xa7","\xbd","\x60","\xe1"),
	HX_HCSTRING("ymovement","\xa8","\x26","\x52","\xb4"),
	HX_HCSTRING("initilizeUnit","\x65","\x61","\x4c","\xb5"),
	HX_HCSTRING("goTo","\xc3","\x7d","\x69","\x44"),
	HX_HCSTRING("onStateChange","\x82","\xfb","\xe5","\x94"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("moveEnterFrame","\x66","\xca","\x40","\x41"),
	HX_HCSTRING("moveAtDir","\x49","\xc9","\x85","\xe4"),
	HX_HCSTRING("lookAtDir","\x3b","\x4b","\xa2","\x54"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IsoUnit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IsoUnit_obj::__mClass,"__mClass");
};

#endif

hx::Class IsoUnit_obj::__mClass;

void IsoUnit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.entities.IsoUnit","\x81","\xf7","\xce","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IsoUnit_obj >;
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

} // end namespace com
} // end namespace lak
} // end namespace entities
