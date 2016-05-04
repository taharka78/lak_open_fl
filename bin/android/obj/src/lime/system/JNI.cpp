#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_JNI
#include <lime/system/JNI.h>
#endif
#ifndef INCLUDED_lime_system_JNIMemberField
#include <lime/system/JNIMemberField.h>
#endif
#ifndef INCLUDED_lime_system_JNIMethod
#include <lime/system/JNIMethod.h>
#endif
#ifndef INCLUDED_lime_system_JNIStaticField
#include <lime/system/JNIStaticField.h>
#endif
namespace lime{
namespace _system{

Void JNI_obj::__construct()
{
	return null();
}

//JNI_obj::~JNI_obj() { }

Dynamic JNI_obj::__CreateEmpty() { return  new JNI_obj; }
hx::ObjectPtr< JNI_obj > JNI_obj::__new()
{  hx::ObjectPtr< JNI_obj > _result_ = new JNI_obj();
	_result_->__construct();
	return _result_;}

Dynamic JNI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNI_obj > _result_ = new JNI_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap JNI_obj::alreadyCreated;

bool JNI_obj::initialized;

Dynamic JNI_obj::callMember( Dynamic method,Dynamic jobject,cpp::ArrayBase a){
	HX_STACK_FRAME("lime.system.JNI","callMember",0x6d0f06e7,"lime.system.JNI.callMember","lime/system/JNI.hx",18,0x21970b7f)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(18)
	int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(20)
			Dynamic tmp1 = method(jobject);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(20)
			return tmp1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(21)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(21)
			return tmp1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(22)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			return tmp1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(23)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			return tmp1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(24)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			return tmp1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(25)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			return tmp1;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(26)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			return tmp1;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(27)
			Dynamic tmp1 = method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5),a->__GetItem((int)6));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(27)
			return tmp1;
		}
		;break;
		default: {
			HX_STACK_LINE(28)
			return null();
		}
	}
	HX_STACK_LINE(18)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,callMember,return )

Dynamic JNI_obj::callStatic( Dynamic method,cpp::ArrayBase a){
	HX_STACK_FRAME("lime.system.JNI","callStatic",0x6e55013b,"lime.system.JNI.callStatic","lime/system/JNI.hx",37,0x21970b7f)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(37)
	int _g = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(39)
			Dynamic tmp1 = method();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			return tmp1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(40)
			Dynamic tmp1 = method(a->__GetItem((int)0));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			return tmp1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(41)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			return tmp1;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(42)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			return tmp1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(43)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			return tmp1;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(44)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(44)
			return tmp1;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(45)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			return tmp1;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(46)
			Dynamic tmp1 = method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5),a->__GetItem((int)6));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			return tmp1;
		}
		;break;
		default: {
			HX_STACK_LINE(47)
			return null();
		}
	}
	HX_STACK_LINE(37)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,callStatic,return )

::lime::_system::JNIMemberField JNI_obj::createMemberField( ::String className,::String memberName,::String signature){
	HX_STACK_FRAME("lime.system.JNI","createMemberField",0xd212c0f5,"lime.system.JNI.createMemberField","lime/system/JNI.hx",54,0x21970b7f)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_LINE(56)
	::lime::_system::JNI_obj::init();
	HX_STACK_LINE(59)
	::lime::_system::JNIMemberField tmp = ::lime::_system::JNIMemberField_obj::__new(((Dynamic)(::lime::_system::JNI_obj::cffi_lime_jni_create_field.call(className,memberName,signature,false))));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createMemberField,return )

