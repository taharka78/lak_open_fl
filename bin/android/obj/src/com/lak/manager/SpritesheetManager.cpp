#include <hxcpp.h>

#ifndef INCLUDED_com_lak_manager_SpritesheetManager
#include <com/lak/manager/SpritesheetManager.h>
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
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_spritesheet_Spritesheet
#include <spritesheet/Spritesheet.h>
#endif
#ifndef INCLUDED_spritesheet_importers_ZoeImporter
#include <spritesheet/importers/ZoeImporter.h>
#endif
namespace com{
namespace lak{
namespace manager{

Void SpritesheetManager_obj::__construct()
{
HX_STACK_FRAME("com.lak.manager.SpritesheetManager","new",0x0694d8ab,"com.lak.manager.SpritesheetManager.new","com/lak/manager/SpritesheetManager.hx",12,0x36208dc2)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/lak/manager/SpritesheetManager.hx",14,0x36208dc2)
			{
				HX_STACK_LINE(14)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(14)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(14)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(14)
	this->sheetsCache = _Function_1_1::Block();
}
;
	return null();
}

//SpritesheetManager_obj::~SpritesheetManager_obj() { }

Dynamic SpritesheetManager_obj::__CreateEmpty() { return  new SpritesheetManager_obj; }
hx::ObjectPtr< SpritesheetManager_obj > SpritesheetManager_obj::__new()
{  hx::ObjectPtr< SpritesheetManager_obj > _result_ = new SpritesheetManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic SpritesheetManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpritesheetManager_obj > _result_ = new SpritesheetManager_obj();
	_result_->__construct();
	return _result_;}

::spritesheet::Spritesheet SpritesheetManager_obj::getSpritesheet( ::String assetFolderName,::String assetName){
	HX_STACK_FRAME("com.lak.manager.SpritesheetManager","getSpritesheet",0x7514bd19,"com.lak.manager.SpritesheetManager.getSpritesheet","com/lak/manager/SpritesheetManager.hx",22,0x36208dc2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assetFolderName,"assetFolderName")
	HX_STACK_ARG(assetName,"assetName")
	HX_STACK_LINE(23)
	::haxe::ds::StringMap tmp = this->sheetsCache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = (assetFolderName + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::String tmp2 = assetName;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	bool tmp4 = tmp->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	if ((tmp5)){
		HX_STACK_LINE(24)
		::String tmp6 = assetFolderName;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		::String tmp7 = assetName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		this->addSpriteSheet(tmp6,tmp7);
	}
	HX_STACK_LINE(26)
	::haxe::ds::StringMap tmp6 = this->sheetsCache;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	::String tmp7 = (assetFolderName + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	::String tmp8 = assetName;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(26)
	::spritesheet::Spritesheet tmp10 = tmp6->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(26)
	::spritesheet::Spritesheet tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(26)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC2(SpritesheetManager_obj,getSpritesheet,return )

Void SpritesheetManager_obj::addSpriteSheet( ::String assetFolderName,::String assetName){
{
		HX_STACK_FRAME("com.lak.manager.SpritesheetManager","addSpriteSheet",0x167ae14e,"com.lak.manager.SpritesheetManager.addSpriteSheet","com/lak/manager/SpritesheetManager.hx",34,0x36208dc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(assetFolderName,"assetFolderName")
		HX_STACK_ARG(assetName,"assetName")
		HX_STACK_LINE(35)
		::haxe::ds::StringMap tmp = this->sheetsCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::String tmp1 = (assetFolderName + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		::String tmp2 = assetName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		bool tmp4 = tmp->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		if ((tmp5)){
			HX_STACK_LINE(36)
			::String tmp6 = (assetFolderName + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			::String tmp7 = assetName;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			::String tmp9 = (tmp8 + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(36)
			::openfl::display::BitmapData tmp10 = ::openfl::Assets_obj::getBitmapData(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(36)
			::openfl::display::BitmapData bitmapData = tmp10;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(37)
			::String tmp11 = (assetFolderName + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(37)
			::String tmp12 = assetName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(37)
			::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(37)
			::String tmp14 = (tmp13 + HX_HCSTRING(".json","\x56","\xf1","\xd6","\xc2"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(37)
			::String tmp15 = ::openfl::Assets_obj::getText(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(37)
			::String tmp16 = assetFolderName;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(37)
			::String tmp17 = (assetName + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(37)
			::spritesheet::Spritesheet tmp18 = ::spritesheet::importers::ZoeImporter_obj::parse(tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(37)
			::spritesheet::Spritesheet spriteSht = tmp18;		HX_STACK_VAR(spriteSht,"spriteSht");
			HX_STACK_LINE(38)
			::haxe::ds::StringMap tmp19 = this->sheetsCache;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(38)
			::String tmp20 = (assetFolderName + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(38)
			::String tmp21 = assetName;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(38)
			::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(38)
			::spritesheet::Spritesheet tmp23 = spriteSht;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(38)
			tmp19->set(tmp22,tmp23);
		}
		else{
			HX_STACK_LINE(40)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("SpritesheetManager.hx","\x6b","\xd7","\x7e","\x36"),40,HX_HCSTRING("com.lak.manager.SpritesheetManager","\x39","\xa7","\x22","\x72"),HX_HCSTRING("addSpriteSheet","\xb9","\xcb","\x99","\x48"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			::haxe::Log_obj::trace(HX_HCSTRING(" spritesheet already cached ","\xb0","\xb9","\x6c","\xdf"),tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpritesheetManager_obj,addSpriteSheet,(void))


SpritesheetManager_obj::SpritesheetManager_obj()
{
}

void SpritesheetManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpritesheetManager);
	HX_MARK_MEMBER_NAME(sheetsCache,"sheetsCache");
	HX_MARK_END_CLASS();
}

void SpritesheetManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sheetsCache,"sheetsCache");
}

Dynamic SpritesheetManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"sheetsCache") ) { return sheetsCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getSpritesheet") ) { return getSpritesheet_dyn(); }
		if (HX_FIELD_EQ(inName,"addSpriteSheet") ) { return addSpriteSheet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpritesheetManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"sheetsCache") ) { sheetsCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpritesheetManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sheetsCache","\xae","\xac","\x56","\x73"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SpritesheetManager_obj,sheetsCache),HX_HCSTRING("sheetsCache","\xae","\xac","\x56","\x73")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sheetsCache","\xae","\xac","\x56","\x73"),
	HX_HCSTRING("getSpritesheet","\x84","\xa7","\x33","\xa7"),
	HX_HCSTRING("addSpriteSheet","\xb9","\xcb","\x99","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpritesheetManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpritesheetManager_obj::__mClass,"__mClass");
};

#endif

hx::Class SpritesheetManager_obj::__mClass;

void SpritesheetManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.manager.SpritesheetManager","\x39","\xa7","\x22","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpritesheetManager_obj >;
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
