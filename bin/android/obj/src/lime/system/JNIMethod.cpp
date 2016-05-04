#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_system_JNIMethod
#include <lime/system/JNIMethod.h>
#endif
namespace lime{
namespace _system{

Void JNIMethod_obj::__construct(Dynamic method)
{
HX_STACK_FRAME("lime.system.JNIMethod","new",0xca67a7f2,"lime.system.JNIMethod.new","lime/system/JNI.hx",339,0x21970b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(method,"method")
{
	HX_STACK_LINE(339)
	this->method = method;
}
;
	return null();
}

//JNIMethod_obj::~JNIMethod_obj() { }

Dynamic JNIMethod_obj::__CreateEmpty() { return  new JNIMethod_obj; }
hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__new(Dynamic method)
{  hx::ObjectPtr< JNIMethod_obj > _result_ = new JNIMethod_obj();
	_result_->__construct(method);
	return _result_;}

Dynamic JNIMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMethod_obj > _result_ = new JNIMethod_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIMethod_obj::callMember( cpp::ArrayBase args){
	HX_STACK_FRAME("lime.system.JNIMethod","callMember",0x1acfd846,"lime.system.JNIMethod.callMember","lime/system/JNI.hx",343,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(346)
	Dynamic tmp = args->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	Dynamic jobject = tmp;		HX_STACK_VAR(jobject,"jobject");
	HX_STACK_LINE(347)
	return ((Dynamic)(::lime::_system::JNIMethod_obj::cffi_lime_jni_call_member.call(hx::DynamicPtr(this->method),hx::DynamicPtr(jobject),hx::DynamicPtr(args))));
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callMember,return )

Dynamic JNIMethod_obj::callStatic( cpp::ArrayBase args){
	HX_STACK_FRAME("lime.system.JNIMethod","callStatic",0x1c15d29a,"lime.system.JNIMethod.callStatic","lime/system/JNI.hx",358,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(358)
	return ((Dynamic)(::lime::_system::JNIMethod_obj::cffi_lime_jni_call_static.call(hx::DynamicPtr(this->method),hx::DynamicPtr(args))));
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callStatic,return )

Dynamic JNIMethod_obj::getMemberMethod( bool useArray){
	HX_STACK_FRAME("lime.system.JNIMethod","getMemberMethod",0x7872cd23,"lime.system.JNIMethod.getMemberMethod","lime/system/JNI.hx",366,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_LINE(368)
	bool tmp = useArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	if ((tmp)){
		HX_STACK_LINE(370)
		Dynamic tmp1 = this->callMember_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		return tmp1;
	}
	else{
		HX_STACK_LINE(374)
		Dynamic tmp1 = this->callMember_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(374)
		Dynamic tmp2 = ::Reflect_obj::makeVarArgs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		return tmp2;
	}
	HX_STACK_LINE(368)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getMemberMethod,return )

Dynamic JNIMethod_obj::getStaticMethod( bool useArray){
	HX_STACK_FRAME("lime.system.JNIMethod","getStaticMethod",0xd67b3e77,"lime.system.JNIMethod.getStaticMethod","lime/system/JNI.hx",381,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_LINE(383)
	bool tmp = useArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(383)
	if ((tmp)){
		HX_STACK_LINE(385)
		Dynamic tmp1 = this->callStatic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		return tmp1;
	}
	else{
		HX_STACK_LINE(389)
		Dynamic tmp1 = this->callStatic_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(389)
		Dynamic tmp2 = ::Reflect_obj::makeVarArgs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(389)
		return tmp2;
	}
	HX_STACK_LINE(383)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getStaticMethod,return )

Dynamic JNIMethod_obj::lime_jni_call_member( Dynamic jniMethod,Dynamic jniObject,Dynamic args){
	HX_STACK_FRAME("lime.system.JNIMethod","lime_jni_call_member",0x66c88385,"lime.system.JNIMethod.lime_jni_call_member","lime/system/JNI.hx",404,0x21970b7f)
	HX_STACK_ARG(jniMethod,"jniMethod")
	HX_STACK_ARG(jniObject,"jniObject")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(404)
	return ::lime::_system::JNIMethod_obj::cffi_lime_jni_call_member.call(hx::DynamicPtr(jniMethod),hx::DynamicPtr(jniObject),hx::DynamicPtr(args));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNIMethod_obj,lime_jni_call_member,return )

Dynamic JNIMethod_obj::lime_jni_call_static( Dynamic jniMethod,Dynamic args){
	HX_STACK_FRAME("lime.system.JNIMethod","lime_jni_call_static",0x680e7dd9,"lime.system.JNIMethod.lime_jni_call_static","lime/system/JNI.hx",405,0x21970b7f)
	HX_STACK_ARG(jniMethod,"jniMethod")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(405)
	return ::lime::_system::JNIMethod_obj::cffi_lime_jni_call_static.call(hx::DynamicPtr(jniMethod),hx::DynamicPtr(args));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNIMethod_obj,lime_jni_call_static,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > JNIMethod_obj::cffi_lime_jni_call_member;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > JNIMethod_obj::cffi_lime_jni_call_static;


JNIMethod_obj::JNIMethod_obj()
{
}

void JNIMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMethod);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_END_CLASS();
}

void JNIMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
}

Dynamic JNIMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { return callMember_dyn(); }
		if (HX_FIELD_EQ(inName,"callStatic") ) { return callStatic_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMemberMethod") ) { return getMemberMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"getStaticMethod") ) { return getStaticMethod_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool JNIMethod_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { outValue = lime_jni_call_member_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { outValue = lime_jni_call_static_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_call_member") ) { outValue = cffi_lime_jni_call_member; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_call_static") ) { outValue = cffi_lime_jni_call_static; return true;  }
	}
	return false;
}

Dynamic JNIMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JNIMethod_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_call_member") ) { cffi_lime_jni_call_member=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_call_static") ) { cffi_lime_jni_call_static=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

void JNIMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMethod_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &JNIMethod_obj::cffi_lime_jni_call_member,HX_HCSTRING("cffi_lime_jni_call_member","\xd0","\xa4","\xa0","\xf0")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &JNIMethod_obj::cffi_lime_jni_call_static,HX_HCSTRING("cffi_lime_jni_call_static","\x24","\x9f","\xe6","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("callMember","\x98","\xb9","\xe5","\x2f"),
	HX_HCSTRING("callStatic","\xec","\xb3","\x2b","\x31"),
	HX_HCSTRING("getMemberMethod","\x91","\xe2","\xb0","\xec"),
	HX_HCSTRING("getStaticMethod","\xe5","\x53","\xb9","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIMethod_obj::cffi_lime_jni_call_member,"cffi_lime_jni_call_member");
	HX_MARK_MEMBER_NAME(JNIMethod_obj::cffi_lime_jni_call_static,"cffi_lime_jni_call_static");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::cffi_lime_jni_call_member,"cffi_lime_jni_call_member");
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::cffi_lime_jni_call_static,"cffi_lime_jni_call_static");
};

#endif

hx::Class JNIMethod_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_jni_call_member","\x57","\xff","\x9f","\x4b"),
	HX_HCSTRING("lime_jni_call_static","\xab","\xf9","\xe5","\x4c"),
	HX_HCSTRING("cffi_lime_jni_call_member","\xd0","\xa4","\xa0","\xf0"),
	HX_HCSTRING("cffi_lime_jni_call_static","\x24","\x9f","\xe6","\xf1"),
	::String(null()) };

void JNIMethod_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIMethod","\x00","\x87","\x5c","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNIMethod_obj::__GetStatic;
	__mClass->mSetStaticField = &JNIMethod_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIMethod_obj >;
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

void JNIMethod_obj::__boot()
{
	cffi_lime_jni_call_member= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_call_member","\x57","\xff","\x9f","\x4b"),HX_HCSTRING("oooo","\x40","\x4a","\xb3","\x49"),false));
	cffi_lime_jni_call_static= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_call_static","\xab","\xf9","\xe5","\x4c"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace system
