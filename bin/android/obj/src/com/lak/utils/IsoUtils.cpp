#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_lak_IsoWorld
#include <com/lak/IsoWorld.h>
#endif
#ifndef INCLUDED_com_lak_utils_IsoUtils
#include <com/lak/utils/IsoUtils.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void IsoUtils_obj::__construct()
{
	return null();
}

//IsoUtils_obj::~IsoUtils_obj() { }

Dynamic IsoUtils_obj::__CreateEmpty() { return  new IsoUtils_obj; }
hx::ObjectPtr< IsoUtils_obj > IsoUtils_obj::__new()
{  hx::ObjectPtr< IsoUtils_obj > _result_ = new IsoUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic IsoUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IsoUtils_obj > _result_ = new IsoUtils_obj();
	_result_->__construct();
	return _result_;}

Array< ::String > IsoUtils_obj::spiralWalkStepArray;

::String IsoUtils_obj::ISO_NORTH;

::String IsoUtils_obj::ISO_NORTHEAST;

::String IsoUtils_obj::ISO_EAST;

::String IsoUtils_obj::ISO_SOUTHEAST;

::String IsoUtils_obj::ISO_SOUTH;

::String IsoUtils_obj::ISO_SOUTHWEST;

::String IsoUtils_obj::ISO_WEST;

::String IsoUtils_obj::ISO_NORTHWEST;

