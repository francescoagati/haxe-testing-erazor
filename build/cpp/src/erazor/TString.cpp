#include <hxcpp.h>

#ifndef INCLUDED_erazor_TString
#include <erazor/TString.h>
#endif
namespace erazor{

Void TString_obj::__construct(::String str)
{
HX_STACK_FRAME("erazor.TString","new",0x79fa7112,"erazor.TString.new","erazor/Output.hx",8,0xa91fbab7)
HX_STACK_THIS(this)
HX_STACK_ARG(str,"str")
{
	HX_STACK_LINE(8)
	this->s = str;
}
;
	return null();
}

//TString_obj::~TString_obj() { }

Dynamic TString_obj::__CreateEmpty() { return  new TString_obj; }
hx::ObjectPtr< TString_obj > TString_obj::__new(::String str)
{  hx::ObjectPtr< TString_obj > _result_ = new TString_obj();
	_result_->__construct(str);
	return _result_;}

Dynamic TString_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TString_obj > _result_ = new TString_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String TString_obj::toString( ){
	HX_STACK_FRAME("erazor.TString","toString",0x4a4a6aba,"erazor.TString.toString","erazor/Output.hx",12,0xa91fbab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	::String tmp = this->s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TString_obj,toString,return )


TString_obj::TString_obj()
{
}

void TString_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TString);
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void TString_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic TString_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TString_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TString_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TString_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TString_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TString_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TString_obj::__mClass,"__mClass");
};

#endif

hx::Class TString_obj::__mClass;

void TString_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("erazor.TString","\x20","\x40","\x4c","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TString_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TString_obj >;
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