Dynamic JNI_obj::createMemberMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
	HX_STACK_FRAME("lime.system.JNI","createMemberMethod",0x87227e46,"lime.system.JNI.createMemberMethod","lime/system/JNI.hx",67,0x21970b7f)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_ARG(quietFail,"quietFail")
{
		HX_STACK_LINE(69)
		::lime::_system::JNI_obj::init();
		HX_STACK_LINE(72)
		::String tmp = className.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		className = tmp;
		HX_STACK_LINE(73)
		Dynamic handle = ((Dynamic)(::lime::_system::JNI_obj::cffi_lime_jni_create_method.call(className,memberName,signature,false,quietFail)));		HX_STACK_VAR(handle,"handle");
		HX_STACK_LINE(75)
		bool tmp1 = (handle == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(77)
			bool tmp2 = quietFail;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			if ((tmp2)){
				HX_STACK_LINE(79)
				return null();
			}
			HX_STACK_LINE(83)
			::String tmp3 = (HX_HCSTRING("Could not find member function \"","\xc5","\x79","\x42","\xb4") + memberName);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(87)
		::lime::_system::JNIMethod tmp2 = ::lime::_system::JNIMethod_obj::__new(handle);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		::lime::_system::JNIMethod method = tmp2;		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(88)
		bool tmp3 = useArray;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		Dynamic tmp4 = method->__Field(HX_HCSTRING("getMemberMethod","\x91","\xe2","\xb0","\xec"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createMemberMethod,return )

::lime::_system::JNIStaticField JNI_obj::createStaticField( ::String className,::String memberName,::String signature){
	HX_STACK_FRAME("lime.system.JNI","createStaticField",0xe4dcd621,"lime.system.JNI.createStaticField","lime/system/JNI.hx",96,0x21970b7f)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_LINE(98)
	::lime::_system::JNI_obj::init();
	HX_STACK_LINE(101)
	::lime::_system::JNIStaticField tmp = ::lime::_system::JNIStaticField_obj::__new(((Dynamic)(::lime::_system::JNI_obj::cffi_lime_jni_create_field.call(className,memberName,signature,true))));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createStaticField,return )

Dynamic JNI_obj::createStaticMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
	HX_STACK_FRAME("lime.system.JNI","createStaticMethod",0xe52aef9a,"lime.system.JNI.createStaticMethod","lime/system/JNI.hx",109,0x21970b7f)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_ARG(quietFail,"quietFail")
{
		HX_STACK_LINE(111)
		::lime::_system::JNI_obj::init();
		HX_STACK_LINE(114)
		::String tmp = className.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		className = tmp;
		HX_STACK_LINE(115)
		Dynamic handle = ((Dynamic)(::lime::_system::JNI_obj::cffi_lime_jni_create_method.call(className,memberName,signature,true,quietFail)));		HX_STACK_VAR(handle,"handle");
		HX_STACK_LINE(117)
		bool tmp1 = (handle == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		if ((tmp1)){
			HX_STACK_LINE(119)
			bool tmp2 = quietFail;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			if ((tmp2)){
				HX_STACK_LINE(121)
				return null();
			}
			HX_STACK_LINE(125)
			::String tmp3 = (HX_HCSTRING("Could not find static function \"","\xf1","\xb7","\xfa","\x62") + memberName);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(129)
		::lime::_system::JNIMethod tmp2 = ::lime::_system::JNIMethod_obj::__new(handle);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		::lime::_system::JNIMethod method = tmp2;		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(130)
		bool tmp3 = useArray;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		Dynamic tmp4 = method->__Field(HX_HCSTRING("getStaticMethod","\xe5","\x53","\xb9","\x4a"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createStaticMethod,return )

Dynamic JNI_obj::getEnv( ){
	HX_STACK_FRAME("lime.system.JNI","getEnv",0x2402f6c6,"lime.system.JNI.getEnv","lime/system/JNI.hx",138,0x21970b7f)
	HX_STACK_LINE(140)
	::lime::_system::JNI_obj::init();
	HX_STACK_LINE(143)
	return ::lime::_system::JNI_obj::cffi_lime_jni_get_env.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,getEnv,return )

Void JNI_obj::init( ){
{
		HX_STACK_FRAME("lime.system.JNI","init",0x6490931f,"lime.system.JNI.init","lime/system/JNI.hx",151,0x21970b7f)
		HX_STACK_LINE(153)
		bool tmp = ::lime::_system::JNI_obj::initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		if ((tmp1)){
			HX_STACK_LINE(155)
			::lime::_system::JNI_obj::initialized = true;
			HX_STACK_LINE(158)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				bool lazy = false;		HX_STACK_VAR(lazy,"lazy");
				HX_STACK_LINE(158)
				bool tmp3 = lazy;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				tmp2 = ::lime::_system::CFFI_obj::load(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_init_callback","\x50","\xaf","\x63","\x63"),(int)1,tmp3);
			}
			HX_STACK_LINE(158)
			Dynamic method = tmp2;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(159)
			Dynamic tmp3 = ::lime::_system::JNI_obj::onCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			method(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

Dynamic JNI_obj::onCallback( Dynamic object,Dynamic method,Dynamic args){
	HX_STACK_FRAME("lime.system.JNI","onCallback",0x99e6bb53,"lime.system.JNI.onCallback","lime/system/JNI.hx",167,0x21970b7f)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(169)
	Dynamic tmp = object;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	Dynamic tmp1 = method;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	Dynamic tmp2 = ::Reflect_obj::field(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	Dynamic field = tmp2;		HX_STACK_VAR(field,"field");
	HX_STACK_LINE(171)
	bool tmp3 = (field != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(171)
	if ((tmp3)){
		HX_STACK_LINE(173)
		Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		Dynamic tmp5 = field;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		Dynamic tmp6 = args;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		Dynamic tmp7 = ::Reflect_obj::callMethod(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		return tmp7;
	}
	HX_STACK_LINE(177)
	Dynamic tmp4 = method;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(177)
	::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(177)
	::String tmp6 = (HX_HCSTRING("onCallback - unknown field ","\x2b","\x28","\x2a","\x3c") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(177)
	Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("JNI.hx","\xd9","\xc8","\x0d","\xb0"),177,HX_HCSTRING("lime.system.JNI","\xbf","\x02","\xfc","\x60"),HX_HCSTRING("onCallback","\x04","\x6e","\xbd","\x5c"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(177)
	::haxe::Log_obj::trace(tmp6,tmp7);
	HX_STACK_LINE(178)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

Void JNI_obj::postUICallback( Dynamic callback){
{
		HX_STACK_FRAME("lime.system.JNI","postUICallback",0x8d567168,"lime.system.JNI.postUICallback","lime/system/JNI.hx",188,0x21970b7f)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(188)
		::lime::_system::JNI_obj::cffi_lime_jni_post_ui_callback.call(hx::DynamicPtr(callback));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNI_obj,postUICallback,(void))

Dynamic JNI_obj::lime_jni_call_member( Dynamic jniMethod,Dynamic jniObject,Dynamic args){
	HX_STACK_FRAME("lime.system.JNI","lime_jni_call_member",0xa0eea566,"lime.system.JNI.lime_jni_call_member","lime/system/JNI.hx",204,0x21970b7f)
	HX_STACK_ARG(jniMethod,"jniMethod")
	HX_STACK_ARG(jniObject,"jniObject")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(204)
	return ::lime::_system::JNI_obj::cffi_lime_jni_call_member.call(hx::DynamicPtr(jniMethod),hx::DynamicPtr(jniObject),hx::DynamicPtr(args));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,lime_jni_call_member,return )

Dynamic JNI_obj::lime_jni_call_static( Dynamic jniMethod,Dynamic args){
	HX_STACK_FRAME("lime.system.JNI","lime_jni_call_static",0xa2349fba,"lime.system.JNI.lime_jni_call_static","lime/system/JNI.hx",205,0x21970b7f)
	HX_STACK_ARG(jniMethod,"jniMethod")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(205)
	return ::lime::_system::JNI_obj::cffi_lime_jni_call_static.call(hx::DynamicPtr(jniMethod),hx::DynamicPtr(args));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,lime_jni_call_static,return )

Dynamic JNI_obj::lime_jni_create_field( ::String className,::String field,::String signature,bool isStatic){
	HX_STACK_FRAME("lime.system.JNI","lime_jni_create_field",0x67644f4c,"lime.system.JNI.lime_jni_create_field","lime/system/JNI.hx",206,0x21970b7f)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(field,"field")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(isStatic,"isStatic")
	HX_STACK_LINE(206)
	return ::lime::_system::JNI_obj::cffi_lime_jni_create_field.call(className,field,signature,isStatic);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(JNI_obj,lime_jni_create_field,return )

Dynamic JNI_obj::lime_jni_create_method( ::String className,::String method,::String signature,bool isStatic,bool quiet){
	HX_STACK_FRAME("lime.system.JNI","lime_jni_create_method",0x992d7c0f,"lime.system.JNI.lime_jni_create_method","lime/system/JNI.hx",207,0x21970b7f)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(isStatic,"isStatic")
	HX_STACK_ARG(quiet,"quiet")
	HX_STACK_LINE(207)
	return ::lime::_system::JNI_obj::cffi_lime_jni_create_method.call(className,method,signature,isStatic,quiet);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,lime_jni_create_method,return )

Float JNI_obj::lime_jni_get_env( ){
	HX_STACK_FRAME("lime.system.JNI","lime_jni_get_env",0x9fa4654f,"lime.system.JNI.lime_jni_get_env","lime/system/JNI.hx",208,0x21970b7f)
	HX_STACK_LINE(208)
	return ::lime::_system::JNI_obj::cffi_lime_jni_get_env.call();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,lime_jni_get_env,return )

Void JNI_obj::lime_jni_post_ui_callback( Dynamic callback){
{
		HX_STACK_FRAME("lime.system.JNI","lime_jni_post_ui_callback",0xcb317886,"lime.system.JNI.lime_jni_post_ui_callback","lime/system/JNI.hx",209,0x21970b7f)
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(209)
		::lime::_system::JNI_obj::cffi_lime_jni_post_ui_callback.call(hx::DynamicPtr(callback));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JNI_obj,lime_jni_post_ui_callback,(void))

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > JNI_obj::cffi_lime_jni_call_member;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > JNI_obj::cffi_lime_jni_call_static;

::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ) > JNI_obj::cffi_lime_jni_create_field;

::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ,bool ) > JNI_obj::cffi_lime_jni_create_method;

::cpp::Function< Float ( ) > JNI_obj::cffi_lime_jni_get_env;

::cpp::Function< void ( ::hx::Object * ) > JNI_obj::cffi_lime_jni_post_ui_callback;


JNI_obj::JNI_obj()
{
}

bool JNI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { outValue = callMember_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"callStatic") ) { outValue = callStatic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onCallback") ) { outValue = onCallback_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = initialized; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { outValue = alreadyCreated; return true;  }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_jni_get_env") ) { outValue = lime_jni_get_env_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createMemberField") ) { outValue = createMemberField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createStaticField") ) { outValue = createStaticField_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { outValue = createMemberMethod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { outValue = createStaticMethod_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { outValue = lime_jni_call_member_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { outValue = lime_jni_call_static_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_jni_create_field") ) { outValue = lime_jni_create_field_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_get_env") ) { outValue = cffi_lime_jni_get_env; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_jni_create_method") ) { outValue = lime_jni_create_method_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_jni_post_ui_callback") ) { outValue = lime_jni_post_ui_callback_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_call_member") ) { outValue = cffi_lime_jni_call_member; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_call_static") ) { outValue = cffi_lime_jni_call_static; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_create_field") ) { outValue = cffi_lime_jni_create_field; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_create_method") ) { outValue = cffi_lime_jni_create_method; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_post_ui_callback") ) { outValue = cffi_lime_jni_post_ui_callback; return true;  }
	}
	return false;
}

bool JNI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { alreadyCreated=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_get_env") ) { cffi_lime_jni_get_env=ioValue.Cast< ::cpp::Function< Float ( ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_call_member") ) { cffi_lime_jni_call_member=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_call_static") ) { cffi_lime_jni_call_static=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_create_field") ) { cffi_lime_jni_create_field=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_create_method") ) { cffi_lime_jni_create_method=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ,bool ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_jni_post_ui_callback") ) { cffi_lime_jni_post_ui_callback=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &JNI_obj::alreadyCreated,HX_HCSTRING("alreadyCreated","\x30","\xe9","\xf8","\x79")},
	{hx::fsBool,(void *) &JNI_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &JNI_obj::cffi_lime_jni_call_member,HX_HCSTRING("cffi_lime_jni_call_member","\xd0","\xa4","\xa0","\xf0")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &JNI_obj::cffi_lime_jni_call_static,HX_HCSTRING("cffi_lime_jni_call_static","\x24","\x9f","\xe6","\xf1")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ) >*/ ,(void *) &JNI_obj::cffi_lime_jni_create_field,HX_HCSTRING("cffi_lime_jni_create_field","\xa2","\xcc","\x71","\xd3")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ,bool ) >*/ ,(void *) &JNI_obj::cffi_lime_jni_create_method,HX_HCSTRING("cffi_lime_jni_create_method","\xf9","\xa9","\xed","\xb8")},
	{hx::fsObject /*::cpp::Function< Float ( ) >*/ ,(void *) &JNI_obj::cffi_lime_jni_get_env,HX_HCSTRING("cffi_lime_jni_get_env","\xb9","\xe7","\xf3","\xfb")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &JNI_obj::cffi_lime_jni_post_ui_callback,HX_HCSTRING("cffi_lime_jni_post_ui_callback","\xdc","\x58","\xb7","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_MARK_MEMBER_NAME(JNI_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(JNI_obj::cffi_lime_jni_call_member,"cffi_lime_jni_call_member");
	HX_MARK_MEMBER_NAME(JNI_obj::cffi_lime_jni_call_static,"cffi_lime_jni_call_static");
	HX_MARK_MEMBER_NAME(JNI_obj::cffi_lime_jni_create_field,"cffi_lime_jni_create_field");
	HX_MARK_MEMBER_NAME(JNI_obj::cffi_lime_jni_create_method,"cffi_lime_jni_create_method");
	HX_MARK_MEMBER_NAME(JNI_obj::cffi_lime_jni_get_env,"cffi_lime_jni_get_env");
	HX_MARK_MEMBER_NAME(JNI_obj::cffi_lime_jni_post_ui_callback,"cffi_lime_jni_post_ui_callback");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_VISIT_MEMBER_NAME(JNI_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(JNI_obj::cffi_lime_jni_call_member,"cffi_lime_jni_call_member");
	HX_VISIT_MEMBER_NAME(JNI_obj::cffi_lime_jni_call_static,"cffi_lime_jni_call_static");
	HX_VISIT_MEMBER_NAME(JNI_obj::cffi_lime_jni_create_field,"cffi_lime_jni_create_field");
	HX_VISIT_MEMBER_NAME(JNI_obj::cffi_lime_jni_create_method,"cffi_lime_jni_create_method");
	HX_VISIT_MEMBER_NAME(JNI_obj::cffi_lime_jni_get_env,"cffi_lime_jni_get_env");
	HX_VISIT_MEMBER_NAME(JNI_obj::cffi_lime_jni_post_ui_callback,"cffi_lime_jni_post_ui_callback");
};

#endif

hx::Class JNI_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("alreadyCreated","\x30","\xe9","\xf8","\x79"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("callMember","\x98","\xb9","\xe5","\x2f"),
	HX_HCSTRING("callStatic","\xec","\xb3","\x2b","\x31"),
	HX_HCSTRING("createMemberField","\x64","\x36","\x37","\x55"),
	HX_HCSTRING("createMemberMethod","\xf7","\xc9","\xe4","\xc3"),
	HX_HCSTRING("createStaticField","\x90","\x4b","\x01","\x68"),
	HX_HCSTRING("createStaticMethod","\x4b","\x3b","\xed","\x21"),
	HX_HCSTRING("getEnv","\xf7","\x3c","\x1c","\xa3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onCallback","\x04","\x6e","\xbd","\x5c"),
	HX_HCSTRING("postUICallback","\x99","\xd0","\x5a","\xb0"),
	HX_HCSTRING("lime_jni_call_member","\x57","\xff","\x9f","\x4b"),
	HX_HCSTRING("lime_jni_call_static","\xab","\xf9","\xe5","\x4c"),
	HX_HCSTRING("lime_jni_create_field","\x3b","\xa8","\xe1","\x17"),
	HX_HCSTRING("lime_jni_create_method","\x40","\xf4","\x5d","\x56"),
	HX_HCSTRING("lime_jni_get_env","\xc0","\xb2","\xe3","\xd3"),
	HX_HCSTRING("lime_jni_post_ui_callback","\xf5","\x74","\xff","\xdd"),
	HX_HCSTRING("cffi_lime_jni_call_member","\xd0","\xa4","\xa0","\xf0"),
	HX_HCSTRING("cffi_lime_jni_call_static","\x24","\x9f","\xe6","\xf1"),
	HX_HCSTRING("cffi_lime_jni_create_field","\xa2","\xcc","\x71","\xd3"),
	HX_HCSTRING("cffi_lime_jni_create_method","\xf9","\xa9","\xed","\xb8"),
	HX_HCSTRING("cffi_lime_jni_get_env","\xb9","\xe7","\xf3","\xfb"),
	HX_HCSTRING("cffi_lime_jni_post_ui_callback","\xdc","\x58","\xb7","\x5c"),
	::String(null()) };

void JNI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNI","\xbf","\x02","\xfc","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNI_obj::__GetStatic;
	__mClass->mSetStaticField = &JNI_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JNI_obj >;
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

void JNI_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","lime/system/JNI.hx",12,0x21970b7f)
		{
			HX_STACK_LINE(12)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12)
			return tmp1;
		}
		return null();
	}
};
	alreadyCreated= _Function_0_1::Block();
	initialized= false;
	cffi_lime_jni_call_member= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_call_member","\x57","\xff","\x9f","\x4b"),HX_HCSTRING("oooo","\x40","\x4a","\xb3","\x49"),false));
	cffi_lime_jni_call_static= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_call_static","\xab","\xf9","\xe5","\x4c"),HX_HCSTRING("ooo","\x4f","\x9b","\x54","\x00"),false));
	cffi_lime_jni_create_field= ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_create_field","\x3b","\xa8","\xe1","\x17"),HX_HCSTRING("sssbo","\x60","\xd8","\x6f","\x83"),false));
	cffi_lime_jni_create_method= ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_create_method","\x40","\xf4","\x5d","\x56"),HX_HCSTRING("sssbbo","\xbc","\x70","\x6d","\x7e"),false));
	cffi_lime_jni_get_env= ::cpp::Function< Float ( ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_get_env","\xc0","\xb2","\xe3","\xd3"),HX_HCSTRING("d","\x64","\x00","\x00","\x00"),false));
	cffi_lime_jni_post_ui_callback= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_jni_post_ui_callback","\xf5","\x74","\xff","\xdd"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace system
