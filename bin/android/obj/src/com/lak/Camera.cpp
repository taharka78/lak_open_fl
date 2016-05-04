#include <hxcpp.h>

#ifndef INCLUDED_com_lak_Camera
#include <com/lak/Camera.h>
#endif
#ifndef INCLUDED_com_lak_IsoWorld
#include <com/lak/IsoWorld.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
namespace com{
namespace lak{

Void Camera_obj::__construct(::com::lak::IsoWorld _world,::openfl::display::Stage _stg)
{
HX_STACK_FRAME("com.lak.Camera","new",0x3bd018dc,"com.lak.Camera.new","com/lak/Camera.hx",15,0x8c6b8152)
HX_STACK_THIS(this)
HX_STACK_ARG(_world,"_world")
HX_STACK_ARG(_stg,"_stg")
{
	HX_STACK_LINE(17)
	this->aKeyPress = Array_obj< bool >::__new();
	HX_STACK_LINE(26)
	this->world = _world;
	HX_STACK_LINE(27)
	Dynamic tmp = this->keyDownListener_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	_stg->addEventListener(HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),tmp,null(),null(),null());
	HX_STACK_LINE(28)
	Dynamic tmp1 = this->keyUpListener_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	_stg->addEventListener(HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),tmp1,null(),null(),null());
}
;
	return null();
}

//Camera_obj::~Camera_obj() { }

Dynamic Camera_obj::__CreateEmpty() { return  new Camera_obj; }
hx::ObjectPtr< Camera_obj > Camera_obj::__new(::com::lak::IsoWorld _world,::openfl::display::Stage _stg)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(_world,_stg);
	return _result_;}

