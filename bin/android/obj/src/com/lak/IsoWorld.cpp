#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_lak_Camera
#include <com/lak/Camera.h>
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
#ifndef INCLUDED_com_lak_manager_AttackMananger
#include <com/lak/manager/AttackMananger.h>
#endif
#ifndef INCLUDED_com_lak_manager_EntitiesManager
#include <com/lak/manager/EntitiesManager.h>
#endif
#ifndef INCLUDED_com_lak_manager_LevelManager
#include <com/lak/manager/LevelManager.h>
#endif
#ifndef INCLUDED_com_lak_manager_SpritesheetManager
#include <com/lak/manager/SpritesheetManager.h>
#endif
#ifndef INCLUDED_com_lak_utils_GameUtils
#include <com/lak/utils/GameUtils.h>
#endif
#ifndef INCLUDED_com_lak_utils_IsoUtils
#include <com/lak/utils/IsoUtils.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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
#ifndef INCLUDED_spritesheet_Spritesheet
#include <spritesheet/Spritesheet.h>
#endif
#ifndef INCLUDED_spritesheet_data_SpritesheetFrame
#include <spritesheet/data/SpritesheetFrame.h>
#endif
namespace com{
namespace lak{

Void IsoWorld_obj::__construct()
{
HX_STACK_FRAME("com.lak.IsoWorld","new",0x6f413c44,"com.lak.IsoWorld.new","com/lak/IsoWorld.hx",29,0x2e2b8e6a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(73)
	this->worldObject = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(72)
	this->pt = ::openfl::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(68)
	this->tileW = (int)96;
	HX_STACK_LINE(67)
	this->tileH = (int)48;
	HX_STACK_LINE(63)
	this->OFFSET_COLONNE_WORLD = (int)0;
	HX_STACK_LINE(62)
	this->OFFSET_LIGNE_WORLD = (int)0;
	HX_STACK_LINE(60)
	this->curentLevel = HX_HCSTRING("0-0","\x93","\x93","\x24","\x00");
	HX_STACK_LINE(58)
	this->offsetYCost = (int)0;
	HX_STACK_LINE(57)
	this->offsetXCost = (int)0;
	HX_STACK_LINE(49)
	this->levelData = ((cpp::ArrayBase)(Array_obj< ::Dynamic >::__new()));
	HX_STACK_LINE(40)
	this->mtrx = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(34)
	this->tilesArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(33)
	this->aWorld = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(84)
	super::__construct();
	HX_STACK_LINE(85)
	::com::lak::IsoWorld_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(86)
	Dynamic tmp = this->onWorldaddedToStage_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	this->addEventListener(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),tmp,null(),null(),null());
}
;
	return null();
}

//IsoWorld_obj::~IsoWorld_obj() { }

Dynamic IsoWorld_obj::__CreateEmpty() { return  new IsoWorld_obj; }
hx::ObjectPtr< IsoWorld_obj > IsoWorld_obj::__new()
{  hx::ObjectPtr< IsoWorld_obj > _result_ = new IsoWorld_obj();
	_result_->__construct();
	return _result_;}

Dynamic IsoWorld_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IsoWorld_obj > _result_ = new IsoWorld_obj();
	_result_->__construct();
	return _result_;}

