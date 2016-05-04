#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_lak_IsoWorld
#include <com/lak/IsoWorld.h>
#endif
#ifndef INCLUDED_com_lak_utils_GameUtils
#include <com/lak/utils/GameUtils.h>
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
namespace utils{

Void GameUtils_obj::__construct()
{
	return null();
}

//GameUtils_obj::~GameUtils_obj() { }

Dynamic GameUtils_obj::__CreateEmpty() { return  new GameUtils_obj; }
hx::ObjectPtr< GameUtils_obj > GameUtils_obj::__new()
{  hx::ObjectPtr< GameUtils_obj > _result_ = new GameUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic GameUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameUtils_obj > _result_ = new GameUtils_obj();
	_result_->__construct();
	return _result_;}

Float GameUtils_obj::getAngleBetweenPt( ::openfl::geom::Point pt1,::openfl::geom::Point pt2){
	HX_STACK_FRAME("com.lak.utils.GameUtils","getAngleBetweenPt",0x3bcc299e,"com.lak.utils.GameUtils.getAngleBetweenPt","com/lak/utils/GameUtils.hx",11,0xbd51a1e4)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(12)
	Float tmp = (pt2->x - pt1->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Float dx = tmp;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(13)
	Float tmp1 = (pt2->y - pt1->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(14)
	Float tmp2 = dy;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	Float tmp3 = dx;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	Float tmp4 = ::Math_obj::atan2(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(14)
	Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(14)
	Float tmp6 = (Float((int)180) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(14)
	Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(14)
	Float angle = tmp7;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(15)
	bool tmp8 = (angle < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(15)
	if ((tmp8)){
		HX_STACK_LINE(15)
		Float tmp9 = (angle + (int)360);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(15)
		angle = tmp9;
	}
	HX_STACK_LINE(16)
	Float tmp9 = angle;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(16)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameUtils_obj,getAngleBetweenPt,return )

int GameUtils_obj::sortByF( Dynamic a,Dynamic b){
	HX_STACK_FRAME("com.lak.utils.GameUtils","sortByF",0x480e93e0,"com.lak.utils.GameUtils.sortByF","com/lak/utils/GameUtils.hx",19,0xbd51a1e4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(20)
	bool tmp = (a->__Field(HX_HCSTRING("f","\x66","\x00","\x00","\x00"), hx::paccDynamic ) < b->__Field(HX_HCSTRING("f","\x66","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(20)
		return (int)-1;
	}
	HX_STACK_LINE(21)
	bool tmp1 = (a->__Field(HX_HCSTRING("f","\x66","\x00","\x00","\x00"), hx::paccDynamic ) > b->__Field(HX_HCSTRING("f","\x66","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	if ((tmp1)){
		HX_STACK_LINE(21)
		return (int)1;
	}
	HX_STACK_LINE(22)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameUtils_obj,sortByF,return )

int GameUtils_obj::random( int min,int max){
	HX_STACK_FRAME("com.lak.utils.GameUtils","random",0x463b0ad4,"com.lak.utils.GameUtils.random","com/lak/utils/GameUtils.hx",31,0xbd51a1e4)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(32)
	int tmp = min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	int tmp2 = (max - min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameUtils_obj,random,return )

Float GameUtils_obj::dx( ::openfl::geom::Point objectA,::openfl::geom::Point objectB){
	HX_STACK_FRAME("com.lak.utils.GameUtils","dx",0xf25143e5,"com.lak.utils.GameUtils.dx","com/lak/utils/GameUtils.hx",35,0xbd51a1e4)
	HX_STACK_ARG(objectA,"objectA")
	HX_STACK_ARG(objectB,"objectB")
	HX_STACK_LINE(36)
	Float tmp = (objectA->x - objectB->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	Float dx = tmp1;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(37)
	Float tmp2 = dx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameUtils_obj,dx,return )

Float GameUtils_obj::dy( ::openfl::geom::Point objectA,::openfl::geom::Point objectB){
	HX_STACK_FRAME("com.lak.utils.GameUtils","dy",0xf25143e6,"com.lak.utils.GameUtils.dy","com/lak/utils/GameUtils.hx",41,0xbd51a1e4)
	HX_STACK_ARG(objectA,"objectA")
	HX_STACK_ARG(objectB,"objectB")
	HX_STACK_LINE(42)
	Float tmp = (objectA->y - objectB->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Float dy = tmp1;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(43)
	Float tmp2 = dy;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameUtils_obj,dy,return )

int GameUtils_obj::distanceBetweenPt( ::openfl::geom::Point pt1,::openfl::geom::Point pt2){
	HX_STACK_FRAME("com.lak.utils.GameUtils","distanceBetweenPt",0xbce12ec6,"com.lak.utils.GameUtils.distanceBetweenPt","com/lak/utils/GameUtils.hx",45,0xbd51a1e4)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(46)
	Float tmp = (pt1->x - pt2->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	Float tmp1 = ::Math_obj::pow(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Float tmp2 = (pt1->y - pt2->y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = ::Math_obj::pow(tmp2,(int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameUtils_obj,distanceBetweenPt,return )

Float GameUtils_obj::toGridCoord( Float n1,Float factor){
	HX_STACK_FRAME("com.lak.utils.GameUtils","toGridCoord",0x67c8faa3,"com.lak.utils.GameUtils.toGridCoord","com/lak/utils/GameUtils.hx",54,0xbd51a1e4)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(factor,"factor")
	HX_STACK_LINE(55)
	Float tmp = (Float(n1) / Float(factor));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Float tmp2 = factor;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameUtils_obj,toGridCoord,return )

cpp::ArrayBase GameUtils_obj::to2DDimension( ::String str,hx::Null< int >  __o_size){
int size = __o_size.Default(100);
	HX_STACK_FRAME("com.lak.utils.GameUtils","to2DDimension",0x69a98ee8,"com.lak.utils.GameUtils.to2DDimension","com/lak/utils/GameUtils.hx",64,0xbd51a1e4)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(65)
		Array< ::String > ar = str.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(ar,"ar");
		HX_STACK_LINE(66)
		cpp::ArrayBase dArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(dArray,"dArray");
		HX_STACK_LINE(67)
		int indexX = (int)0;		HX_STACK_VAR(indexX,"indexX");
		HX_STACK_LINE(68)
		int indexY = (int)0;		HX_STACK_VAR(indexY,"indexY");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(69)
			int _g = ar->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			while((true)){
				HX_STACK_LINE(69)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(69)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(69)
				if ((tmp1)){
					HX_STACK_LINE(69)
					break;
				}
				HX_STACK_LINE(69)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(69)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(70)
				int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				::com::lak::IsoWorld tmp4 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				int tmp5 = tmp4->PART_NUM_TILE_W;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				Float tmp6 = (Float(tmp3) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				indexX = tmp7;
				HX_STACK_LINE(71)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				::com::lak::IsoWorld tmp9 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(71)
				int tmp10 = tmp9->PART_NUM_TILE_H;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(71)
				int tmp11 = hx::Mod(tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(71)
				int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(71)
				indexY = tmp12;
				HX_STACK_LINE(72)
				Dynamic tmp13 = dArray->__GetItem(indexX);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(72)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(72)
				if ((tmp14)){
					HX_STACK_LINE(72)
					hx::IndexRef((dArray).mPtr,indexX) = Dynamic( Array_obj<Dynamic>::__new() );
				}
				HX_STACK_LINE(73)
				Dynamic tmp15 = dArray->__GetItem(indexX);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				int tmp16 = indexY;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				::String tmp17 = ar->__get(i);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(73)
				hx::IndexRef((tmp15).mPtr,tmp16) = tmp17;
			}
		}
		HX_STACK_LINE(75)
		return dArray;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameUtils_obj,to2DDimension,return )


GameUtils_obj::GameUtils_obj()
{
}

bool GameUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { outValue = dx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"dy") ) { outValue = dy_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sortByF") ) { outValue = sortByF_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toGridCoord") ) { outValue = toGridCoord_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"to2DDimension") ) { outValue = to2DDimension_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAngleBetweenPt") ) { outValue = getAngleBetweenPt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceBetweenPt") ) { outValue = distanceBetweenPt_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameUtils_obj::__mClass,"__mClass");
};

#endif

hx::Class GameUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getAngleBetweenPt","\xcf","\x92","\xf6","\xa7"),
	HX_HCSTRING("sortByF","\xd1","\xc5","\x4e","\x00"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	HX_HCSTRING("dx","\x94","\x57","\x00","\x00"),
	HX_HCSTRING("dy","\x95","\x57","\x00","\x00"),
	HX_HCSTRING("distanceBetweenPt","\xf7","\x97","\x0b","\x29"),
	HX_HCSTRING("toGridCoord","\x14","\x79","\x07","\xa6"),
	HX_HCSTRING("to2DDimension","\x99","\x4b","\x59","\x93"),
	::String(null()) };

void GameUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.utils.GameUtils","\x7d","\x07","\xf0","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GameUtils_obj >;
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
} // end namespace utils
