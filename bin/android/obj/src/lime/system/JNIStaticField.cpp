#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif
namespace lime{
namespace _system{

Void JNIStaticField_obj::__construct(Dynamic field)
{
HX_STACK_FRAME("lime.system.JNIStaticField","new",0x799b0c1f,"lime.system.JNIStaticField.new","lime/system/JNI.hx",284,0x21970b7f)
HX_STACK_THIS(this)
HX_STACK_ARG(field,"field")
{
	HX_STACK_LINE(284)
	this->field = field;
}
;
	return null();
}

//JNIStaticField_obj::~JNIStaticField_obj() { }

Dynamic JNIStaticField_obj::__CreateEmpty() { return  new JNIStaticField_obj; }
hx::ObjectPtr< JNIStaticField_obj > JNIStaticField_obj::__new(Dynamic field)
{  hx::ObjectPtr< JNIStaticField_obj > _result_ = new JNIStaticField_obj();
	_result_->__construct(field);
	return _result_;}

Dynamic JNIStaticField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIStaticField_obj > _result_ = new JNIStaticField_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic JNIStaticField_obj::get( ){
	HX_STACK_FRAME("lime.system.JNIStaticField","get",0x7995bc55,"lime.system.JNIStaticField.get","lime/system/JNI.hx",292,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	return ((Dynamic)(::lime::_system::JNIStaticField_obj::cffi_lime_jni_get_static.call(hx::DynamicPtr(this->field))));
}


HX_DEFINE_DYNAMIC_FUNC0(JNIStaticField_obj,get,return )

Dynamic JNIStaticField_obj::set( Dynamic value){
	HX_STACK_FRAME("lime.system.JNIStaticField","set",0x799ed761,"lime.system.JNIStaticField.set","lime/system/JNI.hx",300,0x21970b7f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(303)
	::lime::_system::JNIStaticField_obj::cffi_lime_jni_set_static.call(hx::DynamicPtr(this->field),hx::DynamicPtr(value));
	HX_STACK_LINE(305)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(JNIStaticField_obj,set,return )

Dynamic JNIStaticField_obj::lime_jni_get_static( Dynamic jniField){
	HX_STACK_FRAME("lime.system.JNIStaticField","lime_jni_get_static",0x3f54dd7a,"lime.system.JNIStaticField.lime_jni_get_static","lime/system/JNI.hx",318,0x21970b7f)
	HX_STACK_ARG(jniField,"jniField")
	HX_STACK_LINE(318)
	return ::lime::_system::JNIStaticField_obj::cffi_lime_jni_get_static.call(hx::DynamicPtr(jniField));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNIStaticField_obj,lime_jni_get_static,return )

Void JNIStaticField_obj::lime_jni_set_static( Dynamic jniField,Dynamic value){
{
		HX_STACK_FRAME("lime.system.JNIStaticField","lime_jni_set_static",0x42d27bee,"lime.system.JNIStaticField.lime_jni_set_static","lime/system/JNI.hx",319,0x21970b7f)
		HX_STACK_ARG(jniField,"jniField")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(319)
		::lime::_system::JNIStaticField_obj::cffi_lime_jni_set_static.call(hx::DynamicPtr(jniField),hx::DynamicPtr(value));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNIStaticField_obj,lime_jni_set_static,(void))

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > JNIStaticField_obj::cffi_lime_jni_get_static;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > JNIStaticField_obj::cffi_lime_jni_set_static;


JNIStaticField_obj::JNIStaticField_obj()
{
}

void JNIStaticField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIStaticField);
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_END_CLASS();
}

void JNIStaticField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(field,"field");
}

Dynamic JNIStaticField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool JNIStaticField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"lime_jni_get_static") ) { outValue = lime_jni_get_static_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_jni_set_static") ) { outValue = lime_jni_set_static_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_get_static") ) { outValue = cffi_lime_jni_get_static; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_set_static") ) { outValue = cffi_lime_jni_set_static; return true;  }
	}
	return false;
}

Dynamic JNIStaticField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JNIStaticField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_get_static") ) { cffi_lime_jni_get_static=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_set_static") ) { cffi_lime_jni_set_static=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

void JNIStaticField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIStaticField_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &JNIStaticField_obj::cffi_lime_jni_get_static,HX_HCSTRING("cffi_lime_jni_get_static","\x62","\x60","\x5c","\xe8")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &JNIStaticField_obj::cffi_lime_jni_set_static,HX_HCSTRING("cffi_lime_jni_set_static","\xd6","\xfe","\xd9","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::cffi_lime_jni_get_static,"cffi_lime_jni_get_static");
	HX_MARK_MEMBER_NAME(JNIStaticField_obj::cffi_lime_jni_set_static,"cffi_lime_jni_set_static");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::cffi_lime_jni_get_static,"cffi_lime_jni_get_static");
	HX_VISIT_MEMBER_NAME(JNIStaticField_obj::cffi_lime_jni_set_static,"cffi_lime_jni_set_static");
};

#endif

hx::Class JNIStaticField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_jni_get_static","\xbb","\xf3","\xbd","\xa2"),
	HX_HCSTRING("lime_jni_set_static","\x2f","\x92","\x3b","\xa6"),
	HX_HCSTRING("cffi_lime_jni_get_static","\x62","\x60","\x5c","\xe8"),
	HX_HCSTRING("cffi_lime_jni_set_static","\xd6","\xfe","\xd9","\xeb"),
	::String(null()) };

void JNIStaticField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIStaticField","\xad","\x10","\xc5","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNIStaticField_obj::__GetStatic;
	__mClass->mSetStaticField = &JNIStaticField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIStaticField_obj >;
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

void JNIStaticField_obj::__boot()
{
	cffi_lime_jni_get_static= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_get_static","\xbb","\xf3","\xbd","\xa2"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
	cffi_lime_jni_set_static= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_set_static","\x2f","\x92","\x3b","\xa6"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace system