Void IsoWorld_obj::onWorldaddedToStage( ::openfl::events::Event e){
{
		HX_STACK_FRAME("com.lak.IsoWorld","onWorldaddedToStage",0x1de78b7a,"com.lak.IsoWorld.onWorldaddedToStage","com/lak/IsoWorld.hx",92,0x2e2b8e6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(93)
		::Main tmp = ::Main_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::spritesheet::Spritesheet tmp1 = tmp->sprSheetManager->getSpritesheet(HX_HCSTRING("world","\x52","\x96","\x64","\xce"),HX_HCSTRING("grass","\xf6","\x11","\xea","\x99"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		this->worldGrass = tmp1;
		HX_STACK_LINE(95)
		this->COLONNE_VISIBLE_OFFSET = (int)0;
		HX_STACK_LINE(96)
		this->LIGNE_VISIBLE_OFFSET = (int)0;
		HX_STACK_LINE(98)
		int tmp2 = this->tileH;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		int tmp3 = (int(tmp2) >> int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		this->halfH = tmp3;
		HX_STACK_LINE(99)
		int tmp4 = this->tileW;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		this->halfW = tmp5;
		HX_STACK_LINE(100)
		::com::lak::manager::LevelManager tmp6 = ::com::lak::manager::LevelManager_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		this->levelManager = tmp6;
		HX_STACK_LINE(101)
		::com::lak::manager::EntitiesManager tmp7 = ::com::lak::manager::EntitiesManager_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		this->entitiesManager = tmp7;
		HX_STACK_LINE(102)
		::com::lak::manager::AttackMananger tmp8 = ::com::lak::manager::AttackMananger_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		this->attackMananger = tmp8;
		HX_STACK_LINE(103)
		::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		::com::lak::Camera tmp10 = ::com::lak::Camera_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(103)
		this->wCamera = tmp10;
		HX_STACK_LINE(104)
		this->worldSize(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoWorld_obj,onWorldaddedToStage,(void))

Void IsoWorld_obj::worldSize( hx::Null< bool >  __o__first){
bool _first = __o__first.Default(false);
	HX_STACK_FRAME("com.lak.IsoWorld","worldSize",0xb9dd6317,"com.lak.IsoWorld.worldSize","com/lak/IsoWorld.hx",111,0x2e2b8e6a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_first,"_first")
{
		HX_STACK_LINE(112)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		this->VIEW_WIDTH = tmp->stageWidth;
		HX_STACK_LINE(113)
		::openfl::display::Stage tmp1 = this->stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		this->VIEW_HEIGHT = tmp1->stageHeight;
		HX_STACK_LINE(115)
		this->PART_NUM_TILE_W = (int)100;
		HX_STACK_LINE(116)
		this->PART_NUM_TILE_H = (int)100;
		HX_STACK_LINE(118)
		int tmp2 = this->PART_NUM_TILE_W;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		this->NB_COLONNE_WORLD = tmp2;
		HX_STACK_LINE(119)
		int tmp3 = this->PART_NUM_TILE_H;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		this->NB_LIGNE_WORLD = tmp3;
		HX_STACK_LINE(121)
		int tmp4 = this->VIEW_WIDTH;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		int tmp5 = this->tileW;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(121)
		int tmp8 = (tmp7 + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(121)
		this->NB_TILE_W = tmp8;
		HX_STACK_LINE(122)
		int tmp9 = this->VIEW_HEIGHT;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(122)
		int tmp10 = this->halfH;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(122)
		Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(122)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(122)
		int tmp13 = (tmp12 + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(122)
		this->NB_TILE_H = tmp13;
		HX_STACK_LINE(130)
		int tmp14 = this->NB_TILE_H;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(130)
		::String tmp15 = (HX_HCSTRING("NB_TILE_H  = ","\xe5","\xd3","\x13","\xfc") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(130)
		::String tmp16 = (tmp15 + HX_HCSTRING(" WIDTH ","\x9a","\x13","\x2e","\x31"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(130)
		int tmp17 = this->VIEW_WIDTH;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(130)
		::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(130)
		Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("IsoWorld.hx","\xf1","\x9d","\xb2","\x15"),130,HX_HCSTRING("com.lak.IsoWorld","\x52","\x0a","\x5d","\xa5"),HX_HCSTRING("worldSize","\x33","\xf4","\x6f","\x59"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(130)
		::haxe::Log_obj::trace(tmp18,tmp19);
		HX_STACK_LINE(131)
		int tmp20 = this->NB_TILE_W;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(131)
		::String tmp21 = (HX_HCSTRING("NB_TILE_W = ","\x52","\xd8","\x90","\xff") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(131)
		::String tmp22 = (tmp21 + HX_HCSTRING(" HEIGHT ","\x39","\xfa","\x5c","\xa6"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(131)
		int tmp23 = this->VIEW_HEIGHT;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(131)
		::String tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(131)
		Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("IsoWorld.hx","\xf1","\x9d","\xb2","\x15"),131,HX_HCSTRING("com.lak.IsoWorld","\x52","\x0a","\x5d","\xa5"),HX_HCSTRING("worldSize","\x33","\xf4","\x6f","\x59"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(131)
		::haxe::Log_obj::trace(tmp24,tmp25);
		HX_STACK_LINE(132)
		Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("IsoWorld.hx","\xf1","\x9d","\xb2","\x15"),132,HX_HCSTRING("com.lak.IsoWorld","\x52","\x0a","\x5d","\xa5"),HX_HCSTRING("worldSize","\x33","\xf4","\x6f","\x59"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(132)
		::haxe::Log_obj::trace(HX_HCSTRING("setup map data ","\xcf","\x0a","\xfd","\x1b"),tmp26);
		HX_STACK_LINE(134)
		::String tmp27 = this->curentLevel;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(134)
		this->setupMapData(tmp27,(int)1,(int)1,true);
		HX_STACK_LINE(135)
		bool tmp28 = (_first == false);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(135)
		if ((tmp28)){
			HX_STACK_LINE(135)
			::openfl::display::Stage tmp29 = this->stage;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(135)
			::openfl::display::Bitmap tmp30 = this->floor;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(135)
			tmp29->removeChild(tmp30);
		}
		HX_STACK_LINE(136)
		int tmp29 = this->VIEW_WIDTH;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(136)
		int tmp30 = this->tileW;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(136)
		int tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(136)
		int tmp32 = this->VIEW_HEIGHT;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(136)
		int tmp33 = this->tileH;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(136)
		int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(136)
		::openfl::display::BitmapData tmp35 = ::openfl::display::BitmapData_obj::__new(tmp31,tmp34,null(),null());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(136)
		this->groundCanvas = tmp35;
		HX_STACK_LINE(138)
		::com::lak::manager::EntitiesManager tmp36 = this->entitiesManager;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(138)
		tmp36->updateViewBounds();
		HX_STACK_LINE(140)
		::openfl::display::BitmapData tmp37 = this->groundCanvas;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(140)
		::openfl::display::Bitmap tmp38 = ::openfl::display::Bitmap_obj::__new(tmp37,null(),null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(140)
		this->floor = tmp38;
		HX_STACK_LINE(141)
		::openfl::display::Bitmap tmp39 = this->floor;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(141)
		int tmp40 = this->halfW;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(141)
		int tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(141)
		tmp39->set_x(tmp41);
		HX_STACK_LINE(142)
		::openfl::display::Bitmap tmp42 = this->floor;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(142)
		int tmp43 = this->halfH;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(142)
		int tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(142)
		tmp42->set_y(tmp44);
		HX_STACK_LINE(143)
		::openfl::display::Stage tmp45 = this->stage;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(143)
		::openfl::display::Bitmap tmp46 = this->floor;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(143)
		tmp45->addChild(tmp46);
		HX_STACK_LINE(144)
		::openfl::display::Stage tmp47 = this->stage;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(144)
		::openfl::display::Bitmap tmp48 = this->floor;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(144)
		tmp47->setChildIndex(tmp48,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoWorld_obj,worldSize,(void))

Void IsoWorld_obj::setupMapData( ::String __o_partNum,hx::Null< int >  __o_sensX,hx::Null< int >  __o_sensY,hx::Null< bool >  __o_creation){
::String partNum = __o_partNum.Default(HX_HCSTRING("0-0","\x93","\x93","\x24","\x00"));
int sensX = __o_sensX.Default(1);
int sensY = __o_sensY.Default(1);
bool creation = __o_creation.Default(false);
	HX_STACK_FRAME("com.lak.IsoWorld","setupMapData",0x1373f585,"com.lak.IsoWorld.setupMapData","com/lak/IsoWorld.hx",152,0x2e2b8e6a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(partNum,"partNum")
	HX_STACK_ARG(sensX,"sensX")
	HX_STACK_ARG(sensY,"sensY")
	HX_STACK_ARG(creation,"creation")
{
		HX_STACK_LINE(153)
		::String tmp = (HX_HCSTRING("map : part_","\x22","\x4f","\x75","\x1f") + partNum);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		::String tmp1 = (tmp + HX_HCSTRING(".txt","\x02","\x3f","\xc0","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		::String tmp2 = (tmp1 + HX_HCSTRING(" SENSY ==> ","\x60","\x09","\xee","\x62"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		bool tmp3 = (sensY == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		if ((tmp3)){
			HX_STACK_LINE(153)
			tmp4 = HX_HCSTRING("vers le haut","\x2f","\xf5","\xda","\x4e");
		}
		else{
			HX_STACK_LINE(153)
			tmp4 = HX_HCSTRING("vers le bas ","\x63","\xab","\xe3","\x4a");
		}
		HX_STACK_LINE(153)
		::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		::String tmp6 = (tmp5 + HX_HCSTRING(" SENSX ==>","\x3f","\x4a","\xee","\x73"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		bool tmp7 = (sensX == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(153)
		if ((tmp7)){
			HX_STACK_LINE(153)
			tmp8 = HX_HCSTRING("vers la gauche","\xc0","\x2e","\x34","\xa8");
		}
		else{
			HX_STACK_LINE(153)
			tmp8 = HX_HCSTRING("vers la droite ","\x2c","\x5f","\x5e","\x64");
		}
		HX_STACK_LINE(153)
		::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(153)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("IsoWorld.hx","\xf1","\x9d","\xb2","\x15"),153,HX_HCSTRING("com.lak.IsoWorld","\x52","\x0a","\x5d","\xa5"),HX_HCSTRING("setupMapData","\xe9","\xfd","\x93","\xe5"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(153)
		::haxe::Log_obj::trace(tmp9,tmp10);
		HX_STACK_LINE(155)
		bool tmp11 = (sensX == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(155)
		if ((tmp11)){
			HX_STACK_LINE(156)
			int tmp12 = this->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			::String tmp13 = partNum.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			Float tmp14 = ::Std_obj::parseFloat(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(156)
			Float tmp15 = ((int)100 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(156)
			Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(156)
			this->LIGNE_VISIBLE_OFFSET = tmp16;
			HX_STACK_LINE(157)
			Float tmp17 = this->LIGNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(157)
			bool tmp18 = (tmp17 < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(157)
			if ((tmp18)){
				HX_STACK_LINE(157)
				this->LIGNE_VISIBLE_OFFSET = (int)0;
			}
		}
		else{
			HX_STACK_LINE(158)
			bool tmp12 = (sensX == (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(158)
			if ((tmp12)){
				HX_STACK_LINE(159)
				int tmp13 = this->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(159)
				this->LIGNE_VISIBLE_OFFSET = tmp13;
			}
		}
		HX_STACK_LINE(162)
		bool tmp12 = (sensY == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(162)
		if ((tmp12)){
			HX_STACK_LINE(163)
			int tmp13 = this->OFFSET_COLONNE_WORLD;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(163)
			::String tmp14 = partNum.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(163)
			Float tmp15 = ::Std_obj::parseFloat(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(163)
			Float tmp16 = ((int)100 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(163)
			Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(163)
			this->COLONNE_VISIBLE_OFFSET = tmp17;
			HX_STACK_LINE(164)
			Float tmp18 = this->COLONNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(164)
			bool tmp19 = (tmp18 < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(164)
			if ((tmp19)){
				HX_STACK_LINE(164)
				this->COLONNE_VISIBLE_OFFSET = (int)0;
			}
		}
		else{
			HX_STACK_LINE(166)
			bool tmp13 = (sensY == (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(166)
			if ((tmp13)){
				HX_STACK_LINE(166)
				int tmp14 = this->OFFSET_COLONNE_WORLD;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(166)
				this->COLONNE_VISIBLE_OFFSET = tmp14;
				HX_STACK_LINE(166)
				int tmp15 = this->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(166)
				this->LIGNE_VISIBLE_OFFSET = tmp15;
			}
		}
		HX_STACK_LINE(168)
		bool tmp13 = (sensX == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(168)
		if ((tmp13)){
			HX_STACK_LINE(169)
			int tmp14 = this->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(169)
			::String tmp15 = partNum.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(169)
			Float tmp16 = ::Std_obj::parseFloat(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(169)
			Float tmp17 = ((int)100 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(169)
			Float tmp18 = (tmp14 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(169)
			this->LIGNE_VISIBLE_OFFSET = tmp18;
			HX_STACK_LINE(170)
			Float tmp19 = this->LIGNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(170)
			bool tmp20 = (tmp19 < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(170)
			if ((tmp20)){
				HX_STACK_LINE(170)
				this->LIGNE_VISIBLE_OFFSET = (int)0;
			}
		}
		else{
			HX_STACK_LINE(171)
			bool tmp14 = (sensX == (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(171)
			if ((tmp14)){
				HX_STACK_LINE(173)
				int tmp15 = this->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(173)
				this->LIGNE_VISIBLE_OFFSET = tmp15;
			}
		}
		HX_STACK_LINE(175)
		bool tmp14 = (sensY == (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(175)
		if ((tmp14)){
			HX_STACK_LINE(175)
			hx::AddEq(this->NB_LIGNE_WORLD,(int)100);
		}
		else{
			HX_STACK_LINE(175)
			hx::SubEq(this->NB_LIGNE_WORLD,(int)100);
		}
		HX_STACK_LINE(176)
		bool tmp15 = (sensX == (int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(176)
		if ((tmp15)){
			HX_STACK_LINE(176)
			hx::AddEq(this->NB_COLONNE_WORLD,(int)100);
		}
		else{
			HX_STACK_LINE(176)
			hx::SubEq(this->NB_COLONNE_WORLD,(int)100);
		}
		HX_STACK_LINE(178)
		::com::lak::manager::LevelManager tmp16 = this->levelManager;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(178)
		::String tmp17 = (HX_HCSTRING("part_","\x0c","\x91","\x55","\xbd") + partNum);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(178)
		::String tmp18 = (tmp17 + HX_HCSTRING(".txt","\x02","\x3f","\xc0","\x1e"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(178)
		this->levelData = tmp16->mapPartArray(tmp18);
		HX_STACK_LINE(179)
		bool tmp19 = creation;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(179)
		this->setupWorld(tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(IsoWorld_obj,setupMapData,(void))

Void IsoWorld_obj::addChildToWorld( ::com::lak::entities::IsoObject child){
{
		HX_STACK_FRAME("com.lak.IsoWorld","addChildToWorld",0x1c562a40,"com.lak.IsoWorld.addChildToWorld","com/lak/IsoWorld.hx",187,0x2e2b8e6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(188)
		int tmp = this->worldObject->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		int len = tmp;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(189)
		int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		::com::lak::entities::IsoObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		this->worldObject->insert(tmp1,tmp2);
		HX_STACK_LINE(190)
		Float tmp3 = child->get_x();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		::openfl::geom::Point tmp4 = this->pt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		tmp4->x = tmp3;
		HX_STACK_LINE(191)
		Float tmp5 = child->get_y();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		::openfl::geom::Point tmp6 = this->pt;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		tmp6->y = tmp5;
		HX_STACK_LINE(193)
		::com::lak::entities::IsoObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(193)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::com::lak::entities::IsoUnit >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(193)
		if ((tmp8)){
			HX_STACK_LINE(193)
			Float tmp9 = child->get_scaleX();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(193)
			child->scale = tmp9;
		}
		HX_STACK_LINE(194)
		::com::lak::entities::IsoObject tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(194)
		this->addChild(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoWorld_obj,addChildToWorld,(void))

Void IsoWorld_obj::setupWorld( hx::Null< bool >  __o_createWorld){
bool createWorld = __o_createWorld.Default(false);
	HX_STACK_FRAME("com.lak.IsoWorld","setupWorld",0xafbb4b31,"com.lak.IsoWorld.setupWorld","com/lak/IsoWorld.hx",201,0x2e2b8e6a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(createWorld,"createWorld")
{
		HX_STACK_LINE(202)
		int wRowCpt = (int)0;		HX_STACK_VAR(wRowCpt,"wRowCpt");
		HX_STACK_LINE(203)
		int wColViewCpt = (int)0;		HX_STACK_VAR(wColViewCpt,"wColViewCpt");
		HX_STACK_LINE(204)
		::openfl::geom::Point tmp = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		::openfl::geom::Point pos = tmp;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(205)
		wRowCpt = (int)0;
		HX_STACK_LINE(207)
		bool tmp1 = (createWorld == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		if ((tmp1)){
			HX_STACK_LINE(208)
			this->tilesArray = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				int tmp2 = wRowCpt;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(209)
				int tmp3 = this->NB_TILE_W;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(209)
				bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(209)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(209)
				if ((tmp5)){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(210)
				wColViewCpt = (int)0;
				HX_STACK_LINE(211)
				while((true)){
					HX_STACK_LINE(211)
					int tmp6 = wColViewCpt;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(211)
					int tmp7 = this->NB_TILE_H;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(211)
					bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(211)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(211)
					if ((tmp9)){
						HX_STACK_LINE(211)
						break;
					}
					HX_STACK_LINE(213)
					bool tmp10 = (this->tilesArray->__get(wRowCpt).StaticCast< cpp::ArrayBase >() == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(213)
					if ((tmp10)){
						HX_STACK_LINE(213)
						this->tilesArray[wRowCpt] = Dynamic( Array_obj<Dynamic>::__new() );
					}
					HX_STACK_LINE(214)
					int tmp11 = wRowCpt;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(214)
					int tmp12 = this->halfW;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(214)
					int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(214)
					int tmp14 = wColViewCpt;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(214)
					int tmp15 = this->halfH;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(214)
					int tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(214)
					::openfl::geom::Point tmp17 = ::openfl::geom::Point_obj::__new(tmp13,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					struct _Function_4_1{
						inline static Dynamic Block( ::openfl::geom::Point &tmp17){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/lak/IsoWorld.hx",214,0x2e2b8e6a)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7") , HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"),false);
								__result->Add(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca") , tmp17,false);
								__result->Add(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe") , (int)-1,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(214)
					Dynamic tmp18 = _Function_4_1::Block(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(214)
					this->tilesArray->__get(wRowCpt).StaticCast< cpp::ArrayBase >()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp18);
					HX_STACK_LINE(218)
					(wColViewCpt)++;
				}
				HX_STACK_LINE(220)
				(wRowCpt)++;
			}
		}
		HX_STACK_LINE(223)
		int tmp2 = wRowCpt = (int)0;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		int tmp3 = wColViewCpt = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		wRowCpt = tmp3;
		HX_STACK_LINE(224)
		while((true)){
			HX_STACK_LINE(224)
			int tmp4 = wRowCpt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			int tmp5 = this->PART_NUM_TILE_W;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			if ((tmp7)){
				HX_STACK_LINE(224)
				break;
			}
			HX_STACK_LINE(225)
			wColViewCpt = (int)0;
			HX_STACK_LINE(226)
			while((true)){
				HX_STACK_LINE(226)
				int tmp8 = wColViewCpt;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				int tmp9 = this->PART_NUM_TILE_H;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				if ((tmp11)){
					HX_STACK_LINE(226)
					break;
				}
				HX_STACK_LINE(229)
				bool tmp12 = (createWorld == true);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(229)
				if ((tmp12)){
					HX_STACK_LINE(230)
					bool tmp13 = (this->aWorld->__get(wRowCpt).StaticCast< cpp::ArrayBase >() == null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(230)
					if ((tmp13)){
						HX_STACK_LINE(230)
						this->aWorld[wRowCpt] = Dynamic( Array_obj<Dynamic>::__new() );
					}
					HX_STACK_LINE(231)
					int tmp14 = wColViewCpt;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(231)
					int tmp15 = wRowCpt;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(231)
					int tmp16 = this->tileW;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(231)
					int tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(231)
					int tmp18 = wColViewCpt;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(231)
					int tmp19 = this->halfH;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(231)
					int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(231)
					::openfl::geom::Point tmp21 = ::openfl::geom::Point_obj::__new(tmp17,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					struct _Function_4_1{
						inline static Dynamic Block( ::openfl::geom::Point &tmp21){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/lak/IsoWorld.hx",231,0x2e2b8e6a)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7") , HX_HCSTRING("g","\x67","\x00","\x00","\x00"),false);
								__result->Add(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca") , tmp21,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(231)
					Dynamic tmp22 = _Function_4_1::Block(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(231)
					this->aWorld->__get(wRowCpt).StaticCast< cpp::ArrayBase >()->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp14,tmp22);
				}
				else{
					HX_STACK_LINE(233)
					Dynamic tmp13 = this->levelData->__GetItem(wRowCpt);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(233)
					int tmp14 = wColViewCpt;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(233)
					Dynamic tmp15 = tmp13->__GetItem(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(233)
					Dynamic tmp16 = this->aWorld->__get(wRowCpt).StaticCast< cpp::ArrayBase >()->__GetItem(wColViewCpt);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(233)
					tmp16->__FieldRef(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7")) = tmp15;
					HX_STACK_LINE(234)
					int tmp17 = wRowCpt;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(234)
					int tmp18 = this->tileW;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(234)
					int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(234)
					Dynamic tmp20 = this->aWorld->__get(wRowCpt).StaticCast< cpp::ArrayBase >()->__GetItem(wColViewCpt);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(234)
					tmp20->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = tmp19;
					HX_STACK_LINE(235)
					int tmp21 = wColViewCpt;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(235)
					int tmp22 = this->halfH;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(235)
					int tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(235)
					Dynamic tmp24 = this->aWorld->__get(wRowCpt).StaticCast< cpp::ArrayBase >()->__GetItem(wColViewCpt);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(235)
					tmp24->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = tmp23;
				}
				HX_STACK_LINE(237)
				(wColViewCpt)++;
			}
			HX_STACK_LINE(239)
			(wRowCpt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoWorld_obj,setupWorld,(void))

Void IsoWorld_obj::drawView( ){
{
		HX_STACK_FRAME("com.lak.IsoWorld","drawView",0x11a5d625,"com.lak.IsoWorld.drawView","com/lak/IsoWorld.hx",246,0x2e2b8e6a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(248)
		::String rowCpt = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(rowCpt,"rowCpt");
		HX_STACK_LINE(249)
		int colCpt = (int)0;		HX_STACK_VAR(colCpt,"colCpt");
		HX_STACK_LINE(250)
		int lineViewCpt = (int)0;		HX_STACK_VAR(lineViewCpt,"lineViewCpt");
		HX_STACK_LINE(251)
		int colViewCpt = (int)0;		HX_STACK_VAR(colViewCpt,"colViewCpt");
		HX_STACK_LINE(252)
		int indexX = (int)0;		HX_STACK_VAR(indexX,"indexX");
		HX_STACK_LINE(253)
		int indexY = (int)0;		HX_STACK_VAR(indexY,"indexY");
		HX_STACK_LINE(254)
		::String part = HX_HCSTRING("0-0","\x93","\x93","\x24","\x00");		HX_STACK_VAR(part,"part");
		HX_STACK_LINE(255)
		::openfl::display::Bitmap tmp = ::openfl::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		::openfl::display::Bitmap bmp = tmp;		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(256)
		Dynamic n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(257)
		Dynamic nW;		HX_STACK_VAR(nW,"nW");
		HX_STACK_LINE(258)
		::openfl::geom::Point pos;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(259)
		::openfl::display::BitmapData tmp1 = this->groundCanvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		tmp1->unlock(null());
		HX_STACK_LINE(260)
		while((true)){
			HX_STACK_LINE(260)
			int tmp2 = lineViewCpt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			int tmp3 = this->NB_TILE_W;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(260)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(260)
			if ((tmp5)){
				HX_STACK_LINE(260)
				break;
			}
			HX_STACK_LINE(262)
			colViewCpt = (int)0;
			HX_STACK_LINE(263)
			while((true)){
				HX_STACK_LINE(263)
				int tmp6 = colViewCpt;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(263)
				int tmp7 = this->NB_TILE_H;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(263)
				bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(263)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(263)
				if ((tmp9)){
					HX_STACK_LINE(263)
					break;
				}
				HX_STACK_LINE(265)
				::openfl::geom::Point tmp10 = ::openfl::geom::Point_obj::__new(lineViewCpt,colViewCpt);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(265)
				int tmp11 = this->tileW;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(265)
				int tmp12 = this->tileH;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(265)
				::openfl::geom::Point tmp13 = ::com::lak::utils::IsoUtils_obj::mapTilePosition(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(265)
				pos = tmp13;
				HX_STACK_LINE(266)
				Float tmp14 = this->COLONNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(266)
				int tmp15 = this->PART_NUM_TILE_W;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(266)
				bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(266)
				if ((tmp16)){
					HX_STACK_LINE(267)
					Float tmp17 = this->COLONNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(267)
					int tmp18 = this->PART_NUM_TILE_W;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(267)
					Float tmp19 = hx::Mod(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(267)
					this->COLONNE_VISIBLE_OFFSET = tmp19;
				}
				HX_STACK_LINE(269)
				Float tmp17 = this->LIGNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(269)
				int tmp18 = this->PART_NUM_TILE_H;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(269)
				bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(269)
				if ((tmp19)){
					HX_STACK_LINE(270)
					Float tmp20 = this->LIGNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(270)
					int tmp21 = this->PART_NUM_TILE_H;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(270)
					Float tmp22 = hx::Mod(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(270)
					this->LIGNE_VISIBLE_OFFSET = tmp22;
				}
				HX_STACK_LINE(272)
				int tmp20 = lineViewCpt;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(272)
				int tmp21 = this->PART_NUM_TILE_H;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(272)
				bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(272)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(272)
				if ((tmp22)){
					HX_STACK_LINE(272)
					int tmp24 = colViewCpt;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(272)
					int tmp25 = this->PART_NUM_TILE_W;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(272)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(272)
					tmp23 = (tmp24 < tmp26);
				}
				else{
					HX_STACK_LINE(272)
					tmp23 = false;
				}
				HX_STACK_LINE(272)
				if ((tmp23)){
					HX_STACK_LINE(273)
					int tmp24 = lineViewCpt;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(273)
					Float tmp25 = this->COLONNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(273)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(273)
					int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(273)
					int tmp28 = colViewCpt;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(273)
					Float tmp29 = this->LIGNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(273)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(273)
					int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(273)
					Dynamic tmp32 = this->aWorld->__get(tmp27).StaticCast< cpp::ArrayBase >()->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(273)
					nW = tmp32;
					HX_STACK_LINE(274)
					Dynamic tmp33 = this->tilesArray->__get(lineViewCpt).StaticCast< cpp::ArrayBase >()->__GetItem(colViewCpt);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(274)
					n = tmp33;
					HX_STACK_LINE(275)
					bool tmp34 = (nW != null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(275)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(275)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(275)
					if ((tmp35)){
						HX_STACK_LINE(275)
						tmp36 = (n != null());
					}
					else{
						HX_STACK_LINE(275)
						tmp36 = false;
					}
					HX_STACK_LINE(275)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(275)
					if ((tmp36)){
						HX_STACK_LINE(275)
						tmp37 = (nW->__Field(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7"), hx::paccDynamic ) != n->__Field(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7"), hx::paccDynamic ));
					}
					else{
						HX_STACK_LINE(275)
						tmp37 = false;
					}
					HX_STACK_LINE(275)
					if ((tmp37)){
						HX_STACK_LINE(276)
						n->__FieldRef(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7")) = nW->__Field(HX_HCSTRING("ndType","\x10","\xd2","\x35","\xc7"), hx::paccDynamic );
						HX_STACK_LINE(277)
						::openfl::geom::Matrix tmp38 = this->mtrx;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(277)
						tmp38->tx = pos->x;
						HX_STACK_LINE(278)
						::openfl::geom::Matrix tmp39 = this->mtrx;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(278)
						tmp39->ty = pos->y;
						HX_STACK_LINE(279)
						bool tmp40 = (n->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic ) == (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(279)
						if ((tmp40)){
							HX_STACK_LINE(280)
							::spritesheet::Spritesheet tmp41 = this->worldGrass;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(280)
							int tmp42 = ::com::lak::utils::GameUtils_obj::random((int)0,(int)99);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(280)
							::spritesheet::data::SpritesheetFrame tmp43 = tmp41->getFrame(tmp42,null());		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(280)
							bmp->bitmapData = tmp43->bitmapData;
						}
						else{
							HX_STACK_LINE(282)
							::spritesheet::Spritesheet tmp41 = this->worldGrass;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(282)
							::spritesheet::data::SpritesheetFrame tmp42 = tmp41->getFrame(n->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(282)
							bmp->bitmapData = tmp42->bitmapData;
						}
						HX_STACK_LINE(284)
						::openfl::display::BitmapData tmp41 = this->groundCanvas;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(284)
						::openfl::display::Bitmap tmp42 = bmp;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(284)
						::openfl::geom::Matrix tmp43 = this->mtrx;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(284)
						tmp41->draw(tmp42,tmp43,null(),null(),null(),null());
					}
				}
				HX_STACK_LINE(287)
				(colViewCpt)++;
			}
			HX_STACK_LINE(289)
			(lineViewCpt)++;
		}
		HX_STACK_LINE(291)
		::openfl::display::BitmapData tmp2 = this->groundCanvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		tmp2->lock();
		HX_STACK_LINE(292)
		int tmp3 = lineViewCpt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		Float tmp4 = this->COLONNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(292)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(292)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		int tmp7 = this->PART_NUM_TILE_W;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		indexY = tmp8;
		HX_STACK_LINE(293)
		int tmp9 = colViewCpt;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(293)
		Float tmp10 = this->LIGNE_VISIBLE_OFFSET;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(293)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(293)
		int tmp13 = this->PART_NUM_TILE_H;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(293)
		int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(293)
		indexX = tmp14;
		HX_STACK_LINE(295)
		int tmp15 = lineViewCpt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(295)
		int tmp16 = this->OFFSET_COLONNE_WORLD;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(295)
		int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(295)
		int tmp18 = this->PART_NUM_TILE_H;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(295)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(295)
		int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(295)
		this->offsetYCost = tmp20;
		HX_STACK_LINE(296)
		int tmp21 = colViewCpt;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(296)
		int tmp22 = this->OFFSET_LIGNE_WORLD;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(296)
		int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(296)
		int tmp24 = this->PART_NUM_TILE_W;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(296)
		Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(296)
		int tmp26 = ::Math_obj::floor(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(296)
		this->offsetXCost = tmp26;
		HX_STACK_LINE(298)
		int tmp27 = this->offsetXCost;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(298)
		::String tmp28 = (tmp27 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(298)
		int tmp29 = this->offsetYCost;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(298)
		::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(298)
		part = tmp30;
		HX_STACK_LINE(299)
		::String tmp31 = part;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(299)
		::String tmp32 = this->curentLevel;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(299)
		bool tmp33 = (tmp31 != tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(299)
		if ((tmp33)){
			HX_STACK_LINE(300)
			int rorl;		HX_STACK_VAR(rorl,"rorl");
			HX_STACK_LINE(301)
			int bort;		HX_STACK_VAR(bort,"bort");
			HX_STACK_LINE(302)
			::String tmp34 = this->curentLevel;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(302)
			::String tmp35 = tmp34.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(302)
			Float tmp36 = ::Std_obj::parseFloat(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(302)
			::String tmp37 = part.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(302)
			Float tmp38 = ::Std_obj::parseFloat(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(302)
			bool tmp39 = (tmp36 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(302)
			if ((tmp39)){
				HX_STACK_LINE(302)
				rorl = (int)-1;
			}
			else{
				HX_STACK_LINE(302)
				rorl = (int)1;
			}
			HX_STACK_LINE(303)
			::String tmp40 = this->curentLevel;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(303)
			::String tmp41 = tmp40.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(303)
			Float tmp42 = ::Std_obj::parseFloat(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(303)
			::String tmp43 = part.split(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))->__get((int)1);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(303)
			Float tmp44 = ::Std_obj::parseFloat(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(303)
			bool tmp45 = (tmp42 > tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(303)
			if ((tmp45)){
				HX_STACK_LINE(303)
				bort = (int)-1;
			}
			else{
				HX_STACK_LINE(303)
				bort = (int)1;
			}
			HX_STACK_LINE(304)
			this->curentLevel = part;
			HX_STACK_LINE(305)
			::String tmp46 = part;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(305)
			int tmp47 = rorl;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(305)
			int tmp48 = bort;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(305)
			this->setupMapData(tmp46,tmp47,tmp48,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IsoWorld_obj,drawView,(void))

Void IsoWorld_obj::update( int delta){
{
		HX_STACK_FRAME("com.lak.IsoWorld","update",0xbac1a0a5,"com.lak.IsoWorld.update","com/lak/IsoWorld.hx",312,0x2e2b8e6a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delta,"delta")
		HX_STACK_LINE(313)
		this->drawView();
		HX_STACK_LINE(314)
		::com::lak::Camera tmp = this->wCamera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		tmp->checkKeys();
		HX_STACK_LINE(315)
		::com::lak::manager::EntitiesManager tmp1 = this->entitiesManager;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		tmp1->run();
		HX_STACK_LINE(316)
		::com::lak::manager::AttackMananger tmp2 = this->attackMananger;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		tmp2->run();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(IsoWorld_obj,update,(void))

::com::lak::IsoWorld IsoWorld_obj::instance;


IsoWorld_obj::IsoWorld_obj()
{
}

void IsoWorld_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IsoWorld);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(floor,"floor");
	HX_MARK_MEMBER_NAME(aWorld,"aWorld");
	HX_MARK_MEMBER_NAME(tilesArray,"tilesArray");
	HX_MARK_MEMBER_NAME(groundCanvas,"groundCanvas");
	HX_MARK_MEMBER_NAME(worldGrass,"worldGrass");
	HX_MARK_MEMBER_NAME(mtrx,"mtrx");
	HX_MARK_MEMBER_NAME(NB_TILE_W,"NB_TILE_W");
	HX_MARK_MEMBER_NAME(VIEW_WIDTH,"VIEW_WIDTH");
	HX_MARK_MEMBER_NAME(VIEW_HEIGHT,"VIEW_HEIGHT");
	HX_MARK_MEMBER_NAME(worldTileWidth,"worldTileWidth");
	HX_MARK_MEMBER_NAME(NB_LIGNE_WORLD,"NB_LIGNE_WORLD");
	HX_MARK_MEMBER_NAME(worldTileHeight,"worldTileHeight");
	HX_MARK_MEMBER_NAME(levelData,"levelData");
	HX_MARK_MEMBER_NAME(NB_TILE_H,"NB_TILE_H");
	HX_MARK_MEMBER_NAME(NB_COLONNE_WORLD,"NB_COLONNE_WORLD");
	HX_MARK_MEMBER_NAME(PART_NUM_TILE_W,"PART_NUM_TILE_W");
	HX_MARK_MEMBER_NAME(PART_NUM_TILE_H,"PART_NUM_TILE_H");
	HX_MARK_MEMBER_NAME(offsetXCost,"offsetXCost");
	HX_MARK_MEMBER_NAME(offsetYCost,"offsetYCost");
	HX_MARK_MEMBER_NAME(curentLevel,"curentLevel");
	HX_MARK_MEMBER_NAME(OFFSET_LIGNE_WORLD,"OFFSET_LIGNE_WORLD");
	HX_MARK_MEMBER_NAME(OFFSET_COLONNE_WORLD,"OFFSET_COLONNE_WORLD");
	HX_MARK_MEMBER_NAME(COLONNE_VISIBLE_OFFSET,"COLONNE_VISIBLE_OFFSET");
	HX_MARK_MEMBER_NAME(LIGNE_VISIBLE_OFFSET,"LIGNE_VISIBLE_OFFSET");
	HX_MARK_MEMBER_NAME(tileH,"tileH");
	HX_MARK_MEMBER_NAME(tileW,"tileW");
	HX_MARK_MEMBER_NAME(halfH,"halfH");
	HX_MARK_MEMBER_NAME(halfW,"halfW");
	HX_MARK_MEMBER_NAME(pt,"pt");
	HX_MARK_MEMBER_NAME(worldObject,"worldObject");
	HX_MARK_MEMBER_NAME(entitiesManager,"entitiesManager");
	HX_MARK_MEMBER_NAME(attackMananger,"attackMananger");
	HX_MARK_MEMBER_NAME(wCamera,"wCamera");
	HX_MARK_MEMBER_NAME(levelManager,"levelManager");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IsoWorld_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(floor,"floor");
	HX_VISIT_MEMBER_NAME(aWorld,"aWorld");
	HX_VISIT_MEMBER_NAME(tilesArray,"tilesArray");
	HX_VISIT_MEMBER_NAME(groundCanvas,"groundCanvas");
	HX_VISIT_MEMBER_NAME(worldGrass,"worldGrass");
	HX_VISIT_MEMBER_NAME(mtrx,"mtrx");
	HX_VISIT_MEMBER_NAME(NB_TILE_W,"NB_TILE_W");
	HX_VISIT_MEMBER_NAME(VIEW_WIDTH,"VIEW_WIDTH");
	HX_VISIT_MEMBER_NAME(VIEW_HEIGHT,"VIEW_HEIGHT");
	HX_VISIT_MEMBER_NAME(worldTileWidth,"worldTileWidth");
	HX_VISIT_MEMBER_NAME(NB_LIGNE_WORLD,"NB_LIGNE_WORLD");
	HX_VISIT_MEMBER_NAME(worldTileHeight,"worldTileHeight");
	HX_VISIT_MEMBER_NAME(levelData,"levelData");
	HX_VISIT_MEMBER_NAME(NB_TILE_H,"NB_TILE_H");
	HX_VISIT_MEMBER_NAME(NB_COLONNE_WORLD,"NB_COLONNE_WORLD");
	HX_VISIT_MEMBER_NAME(PART_NUM_TILE_W,"PART_NUM_TILE_W");
	HX_VISIT_MEMBER_NAME(PART_NUM_TILE_H,"PART_NUM_TILE_H");
	HX_VISIT_MEMBER_NAME(offsetXCost,"offsetXCost");
	HX_VISIT_MEMBER_NAME(offsetYCost,"offsetYCost");
	HX_VISIT_MEMBER_NAME(curentLevel,"curentLevel");
	HX_VISIT_MEMBER_NAME(OFFSET_LIGNE_WORLD,"OFFSET_LIGNE_WORLD");
	HX_VISIT_MEMBER_NAME(OFFSET_COLONNE_WORLD,"OFFSET_COLONNE_WORLD");
	HX_VISIT_MEMBER_NAME(COLONNE_VISIBLE_OFFSET,"COLONNE_VISIBLE_OFFSET");
	HX_VISIT_MEMBER_NAME(LIGNE_VISIBLE_OFFSET,"LIGNE_VISIBLE_OFFSET");
	HX_VISIT_MEMBER_NAME(tileH,"tileH");
	HX_VISIT_MEMBER_NAME(tileW,"tileW");
	HX_VISIT_MEMBER_NAME(halfH,"halfH");
	HX_VISIT_MEMBER_NAME(halfW,"halfW");
	HX_VISIT_MEMBER_NAME(pt,"pt");
	HX_VISIT_MEMBER_NAME(worldObject,"worldObject");
	HX_VISIT_MEMBER_NAME(entitiesManager,"entitiesManager");
	HX_VISIT_MEMBER_NAME(attackMananger,"attackMananger");
	HX_VISIT_MEMBER_NAME(wCamera,"wCamera");
	HX_VISIT_MEMBER_NAME(levelManager,"levelManager");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic IsoWorld_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { return pt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"mtrx") ) { return mtrx; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"floor") ) { return floor; }
		if (HX_FIELD_EQ(inName,"tileH") ) { return tileH; }
		if (HX_FIELD_EQ(inName,"tileW") ) { return tileW; }
		if (HX_FIELD_EQ(inName,"halfH") ) { return halfH; }
		if (HX_FIELD_EQ(inName,"halfW") ) { return halfW; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"aWorld") ) { return aWorld; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wCamera") ) { return wCamera; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawView") ) { return drawView_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"NB_TILE_W") ) { return NB_TILE_W; }
		if (HX_FIELD_EQ(inName,"levelData") ) { return levelData; }
		if (HX_FIELD_EQ(inName,"NB_TILE_H") ) { return NB_TILE_H; }
		if (HX_FIELD_EQ(inName,"worldSize") ) { return worldSize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tilesArray") ) { return tilesArray; }
		if (HX_FIELD_EQ(inName,"worldGrass") ) { return worldGrass; }
		if (HX_FIELD_EQ(inName,"VIEW_WIDTH") ) { return VIEW_WIDTH; }
		if (HX_FIELD_EQ(inName,"setupWorld") ) { return setupWorld_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"VIEW_HEIGHT") ) { return VIEW_HEIGHT; }
		if (HX_FIELD_EQ(inName,"offsetXCost") ) { return offsetXCost; }
		if (HX_FIELD_EQ(inName,"offsetYCost") ) { return offsetYCost; }
		if (HX_FIELD_EQ(inName,"curentLevel") ) { return curentLevel; }
		if (HX_FIELD_EQ(inName,"worldObject") ) { return worldObject; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"groundCanvas") ) { return groundCanvas; }
		if (HX_FIELD_EQ(inName,"levelManager") ) { return levelManager; }
		if (HX_FIELD_EQ(inName,"setupMapData") ) { return setupMapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldTileWidth") ) { return worldTileWidth; }
		if (HX_FIELD_EQ(inName,"NB_LIGNE_WORLD") ) { return NB_LIGNE_WORLD; }
		if (HX_FIELD_EQ(inName,"attackMananger") ) { return attackMananger; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"worldTileHeight") ) { return worldTileHeight; }
		if (HX_FIELD_EQ(inName,"PART_NUM_TILE_W") ) { return PART_NUM_TILE_W; }
		if (HX_FIELD_EQ(inName,"PART_NUM_TILE_H") ) { return PART_NUM_TILE_H; }
		if (HX_FIELD_EQ(inName,"entitiesManager") ) { return entitiesManager; }
		if (HX_FIELD_EQ(inName,"addChildToWorld") ) { return addChildToWorld_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NB_COLONNE_WORLD") ) { return NB_COLONNE_WORLD; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OFFSET_LIGNE_WORLD") ) { return OFFSET_LIGNE_WORLD; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onWorldaddedToStage") ) { return onWorldaddedToStage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"OFFSET_COLONNE_WORLD") ) { return OFFSET_COLONNE_WORLD; }
		if (HX_FIELD_EQ(inName,"LIGNE_VISIBLE_OFFSET") ) { return LIGNE_VISIBLE_OFFSET; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"COLONNE_VISIBLE_OFFSET") ) { return COLONNE_VISIBLE_OFFSET; }
	}
	return super::__Field(inName,inCallProp);
}

bool IsoWorld_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
	}
	return false;
}

Dynamic IsoWorld_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"pt") ) { pt=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::openfl::utils::ByteArrayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mtrx") ) { mtrx=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"floor") ) { floor=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileH") ) { tileH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileW") ) { tileW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfH") ) { halfH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfW") ) { halfW=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"aWorld") ) { aWorld=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"wCamera") ) { wCamera=inValue.Cast< ::com::lak::Camera >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"NB_TILE_W") ) { NB_TILE_W=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levelData") ) { levelData=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NB_TILE_H") ) { NB_TILE_H=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tilesArray") ) { tilesArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldGrass") ) { worldGrass=inValue.Cast< ::spritesheet::Spritesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VIEW_WIDTH") ) { VIEW_WIDTH=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"VIEW_HEIGHT") ) { VIEW_HEIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetXCost") ) { offsetXCost=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetYCost") ) { offsetYCost=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curentLevel") ) { curentLevel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldObject") ) { worldObject=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"groundCanvas") ) { groundCanvas=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levelManager") ) { levelManager=inValue.Cast< ::com::lak::manager::LevelManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldTileWidth") ) { worldTileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NB_LIGNE_WORLD") ) { NB_LIGNE_WORLD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attackMananger") ) { attackMananger=inValue.Cast< ::com::lak::manager::AttackMananger >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"worldTileHeight") ) { worldTileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PART_NUM_TILE_W") ) { PART_NUM_TILE_W=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PART_NUM_TILE_H") ) { PART_NUM_TILE_H=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entitiesManager") ) { entitiesManager=inValue.Cast< ::com::lak::manager::EntitiesManager >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NB_COLONNE_WORLD") ) { NB_COLONNE_WORLD=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"OFFSET_LIGNE_WORLD") ) { OFFSET_LIGNE_WORLD=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"OFFSET_COLONNE_WORLD") ) { OFFSET_COLONNE_WORLD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LIGNE_VISIBLE_OFFSET") ) { LIGNE_VISIBLE_OFFSET=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"COLONNE_VISIBLE_OFFSET") ) { COLONNE_VISIBLE_OFFSET=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool IsoWorld_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::com::lak::IsoWorld >(); return true; }
	}
	return false;
}

void IsoWorld_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"));
	outFields->push(HX_HCSTRING("aWorld","\x31","\x06","\x30","\x2a"));
	outFields->push(HX_HCSTRING("tilesArray","\xd4","\xbd","\xc9","\xe3"));
	outFields->push(HX_HCSTRING("groundCanvas","\xbf","\x0a","\x96","\x5e"));
	outFields->push(HX_HCSTRING("worldGrass","\x44","\xc2","\x96","\x05"));
	outFields->push(HX_HCSTRING("mtrx","\xed","\xaa","\x64","\x48"));
	outFields->push(HX_HCSTRING("NB_TILE_W","\xb1","\x09","\xb2","\x43"));
	outFields->push(HX_HCSTRING("VIEW_WIDTH","\x4c","\x89","\x77","\x90"));
	outFields->push(HX_HCSTRING("VIEW_HEIGHT","\xc1","\x11","\x70","\x8e"));
	outFields->push(HX_HCSTRING("worldTileWidth","\x46","\x03","\xc4","\x76"));
	outFields->push(HX_HCSTRING("NB_LIGNE_WORLD","\x49","\x72","\x93","\x35"));
	outFields->push(HX_HCSTRING("worldTileHeight","\xa7","\x52","\x0e","\x2b"));
	outFields->push(HX_HCSTRING("levelData","\xce","\xa9","\x32","\x78"));
	outFields->push(HX_HCSTRING("NB_TILE_H","\xa2","\x09","\xb2","\x43"));
	outFields->push(HX_HCSTRING("NB_COLONNE_WORLD","\x9e","\x04","\xc4","\xac"));
	outFields->push(HX_HCSTRING("PART_NUM_TILE_W","\x0b","\x66","\xcd","\xcd"));
	outFields->push(HX_HCSTRING("PART_NUM_TILE_H","\xfc","\x65","\xcd","\xcd"));
	outFields->push(HX_HCSTRING("offsetXCost","\x52","\x0a","\x34","\xdd"));
	outFields->push(HX_HCSTRING("offsetYCost","\xd3","\x9e","\x9a","\x70"));
	outFields->push(HX_HCSTRING("curentLevel","\x19","\x73","\xa3","\x7d"));
	outFields->push(HX_HCSTRING("OFFSET_LIGNE_WORLD","\x28","\x84","\x46","\x85"));
	outFields->push(HX_HCSTRING("OFFSET_COLONNE_WORLD","\x3d","\x8c","\xc6","\x9c"));
	outFields->push(HX_HCSTRING("COLONNE_VISIBLE_OFFSET","\x49","\x71","\xaf","\x1c"));
	outFields->push(HX_HCSTRING("LIGNE_VISIBLE_OFFSET","\xfe","\x56","\x43","\x49"));
	outFields->push(HX_HCSTRING("tileH","\x5a","\xfd","\x34","\x10"));
	outFields->push(HX_HCSTRING("tileW","\x69","\xfd","\x34","\x10"));
	outFields->push(HX_HCSTRING("halfH","\x35","\x53","\x1c","\x22"));
	outFields->push(HX_HCSTRING("halfW","\x44","\x53","\x1c","\x22"));
	outFields->push(HX_HCSTRING("pt","\x04","\x62","\x00","\x00"));
	outFields->push(HX_HCSTRING("worldObject","\xb1","\x12","\xad","\xe0"));
	outFields->push(HX_HCSTRING("entitiesManager","\x2c","\xde","\xca","\x0f"));
	outFields->push(HX_HCSTRING("attackMananger","\xd5","\x44","\x8f","\x99"));
	outFields->push(HX_HCSTRING("wCamera","\x7c","\xee","\x9a","\x40"));
	outFields->push(HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::ByteArrayData*/ ,(int)offsetof(IsoWorld_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(IsoWorld_obj,floor),HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(IsoWorld_obj,aWorld),HX_HCSTRING("aWorld","\x31","\x06","\x30","\x2a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(IsoWorld_obj,tilesArray),HX_HCSTRING("tilesArray","\xd4","\xbd","\xc9","\xe3")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(IsoWorld_obj,groundCanvas),HX_HCSTRING("groundCanvas","\xbf","\x0a","\x96","\x5e")},
	{hx::fsObject /*::spritesheet::Spritesheet*/ ,(int)offsetof(IsoWorld_obj,worldGrass),HX_HCSTRING("worldGrass","\x44","\xc2","\x96","\x05")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(IsoWorld_obj,mtrx),HX_HCSTRING("mtrx","\xed","\xaa","\x64","\x48")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,NB_TILE_W),HX_HCSTRING("NB_TILE_W","\xb1","\x09","\xb2","\x43")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,VIEW_WIDTH),HX_HCSTRING("VIEW_WIDTH","\x4c","\x89","\x77","\x90")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,VIEW_HEIGHT),HX_HCSTRING("VIEW_HEIGHT","\xc1","\x11","\x70","\x8e")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,worldTileWidth),HX_HCSTRING("worldTileWidth","\x46","\x03","\xc4","\x76")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,NB_LIGNE_WORLD),HX_HCSTRING("NB_LIGNE_WORLD","\x49","\x72","\x93","\x35")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,worldTileHeight),HX_HCSTRING("worldTileHeight","\xa7","\x52","\x0e","\x2b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(IsoWorld_obj,levelData),HX_HCSTRING("levelData","\xce","\xa9","\x32","\x78")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,NB_TILE_H),HX_HCSTRING("NB_TILE_H","\xa2","\x09","\xb2","\x43")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,NB_COLONNE_WORLD),HX_HCSTRING("NB_COLONNE_WORLD","\x9e","\x04","\xc4","\xac")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,PART_NUM_TILE_W),HX_HCSTRING("PART_NUM_TILE_W","\x0b","\x66","\xcd","\xcd")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,PART_NUM_TILE_H),HX_HCSTRING("PART_NUM_TILE_H","\xfc","\x65","\xcd","\xcd")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,offsetXCost),HX_HCSTRING("offsetXCost","\x52","\x0a","\x34","\xdd")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,offsetYCost),HX_HCSTRING("offsetYCost","\xd3","\x9e","\x9a","\x70")},
	{hx::fsString,(int)offsetof(IsoWorld_obj,curentLevel),HX_HCSTRING("curentLevel","\x19","\x73","\xa3","\x7d")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,OFFSET_LIGNE_WORLD),HX_HCSTRING("OFFSET_LIGNE_WORLD","\x28","\x84","\x46","\x85")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,OFFSET_COLONNE_WORLD),HX_HCSTRING("OFFSET_COLONNE_WORLD","\x3d","\x8c","\xc6","\x9c")},
	{hx::fsFloat,(int)offsetof(IsoWorld_obj,COLONNE_VISIBLE_OFFSET),HX_HCSTRING("COLONNE_VISIBLE_OFFSET","\x49","\x71","\xaf","\x1c")},
	{hx::fsFloat,(int)offsetof(IsoWorld_obj,LIGNE_VISIBLE_OFFSET),HX_HCSTRING("LIGNE_VISIBLE_OFFSET","\xfe","\x56","\x43","\x49")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,tileH),HX_HCSTRING("tileH","\x5a","\xfd","\x34","\x10")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,tileW),HX_HCSTRING("tileW","\x69","\xfd","\x34","\x10")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,halfH),HX_HCSTRING("halfH","\x35","\x53","\x1c","\x22")},
	{hx::fsInt,(int)offsetof(IsoWorld_obj,halfW),HX_HCSTRING("halfW","\x44","\x53","\x1c","\x22")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(IsoWorld_obj,pt),HX_HCSTRING("pt","\x04","\x62","\x00","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(IsoWorld_obj,worldObject),HX_HCSTRING("worldObject","\xb1","\x12","\xad","\xe0")},
	{hx::fsObject /*::com::lak::manager::EntitiesManager*/ ,(int)offsetof(IsoWorld_obj,entitiesManager),HX_HCSTRING("entitiesManager","\x2c","\xde","\xca","\x0f")},
	{hx::fsObject /*::com::lak::manager::AttackMananger*/ ,(int)offsetof(IsoWorld_obj,attackMananger),HX_HCSTRING("attackMananger","\xd5","\x44","\x8f","\x99")},
	{hx::fsObject /*::com::lak::Camera*/ ,(int)offsetof(IsoWorld_obj,wCamera),HX_HCSTRING("wCamera","\x7c","\xee","\x9a","\x40")},
	{hx::fsObject /*::com::lak::manager::LevelManager*/ ,(int)offsetof(IsoWorld_obj,levelManager),HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::com::lak::IsoWorld*/ ,(void *) &IsoWorld_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"),
	HX_HCSTRING("aWorld","\x31","\x06","\x30","\x2a"),
	HX_HCSTRING("tilesArray","\xd4","\xbd","\xc9","\xe3"),
	HX_HCSTRING("groundCanvas","\xbf","\x0a","\x96","\x5e"),
	HX_HCSTRING("worldGrass","\x44","\xc2","\x96","\x05"),
	HX_HCSTRING("mtrx","\xed","\xaa","\x64","\x48"),
	HX_HCSTRING("NB_TILE_W","\xb1","\x09","\xb2","\x43"),
	HX_HCSTRING("VIEW_WIDTH","\x4c","\x89","\x77","\x90"),
	HX_HCSTRING("VIEW_HEIGHT","\xc1","\x11","\x70","\x8e"),
	HX_HCSTRING("worldTileWidth","\x46","\x03","\xc4","\x76"),
	HX_HCSTRING("NB_LIGNE_WORLD","\x49","\x72","\x93","\x35"),
	HX_HCSTRING("worldTileHeight","\xa7","\x52","\x0e","\x2b"),
	HX_HCSTRING("levelData","\xce","\xa9","\x32","\x78"),
	HX_HCSTRING("NB_TILE_H","\xa2","\x09","\xb2","\x43"),
	HX_HCSTRING("NB_COLONNE_WORLD","\x9e","\x04","\xc4","\xac"),
	HX_HCSTRING("PART_NUM_TILE_W","\x0b","\x66","\xcd","\xcd"),
	HX_HCSTRING("PART_NUM_TILE_H","\xfc","\x65","\xcd","\xcd"),
	HX_HCSTRING("offsetXCost","\x52","\x0a","\x34","\xdd"),
	HX_HCSTRING("offsetYCost","\xd3","\x9e","\x9a","\x70"),
	HX_HCSTRING("curentLevel","\x19","\x73","\xa3","\x7d"),
	HX_HCSTRING("OFFSET_LIGNE_WORLD","\x28","\x84","\x46","\x85"),
	HX_HCSTRING("OFFSET_COLONNE_WORLD","\x3d","\x8c","\xc6","\x9c"),
	HX_HCSTRING("COLONNE_VISIBLE_OFFSET","\x49","\x71","\xaf","\x1c"),
	HX_HCSTRING("LIGNE_VISIBLE_OFFSET","\xfe","\x56","\x43","\x49"),
	HX_HCSTRING("tileH","\x5a","\xfd","\x34","\x10"),
	HX_HCSTRING("tileW","\x69","\xfd","\x34","\x10"),
	HX_HCSTRING("halfH","\x35","\x53","\x1c","\x22"),
	HX_HCSTRING("halfW","\x44","\x53","\x1c","\x22"),
	HX_HCSTRING("pt","\x04","\x62","\x00","\x00"),
	HX_HCSTRING("worldObject","\xb1","\x12","\xad","\xe0"),
	HX_HCSTRING("entitiesManager","\x2c","\xde","\xca","\x0f"),
	HX_HCSTRING("attackMananger","\xd5","\x44","\x8f","\x99"),
	HX_HCSTRING("wCamera","\x7c","\xee","\x9a","\x40"),
	HX_HCSTRING("levelManager","\x49","\x1d","\x6f","\x72"),
	HX_HCSTRING("onWorldaddedToStage","\x96","\x17","\x0d","\xbb"),
	HX_HCSTRING("worldSize","\x33","\xf4","\x6f","\x59"),
	HX_HCSTRING("setupMapData","\xe9","\xfd","\x93","\xe5"),
	HX_HCSTRING("addChildToWorld","\x5c","\x78","\x04","\xea"),
	HX_HCSTRING("setupWorld","\x95","\xb2","\x67","\xb0"),
	HX_HCSTRING("drawView","\x89","\xdc","\xb8","\x62"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IsoWorld_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(IsoWorld_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IsoWorld_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IsoWorld_obj::instance,"instance");
};

#endif

hx::Class IsoWorld_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null()) };

void IsoWorld_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.lak.IsoWorld","\x52","\x0a","\x5d","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &IsoWorld_obj::__GetStatic;
	__mClass->mSetStaticField = &IsoWorld_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IsoWorld_obj >;
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
