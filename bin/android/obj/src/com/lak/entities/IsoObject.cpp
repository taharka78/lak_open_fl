#include <hxcpp.h>

#ifndef INCLUDED_com_lak_entities_IsoObject
#include <com/lak/entities/IsoObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_spritesheet_AnimatedSprite
#include <spritesheet/AnimatedSprite.h>
#endif
namespace com{
namespace lak{
namespace entities{

Void IsoObject_obj::__construct()
{
HX_STACK_FRAME("com.lak.entities.IsoObject","new",0xd51f73ee,"com.lak.entities.IsoObject.new","com/lak/entities/IsoObject.hx",10,0x34a71101)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	this->speed = ((Float)2);
	HX_STACK_LINE(23)
	this->isLive = true;
	HX_STACK_LINE(22)
	this->clone = false;
	HX_STACK_LINE(21)
	this->angle = (int)0;
	HX_STACK_LINE(20)
	this->phase = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(19)
	this->currentAction = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(18)
	this->scale = ((Float)1);
	HX_STACK_LINE(16)
	this->isAttack = false;
	HX_STACK_LINE(15)
	this->canAttack = false;
	HX_STACK_LINE(14)
	this->hasPath = false;
	HX_STACK_LINE(13)
	this->hasBullet = false;
	HX_STACK_LINE(12)
	this->type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(31)
	super::__construct();
}
;
	return null();
}

//IsoObject_obj::~IsoObject_obj() { }

Dynamic IsoObject_obj::__CreateEmpty() { return  new IsoObject_obj; }
hx::ObjectPtr< IsoObject_obj > IsoObject_obj::__new()
{  hx::ObjectPtr< IsoObject_obj > _result_ = new IsoObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic IsoObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IsoObject_obj > _result_ = new IsoObject_obj();
	_result_->__construct();
	return _result_;}

Void IsoObject_obj::centerPoint( ){
{
		HX_STACK_FRAME("com.lak.entities.IsoObject","centerPoint",0x67ee9bc9,"com.lak.entities.IsoObject.centerPoint","com/lak/entities/IsoObject.hx",36,0x34a71101)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::openfl::display::Graphics tmp = this->get_graphics();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		tmp->beginFill((int)255,null());
		HX_STACK_LINE(38)
		::openfl::display::Graphics tmp1 = this->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		tmp1->drawCircle(((Float)-2.5),((Float)-2.5),(int)5);
		HX_STACK_LINE(39)
		::openfl::display::Graphics tmp2 = this->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		tmp2->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IsoObject_obj,centerPoint,(void))


IsoObject_obj::IsoObject_obj()
{
}

void IsoObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IsoObject);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(hasBullet,"hasBullet");
	HX_MARK_MEMBER_NAME(hasPath,"hasPath");
	HX_MARK_MEMBER_NAME(canAttack,"canAttack");
	HX_MARK_MEMBER_NAME(isAttack,"isAttack");
	HX_MARK_MEMBER_NAME(spriteSheet,"spriteSheet");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(currentAction,"currentAction");
	HX_MARK_MEMBER_NAME(phase,"phase");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(clone,"clone");
	HX_MARK_MEMBER_NAME(isLive,"isLive");
	HX_MARK_MEMBER_NAME(speed,"speed");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IsoObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(hasBullet,"hasBullet");
	HX_VISIT_MEMBER_NAME(hasPath,"hasPath");
	HX_VISIT_MEMBER_NAME(canAttack,"canAttack");
	HX_VISIT_MEMBER_NAME(isAttack,"isAttack");
	HX_VISIT_MEMBER_NAME(spriteSheet,"spriteSheet");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(currentAction,"currentAction");
	HX_VISIT_MEMBER_NAME(phase,"phase");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(clone,"clone");
	HX_VISIT_MEMBER_NAME(isLive,"isLive");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic IsoObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"phase") ) { return phase; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isLive") ) { return isLive; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasPath") ) { return hasPath; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isAttack") ) { return isAttack; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasBullet") ) { return hasBullet; }
		if (HX_FIELD_EQ(inName,"canAttack") ) { return canAttack; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spriteSheet") ) { return spriteSheet; }
		if (HX_FIELD_EQ(inName,"centerPoint") ) { return centerPoint_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentAction") ) { return currentAction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IsoObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"phase") ) { phase=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clone") ) { clone=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isLive") ) { isLive=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasPath") ) { hasPath=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isAttack") ) { isAttack=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasBullet") ) { hasBullet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canAttack") ) { canAttack=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spriteSheet") ) { spriteSheet=inValue.Cast< ::spritesheet::AnimatedSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentAction") ) { currentAction=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IsoObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("hasBullet","\x3c","\x45","\x79","\x15"));
	outFields->push(HX_HCSTRING("hasPath","\x1f","\x06","\x96","\x19"));
	outFields->push(HX_HCSTRING("canAttack","\xf8","\x4f","\x56","\x32"));
	outFields->push(HX_HCSTRING("isAttack","\x52","\x97","\x79","\x38"));
	outFields->push(HX_HCSTRING("spriteSheet","\x5a","\xc4","\xc2","\xb2"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("currentAction","\xcf","\xbc","\xa2","\xf9"));
	outFields->push(HX_HCSTRING("phase","\x3b","\x28","\xe9","\xc1"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"));
	outFields->push(HX_HCSTRING("isLive","\xf6","\xe3","\x19","\x65"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(IsoObject_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsBool,(int)offsetof(IsoObject_obj,hasBullet),HX_HCSTRING("hasBullet","\x3c","\x45","\x79","\x15")},
	{hx::fsBool,(int)offsetof(IsoObject_obj,hasPath),HX_HCSTRING("hasPath","\x1f","\x06","\x96","\x19")},
	{hx::fsBool,(int)offsetof(IsoObject_obj,canAttack),HX_HCSTRING("canAttack","\xf8","\x4f","\x56","\x32")},
	{hx::fsBool,(int)offsetof(IsoObject_obj,isAttack),HX_HCSTRING("isAttack","\x52","\x97","\x79","\x38")},
	{hx::fsObject /*::spritesheet::AnimatedSprite*/ ,(int)offsetof(IsoObject_obj,spriteSheet),HX_HCSTRING("spriteSheet","\x5a","\xc4","\xc2","\xb2")},
	{hx::fsFloat,(int)offsetof(IsoObject_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsString,(int)offsetof(IsoObject_obj,currentAction),HX_HCSTRING("currentAction","\xcf","\xbc","\xa2","\xf9")},
	{hx::fsString,(int)offsetof(IsoObject_obj,phase),HX_HCSTRING("phase","\x3b","\x28","\xe9","\xc1")},
	{hx::fsInt,(int)offsetof(IsoObject_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(IsoObject_obj,clone),HX_HCSTRING("clone","\x5d","\x13","\x63","\x48")},
	{hx::fsBool,(int)offsetof(IsoObject_obj,isLive),HX_HCSTRING("isLive","\xf6","\xe3","\x19","\x65")},
	{hx::fsFloat,(int)offsetof(IsoObject_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("hasBullet","\x3c","\x45","\x79","\x15"),
	HX_HCSTRING("hasPath","\x1f","\x06","\x96","\x19"),
	HX_HCSTRING("canAttack","\xf8","\x4f","\x56","\x32"),
	HX_HCSTRING("isAttack","\x52","\x97","\x79","\x38"),
	HX_HCSTRING("spriteSheet","\x5a","\xc4","\xc2","\xb2"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("currentAction","\xcf","\xbc","\xa2","\xf9"),
	HX_HCSTRING("phase","\x3b","\x28","\xe9","\xc1"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("isLive","\xf6","\xe3","\x19","\x65"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("centerPoint","\x3b","\xba","\x5f","\x98"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IsoObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IsoObject_obj::__mClass,"__mClass");
};

#endif

hx::Class IsoObject_obj::__mClass;

void IsoObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.entities.IsoObject","\xfc","\xa4","\xc7","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IsoObject_obj >;
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
