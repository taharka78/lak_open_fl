#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_com_lak_manager_LevelManager
#include <com/lak/manager/LevelManager.h>
#endif
#ifndef INCLUDED_com_lak_utils_GameUtils
#include <com/lak/utils/GameUtils.h>
#endif
#ifndef INCLUDED_com_lak_utils_IsoUtils
#include <com/lak/utils/IsoUtils.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
namespace com{
namespace lak{
namespace manager{

Void LevelManager_obj::__construct()
{
HX_STACK_FRAME("com.lak.manager.LevelManager","new",0x58ddff61,"com.lak.manager.LevelManager.new","com/lak/manager/LevelManager.hx",18,0x5a5aac0c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	::com::lak::manager::LevelManager_obj::instance = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//LevelManager_obj::~LevelManager_obj() { }

Dynamic LevelManager_obj::__CreateEmpty() { return  new LevelManager_obj; }
hx::ObjectPtr< LevelManager_obj > LevelManager_obj::__new()
{  hx::ObjectPtr< LevelManager_obj > _result_ = new LevelManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic LevelManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelManager_obj > _result_ = new LevelManager_obj();
	_result_->__construct();
	return _result_;}

Void LevelManager_obj::get9Nodes( ::com::lak::entities::IsoUnit _unit){
{
		HX_STACK_FRAME("com.lak.manager.LevelManager","get9Nodes",0x3b72b40f,"com.lak.manager.LevelManager.get9Nodes","com/lak/manager/LevelManager.hx",24,0x5a5aac0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_unit,"_unit")
		HX_STACK_LINE(25)
		::com::lak::entities::IsoUnit tmp = _unit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		Float tmp1 = _unit->get_x();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::com::lak::IsoWorld tmp2 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		int tmp3 = tmp2->tileW;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		int tmp4 = (tmp3 * (int)100);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		Float tmp5 = (Float(tmp1) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(25)
		::String tmp7 = (HX_HCSTRING("part_","\x0c","\x91","\x55","\xbd") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(25)
		::String tmp8 = (tmp7 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(25)
		Float tmp9 = _unit->get_y();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(25)
		::com::lak::IsoWorld tmp10 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(25)
		int tmp11 = tmp10->halfH;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(25)
		int tmp12 = (tmp11 * (int)100);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(25)
		Float tmp13 = (Float(tmp9) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(25)
		int tmp14 = ::Math_obj::floor(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(25)
		::String tmp15 = (tmp14 + HX_HCSTRING(".txt","\x02","\x3f","\xc0","\x1e"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(25)
		::String tmp16 = (tmp8 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(25)
		this->getUnitAdjacentNodes(tmp,this->mapPartArray(tmp16));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LevelManager_obj,get9Nodes,(void))

cpp::ArrayBase LevelManager_obj::mapPartArray( ::String partName){
	HX_STACK_FRAME("com.lak.manager.LevelManager","mapPartArray",0xdc1ed349,"com.lak.manager.LevelManager.mapPartArray","com/lak/manager/LevelManager.hx",32,0x5a5aac0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(partName,"partName")
	HX_STACK_LINE(33)
	::String tmp = (HX_HCSTRING("world1/","\xb0","\x79","\x74","\xa1") + partName);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::openfl::utils::ByteArrayData tmp1 = ::openfl::Assets_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	::openfl::utils::ByteArrayData bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(34)
	bytes->uncompress(null());
	HX_STACK_LINE(35)
	::String tmp2 = bytes->toString();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	::String str = tmp2;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(36)
	::String tmp3 = str;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	return ::com::lak::utils::GameUtils_obj::to2DDimension(tmp3,null());
}


HX_DEFINE_DYNAMIC_FUNC1(LevelManager_obj,mapPartArray,return )

Void LevelManager_obj::getUnitAdjacentNodes( ::com::lak::entities::IsoUnit _unit,cpp::ArrayBase tempMapAr){
{
		HX_STACK_FRAME("com.lak.manager.LevelManager","getUnitAdjacentNodes",0xf48d3954,"com.lak.manager.LevelManager.getUnitAdjacentNodes","com/lak/manager/LevelManager.hx",44,0x5a5aac0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_unit,"_unit")
		HX_STACK_ARG(tempMapAr,"tempMapAr")
		HX_STACK_LINE(45)
		Float tmp = _unit->get_x();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Float tmp1 = _unit->get_y();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		::openfl::geom::Point tmp3 = ::com::lak::utils::IsoUtils_obj::getTileAt(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		::openfl::geom::Point pt = tmp3;		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(46)
		::openfl::geom::Point tmp4 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		::openfl::geom::Point temp_pt = tmp4;		HX_STACK_VAR(temp_pt,"temp_pt");
		HX_STACK_LINE(47)
		_unit->nodeTab = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			int tmp5 = ::com::lak::utils::IsoUtils_obj::spiralWalkStepArray->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(49)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(49)
				if ((tmp7)){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				int i = tmp8;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(50)
				::openfl::geom::Point tmp9 = pt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(50)
				::String tmp10 = ::com::lak::utils::IsoUtils_obj::spiralWalkStepArray->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(50)
				::openfl::geom::Point tmp11 = ::com::lak::utils::IsoUtils_obj::slideMapTileWalker(tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(50)
				temp_pt = tmp11;
				HX_STACK_LINE(51)
				Float tmp12 = temp_pt->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(51)
				int tmp13 = (int)-1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(51)
				bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(51)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(51)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(51)
				if ((tmp15)){
					HX_STACK_LINE(51)
					tmp16 = (temp_pt->x < (int)100);
				}
				else{
					HX_STACK_LINE(51)
					tmp16 = false;
				}
				HX_STACK_LINE(51)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(51)
				if ((tmp16)){
					HX_STACK_LINE(51)
					Float tmp18 = temp_pt->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(51)
					int tmp19 = (int)-1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(51)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(51)
					bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(51)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(51)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(51)
					if ((tmp23)){
						HX_STACK_LINE(51)
						tmp17 = (temp_pt->y < (int)100);
					}
					else{
						HX_STACK_LINE(51)
						tmp17 = false;
					}
				}
				else{
					HX_STACK_LINE(51)
					tmp17 = false;
				}
				HX_STACK_LINE(51)
				if ((tmp17)){
					HX_STACK_LINE(54)
					::openfl::geom::Point tmp18 = temp_pt;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(54)
					::com::lak::IsoWorld tmp19 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(54)
					int tmp20 = tmp19->halfW;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(54)
					::com::lak::IsoWorld tmp21 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(54)
					int tmp22 = tmp21->tileH;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(54)
					::openfl::geom::Point tmp23 = ::com::lak::utils::IsoUtils_obj::mapTilePosition(tmp18,tmp20,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(54)
					::openfl::geom::Point pos = tmp23;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(56)
					Float tmp24 = temp_pt->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(56)
					int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(56)
					Dynamic tmp26 = tempMapAr->__GetItem(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(56)
					Float tmp27 = temp_pt->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(56)
					int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(56)
					Dynamic tmp29 = tmp26->__GetItem(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(58)
					::openfl::geom::Point tmp30 = pos;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(59)
					int tmp31 = (int)0;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(60)
					int tmp32 = (int)0;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(61)
					int tmp33 = (int)0;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(62)
					::String tmp34 = ::com::lak::utils::IsoUtils_obj::spiralWalkStepArray->__get(i);		HX_STACK_VAR(tmp34,"tmp34");
					struct _Function_4_1{
						inline static Dynamic Block( int &tmp33,int &tmp31,::String &tmp34,Dynamic &tmp29,int &tmp32,::openfl::geom::Point &tmp30){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/lak/manager/LevelManager.hx",55,0x5a5aac0c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7") , tmp29,false);
								__result->Add(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca") , tmp30,false);
								__result->Add(HX_HCSTRING("f","\x66","\x00","\x00","\x00") , tmp31,false);
								__result->Add(HX_HCSTRING("g","\x67","\x00","\x00","\x00") , tmp32,false);
								__result->Add(HX_HCSTRING("h","\x68","\x00","\x00","\x00") , tmp33,false);
								__result->Add(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10") , tmp34,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(55)
					Dynamic tmp35 = _Function_4_1::Block(tmp33,tmp31,tmp34,tmp29,tmp32,tmp30);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(55)
					Dynamic n = tmp35;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(65)
					::String tmp36 = _unit->lastNode;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(65)
					::String tmp37 = ::Std_obj::string(n->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(65)
					::String tmp38 = (tmp37 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(65)
					::String tmp39 = ::Std_obj::string(n->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(65)
					::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(65)
					::String tmp41 = ::Std_obj::string(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(65)
					bool tmp42 = (tmp36 != tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(65)
					if ((tmp42)){
						HX_STACK_LINE(66)
						Dynamic tmp43 = n;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(66)
						_unit->nodeTab->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp43);
					}
				}
			}
		}
		HX_STACK_LINE(70)
		::openfl::events::Event tmp5 = ::openfl::events::Event_obj::__new(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		_unit->dispatchEvent(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LevelManager_obj,getUnitAdjacentNodes,(void))

::com::lak::manager::LevelManager LevelManager_obj::instance;


LevelManager_obj::LevelManager_obj()
{
}

void LevelManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LevelManager);
	HX_MARK_MEMBER_NAME(tempUnit,"tempUnit");
	HX_MARK_END_CLASS();
}

void LevelManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tempUnit,"tempUnit");
}

Dynamic LevelManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tempUnit") ) { return tempUnit; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get9Nodes") ) { return get9Nodes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapPartArray") ) { return mapPartArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getUnitAdjacentNodes") ) { return getUnitAdjacentNodes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool LevelManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

Dynamic LevelManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tempUnit") ) { tempUnit=inValue.Cast< ::com::lak::entities::IsoUnit >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LevelManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::com::lak::manager::LevelManager >(); return true; }
	}
	return false;
}

void LevelManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tempUnit","\xb8","\xd3","\x1d","\x9d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::lak::entities::IsoUnit*/ ,(int)offsetof(LevelManager_obj,tempUnit),HX_HCSTRING("tempUnit","\xb8","\xd3","\x1d","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::com::lak::manager::LevelManager*/ ,(void *) &LevelManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tempUnit","\xb8","\xd3","\x1d","\x9d"),
	HX_HCSTRING("get9Nodes","\x4e","\xce","\x05","\x45"),
	HX_HCSTRING("mapPartArray","\x6a","\x6a","\x9c","\x29"),
	HX_HCSTRING("getUnitAdjacentNodes","\x75","\x59","\x18","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LevelManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LevelManager_obj::instance,"instance");
};

#endif

hx::Class LevelManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void LevelManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.manager.LevelManager","\xef","\xba","\x78","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LevelManager_obj::__GetStatic;
	__mClass->mSetStaticField = &LevelManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LevelManager_obj >;
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
