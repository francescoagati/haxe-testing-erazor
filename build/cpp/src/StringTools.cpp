#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void StringTools_obj::__construct()
{
	return null();
}

//StringTools_obj::~StringTools_obj() { }

Dynamic StringTools_obj::__CreateEmpty() { return  new StringTools_obj; }
hx::ObjectPtr< StringTools_obj > StringTools_obj::__new()
{  hx::ObjectPtr< StringTools_obj > _result_ = new StringTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringTools_obj > _result_ = new StringTools_obj();
	_result_->__construct();
	return _result_;}

::String StringTools_obj::htmlEscape( ::String s,Dynamic quotes){
	HX_STACK_FRAME("StringTools","htmlEscape",0x0e1a5dd0,"StringTools.htmlEscape","/usr/lib/haxe/std/StringTools.hx",97,0x02f0e375)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(quotes,"quotes")
	HX_STACK_LINE(98)
	Array< ::String > tmp = s.split(HX_HCSTRING("&","\x26","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	::String tmp1 = tmp->join(HX_HCSTRING("&amp;","\xdd","\xd4","\xaa","\x21"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Array< ::String > tmp2 = tmp1.split(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	::String tmp3 = tmp2->join(HX_HCSTRING("&lt;","\x4d","\x74","\x70","\x19"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	Array< ::String > tmp4 = tmp3.split(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	::String tmp5 = tmp4->join(HX_HCSTRING("&gt;","\x08","\xa9","\x6c","\x19"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	s = tmp5;
	HX_STACK_LINE(99)
	Dynamic tmp6 = quotes;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(99)
	::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(99)
	if ((tmp6)){
		HX_STACK_LINE(99)
		Array< ::String > tmp8 = s.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		::String tmp9 = tmp8->join(HX_HCSTRING("&quot;","\x2c","\xd9","\x81","\x8f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		Array< ::String > tmp10 = tmp9.split(HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		tmp7 = tmp10->join(HX_HCSTRING("&#039;","\x62","\x26","\x77","\x78"));
	}
	else{
		HX_STACK_LINE(99)
		tmp7 = s;
	}
	HX_STACK_LINE(99)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,htmlEscape,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"htmlEscape") ) { outValue = htmlEscape_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("htmlEscape","\x4c","\xaf","\x9b","\xa8"),
	::String(null()) };

void StringTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
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

