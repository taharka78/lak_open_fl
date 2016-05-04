#include <hxcpp.h>

#ifndef INCLUDED_spritesheet_data_BehaviorData
#include <spritesheet/data/BehaviorData.h>
#endif
namespace spritesheet{
namespace data{

Void BehaviorData_obj::__construct(::String __o_name,Array< int > frames,hx::Null< bool >  __o_loop,hx::Null< int >  __o_frameRate,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY)
{
HX_STACK_FRAME("spritesheet.data.BehaviorData","new",0xa87d92be,"spritesheet.data.BehaviorData.new","spritesheet/data/BehaviorData.hx",21,0x1f7f1e12)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_name,"name")
HX_STACK_ARG(frames,"frames")
HX_STACK_ARG(__o_loop,"loop")
HX_STACK_ARG(__o_frameRate,"frameRate")
HX_STACK_ARG(__o_originX,"originX")
HX_STACK_ARG(__o_originY,"originY")
::String name = __o_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool loop = __o_loop.Default(false);
int frameRate = __o_frameRate.Default(30);
Float originX = __o_originX.Default(0);
Float originY = __o_originY.Default(0);
{
	HX_STACK_LINE(23)
	bool tmp = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(25)
		int tmp1 = (::spritesheet::data::BehaviorData_obj::uniqueID)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::String tmp2 = (HX_HCSTRING("behavior","\x92","\x90","\x92","\x0a") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		name = tmp2;
	}
	HX_STACK_LINE(29)
	bool tmp1 = (frames == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp1)){
		HX_STACK_LINE(31)
		frames = Array_obj< int >::__new();
	}
	HX_STACK_LINE(35)
	this->name = name;
	HX_STACK_LINE(36)
	this->frames = frames;
	HX_STACK_LINE(37)
	this->loop = loop;
	HX_STACK_LINE(38)
	this->frameRate = frameRate;
	HX_STACK_LINE(39)
	this->originX = originX;
	HX_STACK_LINE(40)
	this->originY = originY;
	HX_STACK_LINE(42)
	this->frameData = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		int tmp2 = this->frames->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		while((true)){
			HX_STACK_LINE(44)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			if ((tmp4)){
				HX_STACK_LINE(44)
				break;
			}
			HX_STACK_LINE(44)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(46)
			this->frameData->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(null());
		}
	}
}
;
	return null();
}

//BehaviorData_obj::~BehaviorData_obj() { }

Dynamic BehaviorData_obj::__CreateEmpty() { return  new BehaviorData_obj; }
hx::ObjectPtr< BehaviorData_obj > BehaviorData_obj::__new(::String __o_name,Array< int > frames,hx::Null< bool >  __o_loop,hx::Null< int >  __o_frameRate,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY)
{  hx::ObjectPtr< BehaviorData_obj > _result_ = new BehaviorData_obj();
	_result_->__construct(__o_name,frames,__o_loop,__o_frameRate,__o_originX,__o_originY);
	return _result_;}

Dynamic BehaviorData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BehaviorData_obj > _result_ = new BehaviorData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::spritesheet::data::BehaviorData BehaviorData_obj::clone( ){
	HX_STACK_FRAME("spritesheet.data.BehaviorData","clone",0xa048a93b,"spritesheet.data.BehaviorData.clone","spritesheet/data/BehaviorData.hx",53,0x1f7f1e12)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	int tmp = (::spritesheet::data::BehaviorData_obj::uniqueID)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::String tmp1 = (HX_HCSTRING("behavior","\x92","\x90","\x92","\x0a") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	bool tmp2 = this->loop;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	int tmp3 = this->frameRate;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	Float tmp4 = this->originX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	Float tmp5 = this->originY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	::spritesheet::data::BehaviorData tmp6 = ::spritesheet::data::BehaviorData_obj::__new(tmp1,this->frames->copy(),tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(55)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(BehaviorData_obj,clone,return )

int BehaviorData_obj::uniqueID;


BehaviorData_obj::BehaviorData_obj()
{
}

void BehaviorData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BehaviorData);
	HX_MARK_MEMBER_NAME(frameData,"frameData");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_END_CLASS();
}

void BehaviorData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameData,"frameData");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
}

Dynamic BehaviorData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameData") ) { return frameData; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
	}
	return super::__Field(inName,inCallProp);
}

bool BehaviorData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"uniqueID") ) { outValue = uniqueID; return true;  }
	}
	return false;
}

Dynamic BehaviorData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameData") ) { frameData=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BehaviorData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"uniqueID") ) { uniqueID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void BehaviorData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frameData","\xf7","\x14","\xe4","\x2f"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(BehaviorData_obj,frameData),HX_HCSTRING("frameData","\xf7","\x14","\xe4","\x2f")},
	{hx::fsInt,(int)offsetof(BehaviorData_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(BehaviorData_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsBool,(int)offsetof(BehaviorData_obj,loop),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47")},
	{hx::fsString,(int)offsetof(BehaviorData_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsFloat,(int)offsetof(BehaviorData_obj,originX),HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(BehaviorData_obj,originY),HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BehaviorData_obj::uniqueID,HX_HCSTRING("uniqueID","\x2c","\x79","\xaa","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frameData","\xf7","\x14","\xe4","\x2f"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"),
	HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BehaviorData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BehaviorData_obj::uniqueID,"uniqueID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BehaviorData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BehaviorData_obj::uniqueID,"uniqueID");
};

#endif

hx::Class BehaviorData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("uniqueID","\x2c","\x79","\xaa","\x5b"),
	::String(null()) };

void BehaviorData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("spritesheet.data.BehaviorData","\xcc","\x1b","\x5a","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BehaviorData_obj::__GetStatic;
	__mClass->mSetStaticField = &BehaviorData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BehaviorData_obj >;
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

void BehaviorData_obj::__boot()
{
	uniqueID= (int)0;
}

} // end namespace spritesheet
} // end namespace data
