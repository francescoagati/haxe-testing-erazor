#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_erazor_Output
#include <erazor/Output.h>
#endif
#ifndef INCLUDED_erazor_TString
#include <erazor/TString.h>
#endif
#ifndef INCLUDED_erazor_UnsafeString
#include <erazor/UnsafeString.h>
#endif
namespace erazor{

Void Output_obj::__construct(Dynamic escapeMethod)
{
HX_STACK_FRAME("erazor.Output","new",0xd1c9b798,"erazor.Output.new","erazor/Output.hx",42,0xa91fbab7)
HX_STACK_THIS(this)
HX_STACK_ARG(escapeMethod,"escapeMethod")
{
	HX_STACK_LINE(43)
	bool tmp = (escapeMethod != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	if ((tmp)){
		HX_STACK_LINE(43)
		this->escape = escapeMethod;
	}
	HX_STACK_LINE(44)
	super::__construct();
}
;
	return null();
}

//Output_obj::~Output_obj() { }

Dynamic Output_obj::__CreateEmpty() { return  new Output_obj; }
hx::ObjectPtr< Output_obj > Output_obj::__new(Dynamic escapeMethod)
{  hx::ObjectPtr< Output_obj > _result_ = new Output_obj();
	_result_->__construct(escapeMethod);
	return _result_;}

Dynamic Output_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Output_obj > _result_ = new Output_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_escape,Output_obj)
::String run(::String str){
	HX_STACK_FRAME("erazor.Output","escape",0x75d2af49,"erazor.Output.escape","erazor/Output.hx",47,0xa91fbab7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(48)
	::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Void Output_obj::unsafeAdd( Dynamic str){
{
		HX_STACK_FRAME("erazor.Output","unsafeAdd",0x3ea6e2d3,"erazor.Output.unsafeAdd","erazor/Output.hx",51,0xa91fbab7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(52)
		Dynamic tmp = str;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::erazor::TString >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		if ((tmp1)){
			HX_STACK_LINE(53)
			tmp2 = str->toString();
		}
		else{
			HX_STACK_LINE(55)
			Dynamic tmp3 = str;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			tmp2 = this->escape(tmp4);
		}
		HX_STACK_LINE(52)
		::String val = tmp2;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(58)
		::String tmp3 = val;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		this->add(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,unsafeAdd,(void))

::erazor::TString Output_obj::safe( ::String str){
	HX_STACK_FRAME("erazor.Output","safe",0xc201e715,"erazor.Output.safe","erazor/Output.hx",61,0xa91fbab7)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(62)
	::erazor::TString tmp = ::erazor::TString_obj::__new(str);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,safe,return )

::erazor::UnsafeString Output_obj::unsafe( ::String str){
	HX_STACK_FRAME("erazor.Output","unsafe",0x051aefee,"erazor.Output.unsafe","erazor/Output.hx",65,0xa91fbab7)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(66)
	::erazor::UnsafeString tmp = ::erazor::UnsafeString_obj::__new(str,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Output_obj,unsafe,return )


Output_obj::Output_obj()
{
	escape = new __default_escape(this);
}

void Output_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Output);
	HX_MARK_MEMBER_NAME(escape,"escape");
	::StringBuf_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Output_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(escape,"escape");
	::StringBuf_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Output_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { return escape; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"unsafeAdd") ) { return unsafeAdd_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Output_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"safe") ) { outValue = safe_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unsafe") ) { outValue = unsafe_dyn(); return true;  }
	}
	return false;
}

Dynamic Output_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { escape=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Output_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Output_obj,escape),HX_HCSTRING("escape","\x81","\x43","\xda","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("unsafeAdd","\x9b","\xc1","\x97","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#endif

hx::Class Output_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("safe","\x4d","\x7d","\x4d","\x4c"),
	HX_HCSTRING("unsafe","\x26","\x84","\x22","\x6a"),
	::String(null()) };

void Output_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("erazor.Output","\xa6","\x4b","\x08","\xed");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Output_obj::__GetStatic;
	__mClass->mSetStaticField = &Output_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Output_obj >;
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
