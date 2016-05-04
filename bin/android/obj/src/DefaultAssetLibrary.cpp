#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_Bytes
#include <lime/utils/Bytes.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",37,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	this->type = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(41)
	this->path = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(40)
	this->className = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(50)
	super::__construct();
	HX_STACK_LINE(1647)
	this->loadManifest();
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

bool DefaultAssetLibrary_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",1655,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1657)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1657)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1657)
	if ((tmp)){
		HX_STACK_LINE(1657)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(1657)
		tmp1 = null();
	}
	HX_STACK_LINE(1657)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(1658)
	::haxe::ds::StringMap tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1658)
	::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1658)
	::String tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1658)
	::String assetType = tmp4;		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(1660)
	bool tmp5 = (assetType != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1660)
	if ((tmp5)){
		HX_STACK_LINE(1662)
		bool tmp6 = (assetType == requestedType);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1662)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1662)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1662)
		if ((tmp7)){
			HX_STACK_LINE(1662)
			bool tmp9 = (requestedType == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1662)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1662)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1662)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1662)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1662)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1662)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1662)
			bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1662)
			if ((tmp16)){
				HX_STACK_LINE(1662)
				bool tmp17 = (requestedType == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1662)
				tmp15 = tmp17;
			}
			else{
				HX_STACK_LINE(1662)
				tmp15 = true;
			}
			HX_STACK_LINE(1662)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1662)
			if ((tmp17)){
				HX_STACK_LINE(1662)
				bool tmp18 = (assetType == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1662)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1662)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1662)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1662)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1662)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1662)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1662)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1662)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1662)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1662)
				if ((tmp27)){
					HX_STACK_LINE(1662)
					tmp8 = (assetType == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));
				}
				else{
					HX_STACK_LINE(1662)
					tmp8 = true;
				}
			}
			else{
				HX_STACK_LINE(1662)
				tmp8 = false;
			}
		}
		else{
			HX_STACK_LINE(1662)
			tmp8 = true;
		}
		HX_STACK_LINE(1662)
		if ((tmp8)){
			HX_STACK_LINE(1664)
			return true;
		}
		HX_STACK_LINE(1686)
		bool tmp9 = (requestedType == HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1686)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1686)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1686)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1686)
		if ((tmp11)){
			HX_STACK_LINE(1686)
			tmp12 = (requestedType == null());
		}
		else{
			HX_STACK_LINE(1686)
			tmp12 = true;
		}
		HX_STACK_LINE(1686)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1686)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1686)
		if ((tmp13)){
			HX_STACK_LINE(1686)
			bool tmp15 = (assetType == HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1686)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1686)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1686)
			if ((tmp17)){
				HX_STACK_LINE(1686)
				tmp14 = (requestedType == HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));
			}
			else{
				HX_STACK_LINE(1686)
				tmp14 = false;
			}
		}
		else{
			HX_STACK_LINE(1686)
			tmp14 = true;
		}
		HX_STACK_LINE(1686)
		if ((tmp14)){
			HX_STACK_LINE(1688)
			return true;
		}
	}
	HX_STACK_LINE(1696)
	return false;
}


::lime::audio::AudioBuffer DefaultAssetLibrary_obj::getAudioBuffer( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getAudioBuffer",0xeeb56a82,"DefaultAssetLibrary.getAudioBuffer","DefaultAssetLibrary.hx",1701,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1716)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1716)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1716)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1716)
	if ((tmp2)){
		HX_STACK_LINE(1716)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1716)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1716)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1716)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1716)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1716)
		::lime::utils::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1716)
		tmp8 = hx::TCast< ::lime::utils::Bytes >::cast(tmp7);
		HX_STACK_LINE(1716)
		::lime::audio::AudioBuffer tmp9 = ::lime::audio::AudioBuffer_obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1716)
		return tmp9;
	}
	else{
		HX_STACK_LINE(1717)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1717)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1717)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1717)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1717)
		::lime::audio::AudioBuffer tmp7 = ::lime::audio::AudioBuffer_obj::fromFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1717)
		return tmp7;
	}
	HX_STACK_LINE(1716)
	return null();
}


::lime::utils::Bytes DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",1724,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1770)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1770)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1770)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1770)
	if ((tmp2)){
		HX_STACK_LINE(1770)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1770)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1770)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1770)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1770)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1770)
		::lime::utils::Bytes tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1770)
		tmp8 = hx::TCast< ::lime::utils::Bytes >::cast(tmp7);
		HX_STACK_LINE(1770)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1771)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1771)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1771)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1771)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1771)
		::lime::utils::Bytes tmp7 = ::lime::utils::Bytes_obj::readFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1771)
		return tmp7;
	}
	HX_STACK_LINE(1770)
	return null();
}