::openfl::geom::Point IsoUtils_obj::slideMapTileWalker( ::openfl::geom::Point ptStart,::String dir,hx::Null< bool >  __o_debug){
bool debug = __o_debug.Default(false);
	HX_STACK_FRAME("com.lak.utils.IsoUtils","slideMapTileWalker",0xd6dd07ef,"com.lak.utils.IsoUtils.slideMapTileWalker","com/lak/utils/IsoUtils.hx",26,0x2c91e08d)
	HX_STACK_ARG(ptStart,"ptStart")
	HX_STACK_ARG(dir,"dir")
	HX_STACK_ARG(debug,"debug")
{
		HX_STACK_LINE(28)
		::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::openfl::geom::Point pDest = tmp;		HX_STACK_VAR(pDest,"pDest");
		HX_STACK_LINE(30)
		pDest->x = ptStart->x;
		HX_STACK_LINE(31)
		pDest->y = ptStart->y;
		HX_STACK_LINE(32)
		::String str = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(34)
		::String tmp1 = dir;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::String tmp2 = ::com::lak::utils::IsoUtils_obj::ISO_NORTH;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		if ((tmp3)){
			HX_STACK_LINE(35)
			hx::SubEq(pDest->y,(int)2);
			HX_STACK_LINE(36)
			::String tmp4 = ::com::lak::utils::IsoUtils_obj::ISO_NORTH;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			str = tmp4;
		}
		else{
			HX_STACK_LINE(38)
			::String tmp4 = dir;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			::String tmp5 = ::com::lak::utils::IsoUtils_obj::ISO_NORTHEAST;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			if ((tmp6)){
				HX_STACK_LINE(39)
				(pDest->y)--;
				HX_STACK_LINE(40)
				::String tmp7 = ::com::lak::utils::IsoUtils_obj::ISO_NORTHEAST;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(40)
				str = tmp7;
			}
			else{
				HX_STACK_LINE(42)
				::String tmp7 = dir;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				::String tmp8 = ::com::lak::utils::IsoUtils_obj::ISO_EAST;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(42)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(42)
				if ((tmp9)){
					HX_STACK_LINE(43)
					(pDest->x)++;
					HX_STACK_LINE(44)
					::String tmp10 = ::com::lak::utils::IsoUtils_obj::ISO_EAST;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(44)
					str = tmp10;
				}
				else{
					HX_STACK_LINE(46)
					::String tmp10 = dir;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					::String tmp11 = ::com::lak::utils::IsoUtils_obj::ISO_SOUTHEAST;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					if ((tmp12)){
						HX_STACK_LINE(47)
						(pDest->y)++;
						HX_STACK_LINE(48)
						::String tmp13 = ::com::lak::utils::IsoUtils_obj::ISO_SOUTHEAST;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(48)
						str = tmp13;
					}
					else{
						HX_STACK_LINE(50)
						::String tmp13 = dir;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(50)
						::String tmp14 = ::com::lak::utils::IsoUtils_obj::ISO_SOUTH;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(50)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(50)
						if ((tmp15)){
							HX_STACK_LINE(51)
							hx::AddEq(pDest->y,(int)2);
							HX_STACK_LINE(52)
							::String tmp16 = ::com::lak::utils::IsoUtils_obj::ISO_SOUTH;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(52)
							str = tmp16;
						}
						else{
							HX_STACK_LINE(54)
							::String tmp16 = dir;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(54)
							::String tmp17 = ::com::lak::utils::IsoUtils_obj::ISO_SOUTHWEST;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(54)
							bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(54)
							if ((tmp18)){
								HX_STACK_LINE(55)
								(pDest->x)--;
								HX_STACK_LINE(56)
								(pDest->y)++;
								HX_STACK_LINE(57)
								::String tmp19 = ::com::lak::utils::IsoUtils_obj::ISO_SOUTHWEST;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(57)
								str = tmp19;
							}
							else{
								HX_STACK_LINE(59)
								::String tmp19 = dir;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(59)
								::String tmp20 = ::com::lak::utils::IsoUtils_obj::ISO_WEST;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(59)
								bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(59)
								if ((tmp21)){
									HX_STACK_LINE(60)
									(pDest->x)--;
									HX_STACK_LINE(61)
									::String tmp22 = ::com::lak::utils::IsoUtils_obj::ISO_WEST;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(61)
									str = tmp22;
								}
								else{
									HX_STACK_LINE(63)
									::String tmp22 = dir;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(63)
									::String tmp23 = ::com::lak::utils::IsoUtils_obj::ISO_NORTHWEST;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(63)
									bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(63)
									if ((tmp24)){
										HX_STACK_LINE(64)
										(pDest->x)--;
										HX_STACK_LINE(65)
										(pDest->y)--;
										HX_STACK_LINE(66)
										::String tmp25 = ::com::lak::utils::IsoUtils_obj::ISO_NORTHWEST;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(66)
										str = tmp25;
									}
									else{
										HX_STACK_LINE(68)
										str = HX_HCSTRING(" PAS DE DIRECTION ","\xe2","\x77","\xcf","\xe4");
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(70)
		bool tmp4 = debug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		if ((tmp4)){
			HX_STACK_LINE(70)
			::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("IsoUtils.hx","\x72","\xff","\xec","\xe3"),70,HX_HCSTRING("com.lak.utils.IsoUtils","\xce","\x1d","\x7d","\xab"),HX_HCSTRING("slideMapTileWalker","\x4f","\xe9","\x3d","\x8c"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			::haxe::Log_obj::trace(tmp5,tmp6);
		}
		HX_STACK_LINE(71)
		::openfl::geom::Point tmp5 = pDest;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IsoUtils_obj,slideMapTileWalker,return )

::openfl::geom::Point IsoUtils_obj::mapTilePosition( ::openfl::geom::Point ptMap,hx::Null< int >  __o_iTileWidth,hx::Null< int >  __o_iTileHeight){
int iTileWidth = __o_iTileWidth.Default(64);
int iTileHeight = __o_iTileHeight.Default(32);
	HX_STACK_FRAME("com.lak.utils.IsoUtils","mapTilePosition",0x21875413,"com.lak.utils.IsoUtils.mapTilePosition","com/lak/utils/IsoUtils.hx",80,0x2c91e08d)
	HX_STACK_ARG(ptMap,"ptMap")
	HX_STACK_ARG(iTileWidth,"iTileWidth")
	HX_STACK_ARG(iTileHeight,"iTileHeight")
{
		HX_STACK_LINE(81)
		::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::openfl::geom::Point ptPlot = tmp;		HX_STACK_VAR(ptPlot,"ptPlot");
		HX_STACK_LINE(82)
		Float tmp1 = (ptMap->x * iTileWidth);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Float tmp2 = ptMap->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		int tmp4 = (int(tmp3) & int((int)1));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		int tmp5 = (int(iTileWidth) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		Float tmp7 = (tmp1 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		ptPlot->x = tmp8;
		HX_STACK_LINE(83)
		Float tmp9 = ptMap->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		int tmp11 = iTileHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		int tmp13 = (int(tmp12) >> int((int)1));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(83)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(83)
		ptPlot->y = tmp14;
		HX_STACK_LINE(84)
		::openfl::geom::Point tmp15 = ptPlot;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(84)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IsoUtils_obj,mapTilePosition,return )

::openfl::geom::Point IsoUtils_obj::getTileAt( ::openfl::geom::Point pt,hx::Null< bool >  __o_bl){
bool bl = __o_bl.Default(false);
	HX_STACK_FRAME("com.lak.utils.IsoUtils","getTileAt",0xd6be6a57,"com.lak.utils.IsoUtils.getTileAt","com/lak/utils/IsoUtils.hx",93,0x2c91e08d)
	HX_STACK_ARG(pt,"pt")
	HX_STACK_ARG(bl,"bl")
{
		HX_STACK_LINE(94)
		Float tmp = pt->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::com::lak::IsoWorld tmp1 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		int tmp2 = tmp1->tileW;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		Float tmp5 = pt->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		::com::lak::IsoWorld tmp6 = ::com::lak::IsoWorld_obj::instance;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		int tmp7 = tmp6->halfH;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(tmp4,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IsoUtils_obj,getTileAt,return )

int IsoUtils_obj::getPos( Float _ax,Float _ay,Float _bx,Float _by,Float _cx,Float _cy){
	HX_STACK_FRAME("com.lak.utils.IsoUtils","getPos",0x47a8453e,"com.lak.utils.IsoUtils.getPos","com/lak/utils/IsoUtils.hx",97,0x2c91e08d)
	HX_STACK_ARG(_ax,"_ax")
	HX_STACK_ARG(_ay,"_ay")
	HX_STACK_ARG(_bx,"_bx")
	HX_STACK_ARG(_by,"_by")
	HX_STACK_ARG(_cx,"_cx")
	HX_STACK_ARG(_cy,"_cy")
	HX_STACK_LINE(98)
	Float tmp = (_by - _ay);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	Float tmp1 = (_bx - _ax);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	Float slope = tmp2;		HX_STACK_VAR(slope,"slope");
	HX_STACK_LINE(99)
	Float tmp3 = _ay;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	Float tmp4 = (_ax * slope);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	Float yIntercept = tmp5;		HX_STACK_VAR(yIntercept,"yIntercept");
	HX_STACK_LINE(100)
	Float tmp6 = (slope * _cx);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(100)
	Float tmp7 = yIntercept;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(100)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(100)
	Float cSolution = tmp8;		HX_STACK_VAR(cSolution,"cSolution");
	HX_STACK_LINE(101)
	bool tmp9 = (slope != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(101)
	if ((tmp9)){
		HX_STACK_LINE(102)
		bool tmp10 = (_cy > cSolution);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(102)
		if ((tmp10)){
			HX_STACK_LINE(102)
			bool tmp11 = (_bx > _ax);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			if ((tmp11)){
				HX_STACK_LINE(102)
				tmp12 = (int)1;
			}
			else{
				HX_STACK_LINE(102)
				tmp12 = (int)-1;
			}
			HX_STACK_LINE(102)
			return tmp12;
		}
		HX_STACK_LINE(103)
		bool tmp11 = (_cy < cSolution);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(103)
		if ((tmp11)){
			HX_STACK_LINE(103)
			bool tmp12 = (_bx > _ax);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(103)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			if ((tmp12)){
				HX_STACK_LINE(103)
				tmp13 = (int)-1;
			}
			else{
				HX_STACK_LINE(103)
				tmp13 = (int)1;
			}
			HX_STACK_LINE(103)
			return tmp13;
		}
		HX_STACK_LINE(104)
		return (int)0;
	}
	HX_STACK_LINE(106)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(IsoUtils_obj,getPos,return )


IsoUtils_obj::IsoUtils_obj()
{
}

bool IsoUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getPos") ) { outValue = getPos_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ISO_EAST") ) { outValue = ISO_EAST; return true;  }
		if (HX_FIELD_EQ(inName,"ISO_WEST") ) { outValue = ISO_WEST; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ISO_NORTH") ) { outValue = ISO_NORTH; return true;  }
		if (HX_FIELD_EQ(inName,"ISO_SOUTH") ) { outValue = ISO_SOUTH; return true;  }
		if (HX_FIELD_EQ(inName,"getTileAt") ) { outValue = getTileAt_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ISO_NORTHEAST") ) { outValue = ISO_NORTHEAST; return true;  }
		if (HX_FIELD_EQ(inName,"ISO_SOUTHEAST") ) { outValue = ISO_SOUTHEAST; return true;  }
		if (HX_FIELD_EQ(inName,"ISO_SOUTHWEST") ) { outValue = ISO_SOUTHWEST; return true;  }
		if (HX_FIELD_EQ(inName,"ISO_NORTHWEST") ) { outValue = ISO_NORTHWEST; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mapTilePosition") ) { outValue = mapTilePosition_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"slideMapTileWalker") ) { outValue = slideMapTileWalker_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"spiralWalkStepArray") ) { outValue = spiralWalkStepArray; return true;  }
	}
	return false;
}

bool IsoUtils_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ISO_EAST") ) { ISO_EAST=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ISO_WEST") ) { ISO_WEST=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ISO_NORTH") ) { ISO_NORTH=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ISO_SOUTH") ) { ISO_SOUTH=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ISO_NORTHEAST") ) { ISO_NORTHEAST=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ISO_SOUTHEAST") ) { ISO_SOUTHEAST=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ISO_SOUTHWEST") ) { ISO_SOUTHWEST=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ISO_NORTHWEST") ) { ISO_NORTHWEST=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"spiralWalkStepArray") ) { spiralWalkStepArray=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &IsoUtils_obj::spiralWalkStepArray,HX_HCSTRING("spiralWalkStepArray","\x73","\x2d","\x39","\xe1")},
	{hx::fsString,(void *) &IsoUtils_obj::ISO_NORTH,HX_HCSTRING("ISO_NORTH","\xcb","\x7a","\xf0","\xa0")},
	{hx::fsString,(void *) &IsoUtils_obj::ISO_NORTHEAST,HX_HCSTRING("ISO_NORTHEAST","\x48","\x90","\xda","\xcb")},
	{hx::fsString,(void *) &IsoUtils_obj::ISO_EAST,HX_HCSTRING("ISO_EAST","\x97","\xfc","\xe7","\x41")},
	{hx::fsString,(void *) &IsoUtils_obj::ISO_SOUTHEAST,HX_HCSTRING("ISO_SOUTHEAST","\x90","\x01","\x52","\x67")},
	{hx::fsString,(void *) &IsoUtils_obj::ISO_SOUTH,HX_HCSTRING("ISO_SOUTH","\x13","\xa8","\xf3","\x81")},
	{hx::fsString,(void *) &IsoUtils_obj::ISO_SOUTHWEST,HX_HCSTRING("ISO_SOUTHWEST","\xc2","\xe1","\x3a","\x73")},
	{hx::fsString,(void *) &IsoUtils_obj::ISO_WEST,HX_HCSTRING("ISO_WEST","\xc9","\xdc","\xd0","\x4d")},
	{hx::fsString,(void *) &IsoUtils_obj::ISO_NORTHWEST,HX_HCSTRING("ISO_NORTHWEST","\x7a","\x70","\xc3","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IsoUtils_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::spiralWalkStepArray,"spiralWalkStepArray");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::ISO_NORTH,"ISO_NORTH");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::ISO_NORTHEAST,"ISO_NORTHEAST");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::ISO_EAST,"ISO_EAST");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::ISO_SOUTHEAST,"ISO_SOUTHEAST");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::ISO_SOUTH,"ISO_SOUTH");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::ISO_SOUTHWEST,"ISO_SOUTHWEST");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::ISO_WEST,"ISO_WEST");
	HX_MARK_MEMBER_NAME(IsoUtils_obj::ISO_NORTHWEST,"ISO_NORTHWEST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::spiralWalkStepArray,"spiralWalkStepArray");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::ISO_NORTH,"ISO_NORTH");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::ISO_NORTHEAST,"ISO_NORTHEAST");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::ISO_EAST,"ISO_EAST");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::ISO_SOUTHEAST,"ISO_SOUTHEAST");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::ISO_SOUTH,"ISO_SOUTH");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::ISO_SOUTHWEST,"ISO_SOUTHWEST");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::ISO_WEST,"ISO_WEST");
	HX_VISIT_MEMBER_NAME(IsoUtils_obj::ISO_NORTHWEST,"ISO_NORTHWEST");
};

#endif

hx::Class IsoUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("spiralWalkStepArray","\x73","\x2d","\x39","\xe1"),
	HX_HCSTRING("ISO_NORTH","\xcb","\x7a","\xf0","\xa0"),
	HX_HCSTRING("ISO_NORTHEAST","\x48","\x90","\xda","\xcb"),
	HX_HCSTRING("ISO_EAST","\x97","\xfc","\xe7","\x41"),
	HX_HCSTRING("ISO_SOUTHEAST","\x90","\x01","\x52","\x67"),
	HX_HCSTRING("ISO_SOUTH","\x13","\xa8","\xf3","\x81"),
	HX_HCSTRING("ISO_SOUTHWEST","\xc2","\xe1","\x3a","\x73"),
	HX_HCSTRING("ISO_WEST","\xc9","\xdc","\xd0","\x4d"),
	HX_HCSTRING("ISO_NORTHWEST","\x7a","\x70","\xc3","\xd7"),
	HX_HCSTRING("slideMapTileWalker","\x4f","\xe9","\x3d","\x8c"),
	HX_HCSTRING("mapTilePosition","\xb3","\xd6","\x65","\x22"),
	HX_HCSTRING("getTileAt","\xf7","\x34","\x7f","\x9a"),
	HX_HCSTRING("getPos","\x9e","\x96","\x24","\xa3"),
	::String(null()) };

void IsoUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.utils.IsoUtils","\xce","\x1d","\x7d","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IsoUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &IsoUtils_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< IsoUtils_obj >;
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

void IsoUtils_obj::__boot()
{
	spiralWalkStepArray= Array_obj< ::String >::__new().Add(HX_HCSTRING("N","\x4e","\x00","\x00","\x00")).Add(HX_HCSTRING("NE","\x37","\x44","\x00","\x00")).Add(HX_HCSTRING("E","\x45","\x00","\x00","\x00")).Add(HX_HCSTRING("SE","\x92","\x48","\x00","\x00")).Add(HX_HCSTRING("S","\x53","\x00","\x00","\x00")).Add(HX_HCSTRING("SW","\xa4","\x48","\x00","\x00")).Add(HX_HCSTRING("W","\x57","\x00","\x00","\x00")).Add(HX_HCSTRING("NW","\x49","\x44","\x00","\x00"));
	ISO_NORTH= HX_HCSTRING("N","\x4e","\x00","\x00","\x00");
	ISO_NORTHEAST= HX_HCSTRING("NE","\x37","\x44","\x00","\x00");
	ISO_EAST= HX_HCSTRING("E","\x45","\x00","\x00","\x00");
	ISO_SOUTHEAST= HX_HCSTRING("SE","\x92","\x48","\x00","\x00");
	ISO_SOUTH= HX_HCSTRING("S","\x53","\x00","\x00","\x00");
	ISO_SOUTHWEST= HX_HCSTRING("SW","\xa4","\x48","\x00","\x00");
	ISO_WEST= HX_HCSTRING("W","\x57","\x00","\x00","\x00");
	ISO_NORTHWEST= HX_HCSTRING("NW","\x49","\x44","\x00","\x00");
}

} // end namespace com
} // end namespace lak
} // end namespace utils
