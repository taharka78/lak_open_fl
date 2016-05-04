#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_lak_IsoWorld
#include <com/lak/IsoWorld.h>
#endif
#ifndef INCLUDED_com_lak_entities_IsoObject
#include <com/lak/entities/IsoObject.h>
#endif
#ifndef INCLUDED_com_lak_entities_IsoUnit
#include <com/lak/entities/IsoUnit.h>
#endif
#ifndef INCLUDED_com_lak_manager_EntitiesManager
#include <com/lak/manager/EntitiesManager.h>
#endif
#ifndef INCLUDED_com_lak_utils_IsoUtils
#include <com/lak/utils/IsoUtils.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace com{
namespace lak{
namespace manager{

Void EntitiesManager_obj::__construct(::com::lak::IsoWorld _world)
{
HX_STACK_FRAME("com.lak.manager.EntitiesManager","new",0x88b90838,"com.lak.manager.EntitiesManager.new","com/lak/manager/EntitiesManager.hx",12,0x4869a97b)
HX_STACK_THIS(this)
HX_STACK_ARG(_world,"_world")
{
	HX_STACK_LINE(16)
	this->screen = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(15)
	this->pt = ::openfl::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(22)
	this->world = _world;
	HX_STACK_LINE(23)
	this->updateViewBounds();
}
;
	return null();
}

//EntitiesManager_obj::~EntitiesManager_obj() { }

Dynamic EntitiesManager_obj::__CreateEmpty() { return  new EntitiesManager_obj; }
hx::ObjectPtr< EntitiesManager_obj > EntitiesManager_obj::__new(::com::lak::IsoWorld _world)
{  hx::ObjectPtr< EntitiesManager_obj > _result_ = new EntitiesManager_obj();
	_result_->__construct(_world);
	return _result_;}

Dynamic EntitiesManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EntitiesManager_obj > _result_ = new EntitiesManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void EntitiesManager_obj::run( ){
{
		HX_STACK_FRAME("com.lak.manager.EntitiesManager","run",0x88bc1f23,"com.lak.manager.EntitiesManager.run","com/lak/manager/EntitiesManager.hx",30,0x4869a97b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		::com::lak::IsoWorld tmp = this->world;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g1 = tmp->worldObject;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(30)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			if ((tmp2)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			::com::lak::entities::IsoObject tmp3 = _g1->__get(_g).StaticCast< ::com::lak::entities::IsoObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(30)
			::com::lak::entities::IsoObject obj = tmp3;		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(31)
			Float tmp4 = obj->get_x();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			::openfl::geom::Point tmp5 = this->pt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			tmp5->x = tmp4;
			HX_STACK_LINE(32)
			Float tmp6 = obj->get_y();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			::openfl::geom::Point tmp7 = this->pt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			tmp7->y = tmp6;
			HX_STACK_LINE(33)
			::com::lak::entities::IsoObject tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			this->manageVisibility(tmp8);
			HX_STACK_LINE(34)
			::com::lak::entities::IsoObject tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			::com::lak::entities::IsoObject tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::com::lak::entities::IsoUnit >());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(34)
			if ((tmp11)){
				HX_STACK_LINE(34)
				bool tmp13 = obj->get_visible();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(34)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(34)
				tmp12 = (tmp14 == true);
			}
			else{
				HX_STACK_LINE(34)
				tmp12 = false;
			}
			HX_STACK_LINE(34)
			if ((tmp12)){
				HX_STACK_LINE(34)
				::com::lak::entities::IsoObject tmp13 = obj;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(34)
				this->manageShadow(tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntitiesManager_obj,run,(void))

Void EntitiesManager_obj::updateViewBounds( ){
{
		HX_STACK_FRAME("com.lak.manager.EntitiesManager","updateViewBounds",0xccf9174b,"com.lak.manager.EntitiesManager.updateViewBounds","com/lak/manager/EntitiesManager.hx",41,0x4869a97b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::com::lak::IsoWorld tmp = this->world;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::openfl::geom::Rectangle tmp1 = this->screen;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp1->width = tmp->VIEW_WIDTH;
		HX_STACK_LINE(43)
		::com::lak::IsoWorld tmp2 = this->world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		::openfl::geom::Rectangle tmp3 = this->screen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		tmp3->height = tmp2->VIEW_HEIGHT;
		HX_STACK_LINE(44)
		::com::lak::IsoWorld tmp4 = this->world;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::openfl::geom::Rectangle tmp5 = this->screen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		tmp5->x = tmp4->OFFSET_LIGNE_WORLD;
		HX_STACK_LINE(45)
		::com::lak::IsoWorld tmp6 = this->world;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::openfl::geom::Rectangle tmp7 = this->screen;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		tmp7->y = tmp6->OFFSET_COLONNE_WORLD;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntitiesManager_obj,updateViewBounds,(void))

Void EntitiesManager_obj::manageShadow( ::com::lak::entities::IsoObject obj){
{
		HX_STACK_FRAME("com.lak.manager.EntitiesManager","manageShadow",0x1ecaa94d,"com.lak.manager.EntitiesManager.manageShadow","com/lak/manager/EntitiesManager.hx",52,0x4869a97b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(53)
		bool tmp = obj->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		if ((tmp)){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EntitiesManager_obj,manageShadow,(void))

Void EntitiesManager_obj::manageVisibility( ::com::lak::entities::IsoObject obj){
{
		HX_STACK_FRAME("com.lak.manager.EntitiesManager","manageVisibility",0x486949bf,"com.lak.manager.EntitiesManager.manageVisibility","com/lak/manager/EntitiesManager.hx",62,0x4869a97b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(63)
		::openfl::geom::Point tmp = this->pt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		bool tmp1 = this->onScreen(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(64)
			bool tmp2 = obj->clone;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			if ((tmp3)){
				HX_STACK_LINE(65)
				bool tmp4 = obj->get_visible();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(65)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(65)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				if ((tmp6)){
					HX_STACK_LINE(65)
					::com::lak::IsoWorld tmp8 = this->world;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(65)
					::com::lak::IsoWorld tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					::com::lak::entities::IsoObject tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					::com::lak::entities::IsoObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(65)
					bool tmp12 = tmp9->contains(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(65)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(65)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(65)
					tmp7 = !(tmp14);
				}
				else{
					HX_STACK_LINE(65)
					tmp7 = false;
				}
				HX_STACK_LINE(65)
				if ((tmp7)){
					HX_STACK_LINE(66)
					obj->set_visible(true);
					HX_STACK_LINE(67)
					::com::lak::IsoWorld tmp8 = this->world;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(67)
					::com::lak::entities::IsoObject tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(67)
					tmp8->addChild(tmp9);
				}
			}
			else{
				HX_STACK_LINE(70)
				Float tmp4 = obj->get_x();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				Float tmp5 = obj->get_y();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				::openfl::geom::Point tmp7 = ::com::lak::utils::IsoUtils_obj::getTileAt(tmp6,true);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				this->pt = tmp7;
			}
		}
		else{
			HX_STACK_LINE(80)
			obj->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EntitiesManager_obj,manageVisibility,(void))

bool EntitiesManager_obj::onScreen( ::openfl::geom::Point pt){
	HX_STACK_FRAME("com.lak.manager.EntitiesManager","onScreen",0x0e738b13,"com.lak.manager.EntitiesManager.onScreen","com/lak/manager/EntitiesManager.hx",84,0x4869a97b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pt,"pt")
	HX_STACK_LINE(85)
	Float tmp = pt->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::openfl::geom::Rectangle tmp1 = this->screen;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	::openfl::geom::Rectangle tmp4 = this->screen;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	Float tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	bool tmp7 = (tmp <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(85)
	if ((tmp8)){
		HX_STACK_LINE(85)
		Float tmp10 = pt->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp11 = this->screen;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(85)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(85)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(85)
		Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(85)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(85)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(85)
		tmp9 = (tmp10 >= tmp19);
	}
	else{
		HX_STACK_LINE(85)
		tmp9 = false;
	}
	HX_STACK_LINE(85)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(85)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(85)
	if ((tmp10)){
		HX_STACK_LINE(85)
		Float tmp12 = pt->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp13 = this->screen;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(85)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(85)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(85)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(85)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(85)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(85)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp22 = this->screen;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(85)
		Float tmp25 = tmp24->height;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(85)
		Float tmp26 = (tmp21 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(85)
		Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(85)
		Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(85)
		tmp11 = (tmp12 <= tmp28);
	}
	else{
		HX_STACK_LINE(85)
		tmp11 = false;
	}
	HX_STACK_LINE(85)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(85)
	if ((tmp11)){
		HX_STACK_LINE(85)
		Float tmp13 = pt->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp14 = this->screen;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(85)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(85)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(85)
		Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(85)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(85)
		tmp12 = (tmp13 >= tmp19);
	}
	else{
		HX_STACK_LINE(85)
		tmp12 = false;
	}
	HX_STACK_LINE(85)
	if ((tmp12)){
		HX_STACK_LINE(85)
		return true;
	}
	HX_STACK_LINE(86)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(EntitiesManager_obj,onScreen,return )


EntitiesManager_obj::EntitiesManager_obj()
{
}

void EntitiesManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntitiesManager);
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(pt,"pt");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_END_CLASS();
}

void EntitiesManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(pt,"pt");
	HX_VISIT_MEMBER_NAME(screen,"screen");
}

Dynamic EntitiesManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { return pt; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onScreen") ) { return onScreen_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manageShadow") ) { return manageShadow_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateViewBounds") ) { return updateViewBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"manageVisibility") ) { return manageVisibility_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EntitiesManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { pt=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::com::lak::IsoWorld >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntitiesManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("pt","\x04","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::lak::IsoWorld*/ ,(int)offsetof(EntitiesManager_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(EntitiesManager_obj,pt),HX_HCSTRING("pt","\x04","\x62","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(EntitiesManager_obj,screen),HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("pt","\x04","\x62","\x00","\x00"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("updateViewBounds","\x23","\x56","\x56","\xf1"),
	HX_HCSTRING("manageShadow","\x25","\x9c","\x39","\x1d"),
	HX_HCSTRING("manageVisibility","\x97","\x88","\xc6","\x6c"),
	HX_HCSTRING("onScreen","\xeb","\x31","\x0a","\x27"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntitiesManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntitiesManager_obj::__mClass,"__mClass");
};

#endif

hx::Class EntitiesManager_obj::__mClass;

void EntitiesManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.manager.EntitiesManager","\x46","\xcc","\x9a","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EntitiesManager_obj >;
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
