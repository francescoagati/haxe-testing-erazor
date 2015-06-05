#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_erazor_TString
#include <erazor/TString.h>
#endif
#ifndef INCLUDED_erazor_macro_HtmlTemplate
#include <erazor/macro/HtmlTemplate.h>
#endif
#ifndef INCLUDED_erazor_macro_Template
#include <erazor/macro/Template.h>
#endif
namespace erazor{
namespace macro{

Void HtmlTemplate_obj::__construct()
{
HX_STACK_FRAME("erazor.macro.HtmlTemplate","new",0xecd2417e,"erazor.macro.HtmlTemplate.new","erazor/macro/HtmlTemplate.hx",5,0x50496b30)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//HtmlTemplate_obj::~HtmlTemplate_obj() { }

Dynamic HtmlTemplate_obj::__CreateEmpty() { return  new HtmlTemplate_obj; }
hx::ObjectPtr< HtmlTemplate_obj > HtmlTemplate_obj::__new()
{  hx::ObjectPtr< HtmlTemplate_obj > _result_ = new HtmlTemplate_obj();
	_result_->__construct();
	return _result_;}

Dynamic HtmlTemplate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HtmlTemplate_obj > _result_ = new HtmlTemplate_obj();
	_result_->__construct();
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_escape,HtmlTemplate_obj)
::String run(::String str){
	HX_STACK_FRAME("erazor.macro.HtmlTemplate","escape",0x160cd923,"erazor.macro.HtmlTemplate.escape","erazor/macro/HtmlTemplate.hx",9,0x50496b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(10)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	::String tmp1 = ::StringTools_obj::htmlEscape(tmp,true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	return tmp1;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

::erazor::TString HtmlTemplate_obj::raw( Dynamic str){
	HX_STACK_FRAME("erazor.macro.HtmlTemplate","raw",0xecd54706,"erazor.macro.HtmlTemplate.raw","erazor/macro/HtmlTemplate.hx",14,0x50496b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(15)
	Dynamic tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	::erazor::TString tmp2 = ::erazor::TString_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(HtmlTemplate_obj,raw,return )


HtmlTemplate_obj::HtmlTemplate_obj()
{
	escape = new __default_escape(this);
}

void HtmlTemplate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HtmlTemplate);
	HX_MARK_MEMBER_NAME(escape,"escape");
	::erazor::macro::Template_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HtmlTemplate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(escape,"escape");
	::erazor::macro::Template_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HtmlTemplate_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { return raw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { return escape; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HtmlTemplate_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { escape=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HtmlTemplate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(HtmlTemplate_obj,escape),HX_HCSTRING("escape","\x81","\x43","\xda","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HtmlTemplate_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HtmlTemplate_obj::__mClass,"__mClass");
};

#endif

hx::Class HtmlTemplate_obj::__mClass;

void HtmlTemplate_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("erazor.macro.HtmlTemplate","\x8c","\x6a","\x80","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &HtmlTemplate_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HtmlTemplate_obj >;
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
} // end namespace macro
