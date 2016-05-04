#ifndef INCLUDED_lime_system_JNI
#define INCLUDED_lime_system_JNI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,_system,JNI)
HX_DECLARE_CLASS2(lime,_system,JNIMemberField)
HX_DECLARE_CLASS2(lime,_system,JNIStaticField)
namespace lime{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  JNI_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JNI_obj OBJ_;
		JNI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.system.JNI")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JNI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JNI_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("JNI","\x05","\x6b","\x38","\x00"); }

		static void __boot();
		static ::haxe::ds::StringMap alreadyCreated;
		static bool initialized;
		static Dynamic callMember( Dynamic method,Dynamic jobject,cpp::ArrayBase a);
		static Dynamic callMember_dyn();

		static Dynamic callStatic( Dynamic method,cpp::ArrayBase a);
		static Dynamic callStatic_dyn();

		static ::lime::_system::JNIMemberField createMemberField( ::String className,::String memberName,::String signature);
		static Dynamic createMemberField_dyn();

		static Dynamic createMemberMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  useArray,hx::Null< bool >  quietFail);
		static Dynamic createMemberMethod_dyn();

		static ::lime::_system::JNIStaticField createStaticField( ::String className,::String memberName,::String signature);
		static Dynamic createStaticField_dyn();

		static Dynamic createStaticMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  useArray,hx::Null< bool >  quietFail);
		static Dynamic createStaticMethod_dyn();

		static Dynamic getEnv( );
		static Dynamic getEnv_dyn();

		static Void init( );
		static Dynamic init_dyn();

		static Dynamic onCallback( Dynamic object,Dynamic method,Dynamic args);
		static Dynamic onCallback_dyn();

		static Void postUICallback( Dynamic callback);
		static Dynamic postUICallback_dyn();

		static Dynamic lime_jni_call_member( Dynamic jniMethod,Dynamic jniObject,Dynamic args);
		static Dynamic lime_jni_call_member_dyn();

		static Dynamic lime_jni_call_static( Dynamic jniMethod,Dynamic args);
		static Dynamic lime_jni_call_static_dyn();

		static Dynamic lime_jni_create_field( ::String className,::String field,::String signature,bool isStatic);
		static Dynamic lime_jni_create_field_dyn();

		static Dynamic lime_jni_create_method( ::String className,::String method,::String signature,bool isStatic,bool quiet);
		static Dynamic lime_jni_create_method_dyn();

		static Float lime_jni_get_env( );
		static Dynamic lime_jni_get_env_dyn();

		static Void lime_jni_post_ui_callback( Dynamic callback);
		static Dynamic lime_jni_post_ui_callback_dyn();

		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > cffi_lime_jni_call_member;
		static ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::hx::Object * ) > cffi_lime_jni_call_static;
		static ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ) > cffi_lime_jni_create_field;
		static ::cpp::Function< ::hx::Object * ( ::String ,::String ,::String ,bool ,bool ) > cffi_lime_jni_create_method;
		static ::cpp::Function< Float ( ) > cffi_lime_jni_get_env;
		static ::cpp::Function< void ( ::hx::Object * ) > cffi_lime_jni_post_ui_callback;
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_JNI */ 
