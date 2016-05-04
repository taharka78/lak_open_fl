#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_lak_entities_IsoObject
#include <com/lak/entities/IsoObject.h>
#endif
#ifndef INCLUDED_com_lak_entities_IsoUnit
#include <com/lak/entities/IsoUnit.h>
#endif
#ifndef INCLUDED_com_lak_entities_ai_Astar
#include <com/lak/entities/ai/Astar.h>
#endif
#ifndef INCLUDED_com_lak_manager_LevelManager
#include <com/lak/manager/LevelManager.h>
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
namespace com{
namespace lak{
namespace entities{
namespace ai{

Void Astar_obj::__construct()
{
	return null();
}

//Astar_obj::~Astar_obj() { }

Dynamic Astar_obj::__CreateEmpty() { return  new Astar_obj; }
hx::ObjectPtr< Astar_obj > Astar_obj::__new()
{  hx::ObjectPtr< Astar_obj > _result_ = new Astar_obj();
	_result_->__construct();
	return _result_;}

Dynamic Astar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Astar_obj > _result_ = new Astar_obj();
	_result_->__construct();
	return _result_;}

Float Astar_obj::_straightCost;

Float Astar_obj::_diagCost;

::com::lak::entities::IsoUnit Astar_obj::_unit;

Void Astar_obj::findPath( ::com::lak::entities::IsoUnit unit){
{
		HX_STACK_FRAME("com.lak.entities.ai.Astar","findPath",0xcb5429b7,"com.lak.entities.ai.Astar.findPath","com/lak/entities/ai/Astar.hx",22,0x239869ab)
		HX_STACK_ARG(unit,"unit")
		HX_STACK_LINE(23)
		::com::lak::entities::ai::Astar_obj::_unit = unit;
		HX_STACK_LINE(24)
		::com::lak::manager::LevelManager tmp = ::com::lak::manager::LevelManager_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::com::lak::entities::IsoUnit tmp1 = ::com::lak::entities::ai::Astar_obj::_unit;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		tmp->get9Nodes(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Astar_obj,findPath,(void))

Float Astar_obj::diagonal( ::openfl::geom::Point node,::openfl::geom::Point endNode){
	HX_STACK_FRAME("com.lak.entities.ai.Astar","diagonal",0xf506bc2e,"com.lak.entities.ai.Astar.diagonal","com/lak/entities/ai/Astar.hx",32,0x239869ab)
	HX_STACK_ARG(node,"node")
	HX_STACK_ARG(endNode,"endNode")
	HX_STACK_LINE(33)
	Float tmp = (node->x - endNode->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Float dx = tmp1;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(34)
	Float tmp2 = (node->y - endNode->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	Float dy = tmp3;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(35)
	Float tmp4 = dx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	Float tmp5 = dy;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	Float tmp6 = ::Math_obj::min(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(35)
	Float diag = tmp6;		HX_STACK_VAR(diag,"diag");
	HX_STACK_LINE(36)
	Float tmp7 = (dx + dy);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	Float straight = tmp7;		HX_STACK_VAR(straight,"straight");
	HX_STACK_LINE(37)
	Float tmp8 = ::com::lak::entities::ai::Astar_obj::_diagCost;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	Float tmp9 = diag;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(37)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(37)
	Float tmp11 = ::com::lak::entities::ai::Astar_obj::_straightCost;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(37)
	Float tmp12 = straight;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(37)
	Float tmp13 = ((int)2 * diag);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(37)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(37)
	Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(37)
	Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(37)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Astar_obj,diagonal,return )

Float Astar_obj::manhattan( ::openfl::geom::Point newNode,::openfl::geom::Point end){
	HX_STACK_FRAME("com.lak.entities.ai.Astar","manhattan",0x8922faa7,"com.lak.entities.ai.Astar.manhattan","com/lak/entities/ai/Astar.hx",40,0x239869ab)
	HX_STACK_ARG(newNode,"newNode")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(41)
	Float tmp = (newNode->x - end->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	Float tmp2 = (newNode->y - end->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Astar_obj,manhattan,return )

int Astar_obj::heuristic( ::openfl::geom::Point pt1,::openfl::geom::Point pt2){
	HX_STACK_FRAME("com.lak.entities.ai.Astar","heuristic",0x0c690571,"com.lak.entities.ai.Astar.heuristic","com/lak/entities/ai/Astar.hx",43,0x239869ab)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(44)
	Float tmp = (pt1->x - pt2->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	Float tmp1 = ::Math_obj::pow(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	Float tmp2 = (pt1->y - pt2->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	Float tmp3 = ::Math_obj::pow(tmp2,(int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Astar_obj,heuristic,return )


Astar_obj::Astar_obj()
{
}

bool Astar_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_unit") ) { outValue = _unit; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findPath") ) { outValue = findPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"diagonal") ) { outValue = diagonal_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_diagCost") ) { outValue = _diagCost; return true;  }
		if (HX_FIELD_EQ(inName,"manhattan") ) { outValue = manhattan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"heuristic") ) { outValue = heuristic_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_straightCost") ) { outValue = _straightCost; return true;  }
	}
	return false;
}

bool Astar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_unit") ) { _unit=ioValue.Cast< ::com::lak::entities::IsoUnit >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_diagCost") ) { _diagCost=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_straightCost") ) { _straightCost=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Astar_obj::_straightCost,HX_HCSTRING("_straightCost","\x46","\xe7","\xe1","\x1b")},
	{hx::fsFloat,(void *) &Astar_obj::_diagCost,HX_HCSTRING("_diagCost","\xf7","\xea","\x19","\xf1")},
	{hx::fsObject /*::com::lak::entities::IsoUnit*/ ,(void *) &Astar_obj::_unit,HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Astar_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Astar_obj::_straightCost,"_straightCost");
	HX_MARK_MEMBER_NAME(Astar_obj::_diagCost,"_diagCost");
	HX_MARK_MEMBER_NAME(Astar_obj::_unit,"_unit");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Astar_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Astar_obj::_straightCost,"_straightCost");
	HX_VISIT_MEMBER_NAME(Astar_obj::_diagCost,"_diagCost");
	HX_VISIT_MEMBER_NAME(Astar_obj::_unit,"_unit");
};

#endif

hx::Class Astar_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_straightCost","\x46","\xe7","\xe1","\x1b"),
	HX_HCSTRING("_diagCost","\xf7","\xea","\x19","\xf1"),
	HX_HCSTRING("_unit","\x63","\xe6","\xba","\x00"),
	HX_HCSTRING("findPath","\x7e","\xf2","\xe5","\x9c"),
	HX_HCSTRING("diagonal","\xf5","\x84","\x98","\xc6"),
	HX_HCSTRING("manhattan","\x00","\xe0","\x20","\x17"),
	HX_HCSTRING("heuristic","\xca","\xea","\x66","\x9a"),
	::String(null()) };

void Astar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.entities.ai.Astar","\x55","\xf4","\x4d","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Astar_obj::__GetStatic;
	__mClass->mSetStaticField = &Astar_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Astar_obj >;
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

void Astar_obj::__boot()
{
	_straightCost= ((Float)1);
	_diagCost= ((Float)1);
}

} // end namespace com
} // end namespace lak
} // end namespace entities
} // end namespace ai
