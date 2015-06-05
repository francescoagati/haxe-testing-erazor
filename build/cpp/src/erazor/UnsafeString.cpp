#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_erazor_TString
#include <erazor/TString.h>
#endif
#ifndef INCLUDED_erazor_UnsafeString
#include <erazor/UnsafeString.h>
#endif
namespace erazor{

Void UnsafeString_obj::__construct(::String s,Dynamic escapeMethod)
{
HX_STACK_FRAME("erazor.UnsafeString","new",0x7548d6ee,"erazor.UnsafeString.new","erazor/Output.hx",26,0xa91fbab7)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
HX_STACK_ARG(escapeMethod,"escapeMethod")
{
	HX_STACK_LINE(27)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	super::__construct(tmp);
	HX_STACK_LINE(28)
	bool tmp1 = (escapeMethod != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	if ((tmp1)){
		HX_STACK_LINE(29)
		this->escape = escapeMethod;
	}
}
;
	return null();
}

//UnsafeString_obj::~UnsafeString_obj() { }

Dynamic UnsafeString_obj::__CreateEmpty() { return  new UnsafeString_obj; }
hx::ObjectPtr< UnsafeString_obj > UnsafeString_obj::__new(::String s,Dynamic escapeMethod)
{  hx::ObjectPtr< UnsafeString_obj > _result_ = new UnsafeString_obj();
	_result_->__construct(s,escapeMethod);
	return _result_;}

Dynamic UnsafeString_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UnsafeString_obj > _result_ = new UnsafeString_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_escape,UnsafeString_obj)
::String run(::String str){
	HX_STACK_FRAME("erazor.UnsafeString","escape",0x822949b3,"erazor.UnsafeString.escape","erazor/Output.hx",22,0xa91fbab7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(23)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = ::StringTools_obj::htmlEscape(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	return tmp1;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

::String UnsafeString_obj::toString( ){
	HX_STACK_FRAME("erazor.UnsafeString","toString",0x9631475e,"erazor.UnsafeString.toString","erazor/Output.hx",33,0xa91fbab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::String tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = this->escape(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}



UnsafeString_obj::UnsafeString_obj()
{
	escape = new __default_escape(this);
}

void UnsafeString_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UnsafeString);
	HX_MARK_MEMBER_NAME(escape,"escape");
	::erazor::TString_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UnsafeString_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(escape,"escape");
	::erazor::TString_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UnsafeString_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { return escape; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UnsafeString_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { escape=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UnsafeString_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UnsafeString_obj,escape),HX_HCSTRING("escape","\x81","\x43","\xda","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnsafeString_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnsafeString_obj::__mClass,"__mClass");
};

#endif

hx::Class UnsafeString_obj::__mClass;

void UnsafeString_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("erazor.UnsafeString","\xfc","\x87","\xc3","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UnsafeString_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UnsafeString_obj >;
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

} // end namespace erazor
