#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif
namespace lime{
namespace _system{

Void JNIMemberField_obj::__construct(Dynamic field)
{
HX_STACK_FRAME("lime.system.JNIMemberField","new",0x7a00f0f3,"lime.system.JNIMemberField.new","lime/system/JNI.hx",229,0x21970b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(field,"field")
{
	HX_STACK_LINE(229)
	this->field = field;
}
;
	return null();
}

//JNIMemberField_obj::~JNIMemberField_obj() { }

Dynamic JNIMemberField_obj::__CreateEmpty() { return  new JNIMemberField_obj; }
hx::ObjectPtr< JNIMemberField_obj > JNIMemberField_obj::__new(Dynamic field)
{  hx::ObjectPtr< JNIMemberField_obj > _result_ = new JNIMemberField_obj();
	_result_->__construct(field);
	return _result_;}

Dynamic JNIMemberField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMemberField_obj > _result_ = new JNIMemberField_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIMemberField_obj::get( Dynamic jobject){
	HX_STACK_FRAME("lime.system.JNIMemberField","get",0x79fba129,"lime.system.JNIMemberField.get","lime/system/JNI.hx",237,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_LINE(237)
	return ((Dynamic)(::lime::_system::JNIMemberField_obj::cffi_lime_jni_get_member.call(hx::DynamicPtr(this->field),hx::DynamicPtr(jobject))));
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMemberField_obj,get,return )

Dynamic JNIMemberField_obj::set( Dynamic jobject,Dynamic value){
	HX_STACK_FRAME("lime.system.JNIMemberField","set",0x7a04bc35,"lime.system.JNIMemberField.set","lime/system/JNI.hx",245,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(248)
	::lime::_system::JNIMemberField_obj::cffi_lime_jni_set_member.call(hx::DynamicPtr(this->field),hx::DynamicPtr(jobject),hx::DynamicPtr(value));
	HX_STACK_LINE(250)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(250)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(JNIMemberField_obj,set,return )

Dynamic JNIMemberField_obj::lime_jni_get_member( Dynamic jniField,Dynamic jniObject){
	HX_STACK_FRAME("lime.system.JNIMemberField","lime_jni_get_member",0xb166affa,"lime.system.JNIMemberField.lime_jni_get_member","lime/system/JNI.hx",263,0x21970b7f)
	HX_STACK_ARG(jniField,"jniField")
	HX_STACK_ARG(jniObject,"jniObject")
	HX_STACK_LINE(263)
	return ::lime::_system::JNIMemberField_obj::cffi_lime_jni_get_member.call(hx::DynamicPtr(jniField),hx::DynamicPtr(jniObject));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNIMemberField_obj,lime_jni_get_member,return )

Void JNIMemberField_obj::lime_jni_set_member( Dynamic jniField,Dynamic jniObject,Dynamic value){
{
		HX_STACK_FRAME("lime.system.JNIMemberField","lime_jni_set_member",0xb4e44e6e,"lime.system.JNIMemberField.lime_jni_set_member","lime/system/JNI.hx",264,0x21970b7f)
		HX_STACK_ARG(jniField,"jniField")
		HX_STACK_ARG(jniObject,"jniObject")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(264)
		::lime::_system::JNIMemberField_obj::cffi_lime_jni_set_member.call(hx::DynamicPtr(jniField),hx::DynamicPtr(jniObject),hx::DynamicPtr(value));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNIMemberField_obj,lime_jni_set_member,(void))

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > JNIMemberField_obj::cffi_lime_jni_get_member;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > JNIMemberField_obj::cffi_lime_jni_set_member;


JNIMemberField_obj::JNIMemberField_obj()
{
}

void JNIMemberField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMemberField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIMemberField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

Dynamic JNIMemberField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
	}
	return super::__Field(inName,inCallProp);
}

bool JNIMemberField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_member") ) { outValue = lime_jni_get_member_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_jni_set_member") ) { outValue = lime_jni_set_member_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_get_member") ) { outValue = cffi_lime_jni_get_member; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_set_member") ) { outValue = cffi_lime_jni_set_member; return true;  }
	}
	return false;
}

Dynamic JNIMemberField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JNIMemberField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_get_member") ) { cffi_lime_jni_get_member=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_set_member") ) { cffi_lime_jni_set_member=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

void JNIMemberField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMemberField_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &JNIMemberField_obj::cffi_lime_jni_get_member,HX_HCSTRING("cffi_lime_jni_get_member","\x0e","\x66","\x16","\xe7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &JNIMemberField_obj::cffi_lime_jni_set_member,HX_HCSTRING("cffi_lime_jni_set_member","\x82","\x04","\x94","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::cffi_lime_jni_get_member,"cffi_lime_jni_get_member");
	HX_MARK_MEMBER_NAME(JNIMemberField_obj::cffi_lime_jni_set_member,"cffi_lime_jni_set_member");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::cffi_lime_jni_get_member,"cffi_lime_jni_get_member");
	HX_VISIT_MEMBER_NAME(JNIMemberField_obj::cffi_lime_jni_set_member,"cffi_lime_jni_set_member");
};

#endif

hx::Class JNIMemberField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_jni_get_member","\x67","\xf9","\x77","\xa1"),
	HX_HCSTRING("lime_jni_set_member","\xdb","\x97","\xf5","\xa4"),
	HX_HCSTRING("cffi_lime_jni_get_member","\x0e","\x66","\x16","\xe7"),
	HX_HCSTRING("cffi_lime_jni_set_member","\x82","\x04","\x94","\xea"),
	::String(null()) };

void JNIMemberField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIMemberField","\x81","\xfb","\xfa","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNIMemberField_obj::__GetStatic;
	__mClass->mSetStaticField = &JNIMemberField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIMemberField_obj >;
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

void JNIMemberField_obj::__boot()
{
	cffi_lime_jni_get_member= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_get_member","\x67","\xf9","\x77","\xa1"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_jni_set_member= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_set_member","\xdb","\x97","\xf5","\xa4"),HX_HCSTRING("ooov","\x47","\x4a","\xb3","\x49"),false));
}

} // end namespace lime
} // end namespace system
