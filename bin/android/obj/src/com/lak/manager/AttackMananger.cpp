#include <hxcpp.h>

#ifndef INCLUDED_com_lak_IsoWorld
#include <com/lak/IsoWorld.h>
#endif
#ifndef INCLUDED_com_lak_entities_IsoObject
#include <com/lak/entities/IsoObject.h>
#endif
#ifndef INCLUDED_com_lak_manager_AttackMananger
#include <com/lak/manager/AttackMananger.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace com{
namespace lak{
namespace manager{

Void AttackMananger_obj::__construct(::com::lak::IsoWorld _world)
{
HX_STACK_FRAME("com.lak.manager.AttackMananger","new",0xa41ed26d,"com.lak.manager.AttackMananger.new","com/lak/manager/AttackMananger.hx",17,0x0a6aafc0)
HX_STACK_THIS(this)
HX_STACK_ARG(_world,"_world")
{
	HX_STACK_LINE(17)
	this->world = _world;
}
;
	return null();
}

//AttackMananger_obj::~AttackMananger_obj() { }

Dynamic AttackMananger_obj::__CreateEmpty() { return  new AttackMananger_obj; }
hx::ObjectPtr< AttackMananger_obj > AttackMananger_obj::__new(::com::lak::IsoWorld _world)
{  hx::ObjectPtr< AttackMananger_obj > _result_ = new AttackMananger_obj();
	_result_->__construct(_world);
	return _result_;}

Dynamic AttackMananger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttackMananger_obj > _result_ = new AttackMananger_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void AttackMananger_obj::run( ){
{
		HX_STACK_FRAME("com.lak.manager.AttackMananger","run",0xa421e958,"com.lak.manager.AttackMananger.run","com/lak/manager/AttackMananger.hx",19,0x0a6aafc0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AttackMananger_obj,run,(void))

Void AttackMananger_obj::manageAttack( ::com::lak::entities::IsoObject obj){
{
		HX_STACK_FRAME("com.lak.manager.AttackMananger","manageAttack",0x43b5a460,"com.lak.manager.AttackMananger.manageAttack","com/lak/manager/AttackMananger.hx",27,0x0a6aafc0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(28)
		bool tmp = (obj->isLive == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		if ((tmp)){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AttackMananger_obj,manageAttack,(void))


AttackMananger_obj::AttackMananger_obj()
{
}

void AttackMananger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttackMananger);
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_END_CLASS();
}

void AttackMananger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(world,"world");
}

Dynamic AttackMananger_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manageAttack") ) { return manageAttack_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AttackMananger_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::com::lak::IsoWorld >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttackMananger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::lak::IsoWorld*/ ,(int)offsetof(AttackMananger_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("manageAttack","\x0d","\xd0","\x28","\xe0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttackMananger_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttackMananger_obj::__mClass,"__mClass");
};

#endif

hx::Class AttackMananger_obj::__mClass;

void AttackMananger_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.manager.AttackMananger","\xfb","\x17","\x78","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AttackMananger_obj >;
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
} // end namespace manager
