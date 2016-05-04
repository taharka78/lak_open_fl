#include <hxcpp.h>

#ifndef INCLUDED_com_lak_events_MapEvent
#include <com/lak/events/MapEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
namespace com{
namespace lak{
namespace events{

Void MapEvent_obj::__construct(::String ype,Dynamic _dataObj)
{
HX_STACK_FRAME("com.lak.events.MapEvent","new",0xbc277b20,"com.lak.events.MapEvent.new","com/lak/events/MapEvent.hx",15,0x139b92f1)
HX_STACK_THIS(this)
HX_STACK_ARG(ype,"ype")
HX_STACK_ARG(_dataObj,"_dataObj")
{
	HX_STACK_LINE(16)
	this->dataObj = _dataObj;
	HX_STACK_LINE(17)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp,false,false);
}
;
	return null();
}

//MapEvent_obj::~MapEvent_obj() { }

Dynamic MapEvent_obj::__CreateEmpty() { return  new MapEvent_obj; }
hx::ObjectPtr< MapEvent_obj > MapEvent_obj::__new(::String ype,Dynamic _dataObj)
{  hx::ObjectPtr< MapEvent_obj > _result_ = new MapEvent_obj();
	_result_->__construct(ype,_dataObj);
	return _result_;}

Dynamic MapEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapEvent_obj > _result_ = new MapEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::events::Event MapEvent_obj::clone( ){
	HX_STACK_FRAME("com.lak.events.MapEvent","clone",0x6086ee1d,"com.lak.events.MapEvent.clone","com/lak/events/MapEvent.hx",19,0x139b92f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Dynamic tmp1 = this->dataObj;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::com::lak::events::MapEvent tmp2 = ::com::lak::events::MapEvent_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


::String MapEvent_obj::SETUP_WORLD;

::String MapEvent_obj::INIT;


MapEvent_obj::MapEvent_obj()
{
}

void MapEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapEvent);
	HX_MARK_MEMBER_NAME(dataObj,"dataObj");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MapEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataObj,"dataObj");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MapEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataObj") ) { return dataObj; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dataObj") ) { dataObj=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dataObj","\xed","\xa7","\xd5","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MapEvent_obj,dataObj),HX_HCSTRING("dataObj","\xed","\xa7","\xd5","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &MapEvent_obj::SETUP_WORLD,HX_HCSTRING("SETUP_WORLD","\x90","\x9f","\x14","\x18")},
	{hx::fsString,(void *) &MapEvent_obj::INIT,HX_HCSTRING("INIT","\x10","\x03","\x7c","\x30")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("dataObj","\xed","\xa7","\xd5","\x11"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MapEvent_obj::SETUP_WORLD,"SETUP_WORLD");
	HX_MARK_MEMBER_NAME(MapEvent_obj::INIT,"INIT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MapEvent_obj::SETUP_WORLD,"SETUP_WORLD");
	HX_VISIT_MEMBER_NAME(MapEvent_obj::INIT,"INIT");
};

#endif

hx::Class MapEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SETUP_WORLD","\x90","\x9f","\x14","\x18"),
	HX_HCSTRING("INIT","\x10","\x03","\x7c","\x30"),
	::String(null()) };

void MapEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.events.MapEvent","\x2e","\xab","\x4b","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapEvent_obj >;
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

void MapEvent_obj::__boot()
{
	SETUP_WORLD= HX_HCSTRING("setupWorld","\x95","\xb2","\x67","\xb0");
	INIT= HX_HCSTRING("init","\x10","\x3b","\xbb","\x45");
}

} // end namespace com
} // end namespace lak
} // end namespace events
