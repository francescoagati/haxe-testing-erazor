#include <hxcpp.h>

#ifndef INCLUDED_erazor_macro_Template
#include <erazor/macro/Template.h>
#endif
namespace erazor{
namespace macro{

Void Template_obj::__construct()
{
HX_STACK_FRAME("erazor.macro.Template","new",0x50c17bf3,"erazor.macro.Template.new","erazor/macro/Template.hx",17,0xd638df5b)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Template_obj::~Template_obj() { }

Dynamic Template_obj::__CreateEmpty() { return  new Template_obj; }
hx::ObjectPtr< Template_obj > Template_obj::__new()
{  hx::ObjectPtr< Template_obj > _result_ = new Template_obj();
	_result_->__construct();
	return _result_;}

Dynamic Template_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Template_obj > _result_ = new Template_obj();
	_result_->__construct();
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_escape,Template_obj)
::String run(::String str){
	HX_STACK_FRAME("erazor.macro.Template","escape",0x3533d5ce,"erazor.macro.Template.escape","erazor/macro/Template.hx",22,0xd638df5b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(23)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

::String Template_obj::execute( ){
	HX_STACK_FRAME("erazor.macro.Template","execute",0x80137b48,"erazor.macro.Template.execute","erazor/macro/Template.hx",28,0xd638df5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Template_obj,execute,return )


Template_obj::Template_obj()
{
	escape = new __default_escape(this);
}

void Template_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Template);
	HX_MARK_MEMBER_NAME(escape,"escape");
	HX_MARK_END_CLASS();
}

void Template_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(escape,"escape");
}

Dynamic Template_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { return escape; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Template_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { escape=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Template_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Template_obj,escape),HX_HCSTRING("escape","\x81","\x43","\xda","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Template_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Template_obj::__mClass,"__mClass");
};

#endif

hx::Class Template_obj::__mClass;

void Template_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("erazor.macro.Template","\x81","\x06","\xda","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Template_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Template_obj >;
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
