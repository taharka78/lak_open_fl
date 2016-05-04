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
#ifndef INCLUDED_com_lak_manager_SpritesheetManager
#include <com/lak/manager/SpritesheetManager.h>
#endif
#ifndef INCLUDED_com_lak_utils_IsoUtils
#include <com/lak/utils/IsoUtils.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",26,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->sprSheetManager = ::com::lak::manager::SpritesheetManager_obj::__new();
	HX_STACK_LINE(28)
	this->lastTime = (int)0;
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	::openfl::display::FPS tmp = ::openfl::display::FPS_obj::__new((int)0,(int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->addChild(tmp);
	HX_STACK_LINE(40)
	::Main_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(41)
	Dynamic tmp1 = this->onMainAdded_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	this->addEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp1,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::onMainAdded( ::openfl::events::Event e){
{
		HX_STACK_FRAME("Main","onMainAdded",0x57313913,"Main.onMainAdded","Main.hx",44,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(45)
		Dynamic tmp = this->onMainAdded_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		this->removeEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp,null());
		HX_STACK_LINE(47)
		::openfl::display::Stage tmp1 = this->stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		this->realWidth = tmp1->stageWidth;
		HX_STACK_LINE(48)
		::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		this->realHeight = tmp2->stageHeight;
		HX_STACK_LINE(49)
		::com::lak::IsoWorld tmp3 = ::com::lak::IsoWorld_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		this->world = tmp3;
		HX_STACK_LINE(50)
		::com::lak::IsoWorld tmp4 = this->world;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		this->addChild(tmp4);
		HX_STACK_LINE(52)
		::com::lak::entities::IsoUnit tmp5 = ::com::lak::entities::IsoUnit_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		this->unit = tmp5;
		HX_STACK_LINE(53)
		::com::lak::entities::IsoUnit tmp6 = this->unit;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		tmp6->initilizeUnit(HX_HCSTRING("general","\x28","\x6b","\x5b","\xb6"),null());
		HX_STACK_LINE(54)
		::com::lak::entities::IsoUnit tmp7 = this->unit;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		tmp7->currentAction = HX_HCSTRING("stay","\xd9","\xe3","\x5b","\x4c");
		HX_STACK_LINE(55)
		::com::lak::entities::IsoUnit tmp8 = this->unit;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(55)
		tmp8->set_x((int)480);
		HX_STACK_LINE(56)
		::com::lak::entities::IsoUnit tmp9 = this->unit;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(56)
		tmp9->set_y((int)288);
		HX_STACK_LINE(57)
		::com::lak::IsoWorld tmp10 = this->world;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		::com::lak::entities::IsoUnit tmp11 = this->unit;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		tmp10->addChildToWorld(tmp11);
		HX_STACK_LINE(59)
		Dynamic tmp12 = this->update_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		this->addEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp12,null(),null(),null());
		HX_STACK_LINE(61)
		::openfl::display::Stage tmp13 = this->stage;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		tmp13->scaleMode = ((Dynamic)((int)2));
		HX_STACK_LINE(62)
		::openfl::display::Stage tmp14 = this->stage;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(62)
		Dynamic tmp15 = this->onstageResized_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(62)
		tmp14->addEventListener(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),tmp15,null(),null(),null());
		HX_STACK_LINE(63)
		::openfl::display::Stage tmp16 = this->stage;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(63)
		Dynamic tmp17 = this->onStageClick_dyn();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(63)
		tmp16->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp17,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onMainAdded,(void))

Void Main_obj::onStageClick( ::openfl::events::MouseEvent me){
{
		HX_STACK_FRAME("Main","onStageClick",0x9acd17de,"Main.onStageClick","Main.hx",65,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(me,"me")
		HX_STACK_LINE(66)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),66,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("onStageClick","\xa9","\x72","\xf2","\x73"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		::haxe::Log_obj::trace(HX_HCSTRING(" ----------------------------------------- CLICK ----------------------------------------- ","\xbe","\xf4","\xcf","\x9b"),tmp);
		HX_STACK_LINE(67)
		Float tmp1 = this->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		Float tmp2 = this->get_mouseY();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::openfl::geom::Point tmp4 = ::com::lak::utils::IsoUtils_obj::getTileAt(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		::openfl::geom::Point pt = tmp4;		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(68)
		::com::lak::IsoWorld tmp5 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		Float tmp6 = pt->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		Float tmp8 = pt->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		Dynamic tmp10 = tmp5->tilesArray->__get(tmp7).StaticCast< cpp::ArrayBase >()->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		Dynamic n = tmp10;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(70)
		::com::lak::IsoWorld tmp11 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(70)
		Float tmp12 = pt->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(70)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(70)
		Float tmp14 = pt->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(70)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(70)
		Dynamic tmp16 = tmp11->tilesArray->__get(tmp13).StaticCast< cpp::ArrayBase >()->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(70)
		tmp16->__FieldRef(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")) = (int)99;
		HX_STACK_LINE(71)
		::com::lak::IsoWorld tmp17 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(71)
		Float tmp18 = pt->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(71)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(71)
		Float tmp20 = pt->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(71)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(71)
		Dynamic tmp22 = tmp17->tilesArray->__get(tmp19).StaticCast< cpp::ArrayBase >()->__GetItem(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(71)
		tmp22->__FieldRef(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7")) = HX_HCSTRING("o","\x6f","\x00","\x00","\x00");
		HX_STACK_LINE(75)
		::com::lak::entities::IsoUnit tmp23 = this->unit;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(75)
		tmp23->goTo(n->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onStageClick,(void))

Void Main_obj::onstageResized( ::openfl::events::Event e){
{
		HX_STACK_FRAME("Main","onstageResized",0x5b5e3ce6,"Main.onstageResized","Main.hx",77,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(78)
		::com::lak::IsoWorld tmp = this->world;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		tmp->worldSize(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onstageResized,(void))

Void Main_obj::update( ::openfl::events::Event e){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",80,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(81)
		int tmp = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		int time = tmp;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(82)
		int tmp1 = time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		int tmp2 = this->lastTime;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		int delta = tmp3;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(83)
		::com::lak::entities::IsoUnit tmp4 = this->unit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		int tmp5 = delta;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		tmp4->update(tmp5);
		HX_STACK_LINE(84)
		::com::lak::IsoWorld tmp6 = this->world;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		int tmp7 = delta;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		tmp6->update(tmp7);
		HX_STACK_LINE(85)
		this->lastTime = time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,update,(void))

::Main Main_obj::instance;


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(unit,"unit");
	HX_MARK_MEMBER_NAME(sprSheetManager,"sprSheetManager");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(realWidth,"realWidth");
	HX_MARK_MEMBER_NAME(realHeight,"realHeight");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(unit,"unit");
	HX_VISIT_MEMBER_NAME(sprSheetManager,"sprSheetManager");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(realWidth,"realWidth");
	HX_VISIT_MEMBER_NAME(realHeight,"realHeight");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"unit") ) { return unit; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"realWidth") ) { return realWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"realHeight") ) { return realHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMainAdded") ) { return onMainAdded_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onStageClick") ) { return onStageClick_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onstageResized") ) { return onstageResized_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sprSheetManager") ) { return sprSheetManager; }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"unit") ) { unit=inValue.Cast< ::com::lak::entities::IsoUnit >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::com::lak::IsoWorld >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"realWidth") ) { realWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"realHeight") ) { realHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sprSheetManager") ) { sprSheetManager=inValue.Cast< ::com::lak::manager::SpritesheetManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::Main >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0"));
	outFields->push(HX_HCSTRING("unit","\x84","\xca","\xa9","\x4d"));
	outFields->push(HX_HCSTRING("sprSheetManager","\x63","\x66","\x8f","\xb6"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce"));
	outFields->push(HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Main_obj,lastTime),HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0")},
	{hx::fsObject /*::com::lak::entities::IsoUnit*/ ,(int)offsetof(Main_obj,unit),HX_HCSTRING("unit","\x84","\xca","\xa9","\x4d")},
	{hx::fsObject /*::com::lak::manager::SpritesheetManager*/ ,(int)offsetof(Main_obj,sprSheetManager),HX_HCSTRING("sprSheetManager","\x63","\x66","\x8f","\xb6")},
	{hx::fsObject /*::com::lak::IsoWorld*/ ,(int)offsetof(Main_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsInt,(int)offsetof(Main_obj,realWidth),HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce")},
	{hx::fsInt,(int)offsetof(Main_obj,realHeight),HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::Main*/ ,(void *) &Main_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0"),
	HX_HCSTRING("unit","\x84","\xca","\xa9","\x4d"),
	HX_HCSTRING("sprSheetManager","\x63","\x66","\x8f","\xb6"),
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("realWidth","\xc8","\xe5","\x24","\xce"),
	HX_HCSTRING("realHeight","\xe5","\xa1","\x73","\x48"),
	HX_HCSTRING("onMainAdded","\xa8","\x80","\x2a","\x58"),
	HX_HCSTRING("onStageClick","\xa9","\x72","\xf2","\x73"),
	HX_HCSTRING("onstageResized","\x71","\x20","\xa8","\xcc"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::instance,"instance");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