::lime::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",1778,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1794)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1794)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1794)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1794)
	if ((tmp2)){
		HX_STACK_LINE(1796)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1796)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1796)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1796)
		Dynamic fontClass = tmp5;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(1797)
		Dynamic tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1797)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1797)
		::lime::text::Font tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1797)
		tmp8 = hx::TCast< ::lime::text::Font >::cast(tmp7);
		HX_STACK_LINE(1797)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1801)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1801)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1801)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1801)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1801)
		::lime::text::Font tmp7 = ::lime::text::Font_obj::fromFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1801)
		return tmp7;
	}
	HX_STACK_LINE(1794)
	return null();
}


::lime::graphics::Image DefaultAssetLibrary_obj::getImage( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getImage",0x8685ca67,"DefaultAssetLibrary.getImage","DefaultAssetLibrary.hx",1810,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1822)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1822)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1822)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1822)
	if ((tmp2)){
		HX_STACK_LINE(1824)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1824)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1824)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1824)
		Dynamic fontClass = tmp5;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(1825)
		Dynamic tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1825)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1825)
		::lime::graphics::Image tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1825)
		tmp8 = hx::TCast< ::lime::graphics::Image >::cast(tmp7);
		HX_STACK_LINE(1825)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1829)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1829)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1829)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1829)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1829)
		::lime::graphics::Image tmp7 = ::lime::graphics::Image_obj::fromFile(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1829)
		return tmp7;
	}
	HX_STACK_LINE(1822)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",1868,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1876)
	::haxe::ds::StringMap tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1876)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1876)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1876)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1876)
	return tmp3;
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",1883,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1908)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1908)
	::lime::utils::Bytes tmp1 = this->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1908)
	::lime::utils::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(1910)
	bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1910)
	if ((tmp2)){
		HX_STACK_LINE(1912)
		return null();
	}
	else{
		HX_STACK_LINE(1916)
		int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1916)
		::String tmp4 = bytes->getString((int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1916)
		return tmp4;
	}
	HX_STACK_LINE(1910)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",1925,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1927)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1927)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1927)
	if ((tmp)){
		HX_STACK_LINE(1927)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(1927)
		tmp1 = null();
	}
	HX_STACK_LINE(1927)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(1939)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",1944,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1946)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1946)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1946)
	if ((tmp)){
		HX_STACK_LINE(1946)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(1946)
		tmp1 = null();
	}
	HX_STACK_LINE(1946)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(1947)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(1949)
	::haxe::ds::StringMap tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1949)
	Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1949)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
		::String id = __it->next();
		{
			HX_STACK_LINE(1951)
			bool tmp4 = (requestedType == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1951)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1951)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1951)
			if ((tmp5)){
				HX_STACK_LINE(1951)
				::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1951)
				::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1951)
				::String tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1951)
				::String tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1951)
				tmp6 = this->exists(tmp9,tmp10);
			}
			else{
				HX_STACK_LINE(1951)
				tmp6 = true;
			}
			HX_STACK_LINE(1951)
			if ((tmp6)){
				HX_STACK_LINE(1953)
				::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1953)
				items->push(tmp7);
			}
		}
;
	}
	HX_STACK_LINE(1959)
	return items;
}


::lime::app::Future DefaultAssetLibrary_obj::loadAudioBuffer( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","loadAudioBuffer",0xf38e2aae,"DefaultAssetLibrary.loadAudioBuffer","DefaultAssetLibrary.hx",1964,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1964)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1966)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1966)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::DefaultAssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::audio::AudioBuffer run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",2004,0x0fc48912)
		{
			HX_STACK_LINE(2004)
			::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2004)
			::lime::audio::AudioBuffer tmp2 = _g->getAudioBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2004)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(2004)
	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2004)
	promise->completeWith(tmp1);
	HX_STACK_LINE(2008)
	::lime::app::Future tmp2 = promise->future;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2008)
	return tmp2;
}


::lime::app::Future DefaultAssetLibrary_obj::loadBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",2013,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2013)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2015)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2015)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::DefaultAssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::utils::Bytes run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",2065,0x0fc48912)
		{
			HX_STACK_LINE(2065)
			::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2065)
			::lime::utils::Bytes tmp2 = _g->getBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2065)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(2065)
	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2065)
	promise->completeWith(tmp1);
	HX_STACK_LINE(2069)
	::lime::app::Future tmp2 = promise->future;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2069)
	return tmp2;
}