Dynamic Camera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Camera_obj > _result_ = new Camera_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Camera_obj::keyDownListener( ::openfl::events::KeyboardEvent kevt){
{
		HX_STACK_FRAME("com.lak.Camera","keyDownListener",0xed1441b1,"com.lak.Camera.keyDownListener","com/lak/Camera.hx",30,0x8c6b8152)
		HX_STACK_THIS(this)
		HX_STACK_ARG(kevt,"kevt")
		HX_STACK_LINE(30)
		this->aKeyPress[kevt->keyCode] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,keyDownListener,(void))

Void Camera_obj::keyUpListener( ::openfl::events::KeyboardEvent kevt){
{
		HX_STACK_FRAME("com.lak.Camera","keyUpListener",0x1db91bea,"com.lak.Camera.keyUpListener","com/lak/Camera.hx",31,0x8c6b8152)
		HX_STACK_THIS(this)
		HX_STACK_ARG(kevt,"kevt")
		HX_STACK_LINE(31)
		this->aKeyPress[kevt->keyCode] = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Camera_obj,keyUpListener,(void))

Void Camera_obj::checkKeys( ){
{
		HX_STACK_FRAME("com.lak.Camera","checkKeys",0xc92e7858,"com.lak.Camera.checkKeys","com/lak/Camera.hx",37,0x8c6b8152)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		bool tmp = this->aKeyPress->__get((int)38);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(42)
			::com::lak::IsoWorld tmp1 = this->world;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			(tmp1->COLONNE_VISIBLE_OFFSET)--;
			HX_STACK_LINE(43)
			::com::lak::IsoWorld tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			(tmp2->OFFSET_COLONNE_WORLD)--;
			HX_STACK_LINE(44)
			::com::lak::IsoWorld tmp3 = this->world;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			Float tmp4 = tmp3->COLONNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			if ((tmp5)){
				HX_STACK_LINE(44)
				::com::lak::IsoWorld tmp6 = this->world;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(44)
				tmp6->COLONNE_VISIBLE_OFFSET = (int)0;
			}
			HX_STACK_LINE(45)
			::com::lak::IsoWorld tmp6 = this->world;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			int tmp7 = tmp6->OFFSET_COLONNE_WORLD;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			bool tmp8 = (tmp7 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			if ((tmp8)){
				HX_STACK_LINE(45)
				::com::lak::IsoWorld tmp9 = this->world;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(45)
				tmp9->OFFSET_COLONNE_WORLD = (int)0;
			}
		}
		HX_STACK_LINE(47)
		bool tmp1 = this->aKeyPress->__get((int)40);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		if ((tmp1)){
			HX_STACK_LINE(50)
			::com::lak::IsoWorld tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			(tmp2->COLONNE_VISIBLE_OFFSET)++;
			HX_STACK_LINE(51)
			::com::lak::IsoWorld tmp3 = this->world;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			(tmp3->OFFSET_COLONNE_WORLD)++;
			HX_STACK_LINE(53)
			::com::lak::IsoWorld tmp4 = this->world;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Float tmp5 = tmp4->COLONNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			::com::lak::IsoWorld tmp6 = this->world;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			int tmp7 = tmp6->PART_NUM_TILE_W;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			::com::lak::IsoWorld tmp8 = this->world;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			int tmp9 = tmp8->NB_TILE_W;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			int tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			bool tmp11 = (tmp5 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			if ((tmp11)){
				HX_STACK_LINE(53)
				::com::lak::IsoWorld tmp12 = this->world;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(53)
				int tmp13 = tmp12->PART_NUM_TILE_W;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(53)
				::com::lak::IsoWorld tmp14 = this->world;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(53)
				int tmp15 = tmp14->NB_TILE_W;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(53)
				int tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(53)
				::com::lak::IsoWorld tmp17 = this->world;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(53)
				tmp17->COLONNE_VISIBLE_OFFSET = tmp16;
			}
			HX_STACK_LINE(54)
			::com::lak::IsoWorld tmp12 = this->world;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(54)
			int tmp13 = tmp12->OFFSET_COLONNE_WORLD;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(54)
			::com::lak::IsoWorld tmp14 = this->world;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(54)
			int tmp15 = tmp14->NB_LIGNE_WORLD;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(54)
			::com::lak::IsoWorld tmp16 = this->world;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(54)
			int tmp17 = tmp16->NB_TILE_W;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(54)
			int tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(54)
			bool tmp19 = (tmp13 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(54)
			if ((tmp19)){
				HX_STACK_LINE(54)
				::com::lak::IsoWorld tmp20 = this->world;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(54)
				int tmp21 = tmp20->NB_LIGNE_WORLD;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(54)
				::com::lak::IsoWorld tmp22 = this->world;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(54)
				int tmp23 = tmp22->NB_TILE_W;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(54)
				int tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(54)
				::com::lak::IsoWorld tmp25 = this->world;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(54)
				tmp25->OFFSET_COLONNE_WORLD = tmp24;
			}
			HX_STACK_LINE(55)
			::com::lak::IsoWorld tmp20 = this->world;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(55)
			int tmp21 = tmp20->OFFSET_COLONNE_WORLD;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(55)
			bool tmp22 = (tmp21 >= (int)900);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(55)
			if ((tmp22)){
				HX_STACK_LINE(55)
				::com::lak::IsoWorld tmp23 = this->world;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(55)
				tmp23->OFFSET_COLONNE_WORLD = (int)900;
			}
		}
		HX_STACK_LINE(57)
		bool tmp2 = this->aKeyPress->__get((int)37);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		if ((tmp2)){
			HX_STACK_LINE(60)
			::com::lak::IsoWorld tmp3 = this->world;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			(tmp3->LIGNE_VISIBLE_OFFSET)--;
			HX_STACK_LINE(61)
			::com::lak::IsoWorld tmp4 = this->world;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			(tmp4->OFFSET_LIGNE_WORLD)--;
			HX_STACK_LINE(62)
			::com::lak::IsoWorld tmp5 = this->world;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			Float tmp6 = tmp5->LIGNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			bool tmp7 = (tmp6 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			if ((tmp7)){
				HX_STACK_LINE(62)
				::com::lak::IsoWorld tmp8 = this->world;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				tmp8->LIGNE_VISIBLE_OFFSET = (int)0;
			}
			HX_STACK_LINE(63)
			::com::lak::IsoWorld tmp8 = this->world;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(63)
			int tmp9 = tmp8->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			bool tmp10 = (tmp9 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(63)
			if ((tmp10)){
				HX_STACK_LINE(63)
				::com::lak::IsoWorld tmp11 = this->world;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(63)
				tmp11->OFFSET_LIGNE_WORLD = (int)0;
			}
		}
		HX_STACK_LINE(65)
		bool tmp3 = this->aKeyPress->__get((int)39);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(68)
			::com::lak::IsoWorld tmp4 = this->world;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			(tmp4->LIGNE_VISIBLE_OFFSET)++;
			HX_STACK_LINE(69)
			::com::lak::IsoWorld tmp5 = this->world;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			(tmp5->OFFSET_LIGNE_WORLD)++;
			HX_STACK_LINE(70)
			::com::lak::IsoWorld tmp6 = this->world;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			Float tmp7 = tmp6->LIGNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			::com::lak::IsoWorld tmp8 = this->world;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			int tmp9 = tmp8->PART_NUM_TILE_H;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			::com::lak::IsoWorld tmp10 = this->world;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			int tmp11 = tmp10->NB_TILE_H;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(70)
			int tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			bool tmp13 = (tmp7 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			if ((tmp13)){
				HX_STACK_LINE(70)
				::com::lak::IsoWorld tmp14 = this->world;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(70)
				int tmp15 = tmp14->PART_NUM_TILE_H;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(70)
				::com::lak::IsoWorld tmp16 = this->world;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(70)
				int tmp17 = tmp16->NB_TILE_H;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(70)
				int tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(70)
				::com::lak::IsoWorld tmp19 = this->world;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(70)
				tmp19->LIGNE_VISIBLE_OFFSET = tmp18;
			}
			HX_STACK_LINE(71)
			::com::lak::IsoWorld tmp14 = this->world;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			int tmp15 = tmp14->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(71)
			::com::lak::IsoWorld tmp16 = this->world;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(71)
			int tmp17 = tmp16->NB_COLONNE_WORLD;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(71)
			::com::lak::IsoWorld tmp18 = this->world;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(71)
			int tmp19 = tmp18->NB_TILE_H;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(71)
			int tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(71)
			bool tmp21 = (tmp15 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(71)
			if ((tmp21)){
				HX_STACK_LINE(71)
				::com::lak::IsoWorld tmp22 = this->world;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(71)
				int tmp23 = tmp22->NB_COLONNE_WORLD;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(71)
				::com::lak::IsoWorld tmp24 = this->world;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(71)
				int tmp25 = tmp24->NB_TILE_H;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(71)
				int tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(71)
				::com::lak::IsoWorld tmp27 = this->world;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(71)
				tmp27->OFFSET_LIGNE_WORLD = tmp26;
			}
			HX_STACK_LINE(72)
			::com::lak::IsoWorld tmp22 = this->world;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(72)
			int tmp23 = tmp22->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(72)
			bool tmp24 = (tmp23 >= (int)900);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(72)
			if ((tmp24)){
				HX_STACK_LINE(72)
				::com::lak::IsoWorld tmp25 = this->world;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(72)
				tmp25->OFFSET_LIGNE_WORLD = (int)900;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Camera_obj,checkKeys,(void))


Camera_obj::Camera_obj()
{
}

void Camera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Camera);
	HX_MARK_MEMBER_NAME(aKeyPress,"aKeyPress");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_END_CLASS();
}

void Camera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aKeyPress,"aKeyPress");
	HX_VISIT_MEMBER_NAME(world,"world");
}

Dynamic Camera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aKeyPress") ) { return aKeyPress; }
		if (HX_FIELD_EQ(inName,"checkKeys") ) { return checkKeys_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"keyUpListener") ) { return keyUpListener_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"keyDownListener") ) { return keyDownListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Camera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::com::lak::IsoWorld >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aKeyPress") ) { aKeyPress=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Camera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("aKeyPress","\xe5","\x7e","\x1c","\xd4"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Camera_obj,aKeyPress),HX_HCSTRING("aKeyPress","\xe5","\x7e","\x1c","\xd4")},
	{hx::fsObject /*::com::lak::IsoWorld*/ ,(int)offsetof(Camera_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("aKeyPress","\xe5","\x7e","\x1c","\xd4"),
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("keyDownListener","\x35","\x2f","\x0f","\x7b"),
	HX_HCSTRING("keyUpListener","\x6e","\xe0","\x56","\x35"),
	HX_HCSTRING("checkKeys","\xdc","\xaa","\xe6","\x9a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Camera_obj::__mClass,"__mClass");
};

#endif

hx::Class Camera_obj::__mClass;

void Camera_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.Camera","\xea","\xba","\xeb","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Camera_obj >;
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
