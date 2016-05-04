#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_spritesheet_data_SpritesheetFrame
#include <spritesheet/data/SpritesheetFrame.h>
#endif
namespace spritesheet{
namespace data{

Void SpritesheetFrame_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o__scaleX)
{
HX_STACK_FRAME("spritesheet.data.SpritesheetFrame","new",0x9b5727b5,"spritesheet.data.SpritesheetFrame.new","spritesheet/data/SpritesheetFrame.hx",19,0x37dde4fb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_offsetX,"offsetX")
HX_STACK_ARG(__o_offsetY,"offsetY")
HX_STACK_ARG(__o__scaleX,"_scaleX")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
int _scaleX = __o__scaleX.Default(1);
{
	HX_STACK_LINE(21)
	this->x = x;
	HX_STACK_LINE(22)
	this->y = y;
	HX_STACK_LINE(23)
	this->width = width;
	HX_STACK_LINE(24)
	this->height = height;
	HX_STACK_LINE(25)
	this->offsetX = offsetX;
	HX_STACK_LINE(26)
	this->offsetY = offsetY;
	HX_STACK_LINE(27)
	this->scaleX = _scaleX;
}
;
	return null();
}

//SpritesheetFrame_obj::~SpritesheetFrame_obj() { }

Dynamic SpritesheetFrame_obj::__CreateEmpty() { return  new SpritesheetFrame_obj; }
hx::ObjectPtr< SpritesheetFrame_obj > SpritesheetFrame_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o__scaleX)
{  hx::ObjectPtr< SpritesheetFrame_obj > _result_ = new SpritesheetFrame_obj();
	_result_->__construct(__o_x,__o_y,__o_width,__o_height,__o_offsetX,__o_offsetY,__o__scaleX);
	return _result_;}

Dynamic SpritesheetFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpritesheetFrame_obj > _result_ = new SpritesheetFrame_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}


SpritesheetFrame_obj::SpritesheetFrame_obj()
{
}

void SpritesheetFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpritesheetFrame);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_END_CLASS();
}

void SpritesheetFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
}

Dynamic SpritesheetFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpritesheetFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpritesheetFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(SpritesheetFrame_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpritesheetFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpritesheetFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class SpritesheetFrame_obj::__mClass;

void SpritesheetFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("spritesheet.data.SpritesheetFrame","\x43","\x29","\xfa","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpritesheetFrame_obj >;
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

} // end namespace spritesheet
} // end namespace data