::lime::app::Future DefaultAssetLibrary_obj::loadImage( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","loadImage",0x8c42e193,"DefaultAssetLibrary.loadImage","DefaultAssetLibrary.hx",2074,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2074)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2076)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2076)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::DefaultAssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::graphics::Image run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",2132,0x0fc48912)
		{
			HX_STACK_LINE(2132)
			::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2132)
			::lime::graphics::Image tmp2 = _g->getImage(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(2132)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(2132)
	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2132)
	promise->completeWith(tmp1);
	HX_STACK_LINE(2136)
	::lime::app::Future tmp2 = promise->future;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2136)
	return tmp2;
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",2144,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2144)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(2157)
			::lime::utils::Bytes tmp = ::lime::utils::Bytes_obj::readFile(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(2157)
			::lime::utils::Bytes bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(2160)
			bool tmp1 = (bytes != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(2160)
			if ((tmp1)){
				HX_STACK_LINE(2162)
				bool tmp2 = (bytes->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2162)
				if ((tmp2)){
					HX_STACK_LINE(2164)
					int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2164)
					::String tmp4 = bytes->getString((int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2164)
					::String data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(2166)
					bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(2166)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(2166)
					if ((tmp5)){
						HX_STACK_LINE(2166)
						tmp6 = (data.length > (int)0);
					}
					else{
						HX_STACK_LINE(2166)
						tmp6 = false;
					}
					HX_STACK_LINE(2166)
					if ((tmp6)){
						HX_STACK_LINE(2168)
						::String tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(2168)
						Dynamic tmp8 = ::haxe::Unserializer_obj::run(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(2168)
						cpp::ArrayBase manifest = tmp8;		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(2170)
						{
							HX_STACK_LINE(2170)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2170)
							while((true)){
								HX_STACK_LINE(2170)
								bool tmp9 = (_g < manifest->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(2170)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(2170)
								if ((tmp10)){
									HX_STACK_LINE(2170)
									break;
								}
								HX_STACK_LINE(2170)
								Dynamic tmp11 = manifest->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(2170)
								Dynamic asset = tmp11;		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(2170)
								++(_g);
								HX_STACK_LINE(2172)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(2172)
								{
									HX_STACK_LINE(2172)
									::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(2172)
									::haxe::ds::StringMap tmp13 = this->className;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(2172)
									::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(2172)
									tmp12 = tmp13->exists(tmp14);
								}
								HX_STACK_LINE(2172)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(2172)
								if ((tmp13)){
									HX_STACK_LINE(2177)
									{
										HX_STACK_LINE(2177)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(2177)
										::String value = asset->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(2177)
										::haxe::ds::StringMap tmp14 = this->path;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(2177)
										::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(2177)
										::String tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(2177)
										tmp14->set(tmp15,tmp16);
									}
									HX_STACK_LINE(2179)
									{
										HX_STACK_LINE(2179)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(2179)
										::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(2179)
										tmp14 = hx::TCast< ::String >::cast(asset->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ));
										HX_STACK_LINE(2179)
										::String value = tmp14;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(2179)
										::haxe::ds::StringMap tmp15 = this->type;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(2179)
										::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(2179)
										::String tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(2179)
										tmp15->set(tmp16,tmp17);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(2191)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),2191,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(2191)
				::haxe::Log_obj::trace(HX_HCSTRING("Warning: Could not load asset manifest (bytes was null)","\x83","\x9c","\x5b","\x2e"),tmp2);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(2197)
					Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(2197)
					::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(2197)
					::String tmp2 = (HX_HCSTRING("Warning: Could not load asset manifest (","\x73","\x7e","\xfd","\x21") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(2197)
					::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2197)
					Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),2197,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(2197)
					::haxe::Log_obj::trace(tmp3,tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

::lime::app::Future DefaultAssetLibrary_obj::loadText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",2205,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2207)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2207)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(2227)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2227)
	::lime::app::Future tmp2 = this->loadBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::utils::Bytes bytes){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",2227,0x0fc48912)
		HX_STACK_ARG(bytes,"bytes")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::lime::utils::Bytes,bytes)
			int __ArgCount() const { return 0; }
			::String run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","DefaultAssetLibrary.hx",2229,0x0fc48912)
				{
					HX_STACK_LINE(2231)
					bool tmp3 = (bytes == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(2231)
					if ((tmp3)){
						HX_STACK_LINE(2233)
						return null();
					}
					else{
						HX_STACK_LINE(2237)
						int tmp4 = bytes->length;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(2237)
						::String tmp5 = bytes->getString((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(2237)
						return tmp5;
					}
					HX_STACK_LINE(2231)
					return null();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			HX_STACK_LINE(2229)
			::lime::app::Future tmp3 = ::lime::app::Future_obj::__new( Dynamic(new _Function_2_1(bytes)));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(2229)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(2227)
	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2227)
	promise->completeWith(tmp3);
	HX_STACK_LINE(2247)
	::lime::app::Future tmp4 = promise->future;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2247)
	return tmp4;
}



DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::lime::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::lime::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultAssetLibrary_obj::__mClass;

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultAssetLibrary_obj >;
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

