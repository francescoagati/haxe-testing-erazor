#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_TemplateHello
#include <TemplateHello.h>
#endif
#ifndef INCLUDED_erazor_Output
#include <erazor/Output.h>
#endif
#ifndef INCLUDED_erazor_macro_HtmlTemplate
#include <erazor/macro/HtmlTemplate.h>
#endif
#ifndef INCLUDED_erazor_macro_Template
#include <erazor/macro/Template.h>
#endif

Void TemplateHello_obj::__construct()
{
HX_STACK_FRAME("TemplateHello","new",0x687ba54a,"TemplateHello.new","Main.hx",3,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(3)
	super::__construct();
}
;
	return null();
}

//TemplateHello_obj::~TemplateHello_obj() { }

Dynamic TemplateHello_obj::__CreateEmpty() { return  new TemplateHello_obj; }
hx::ObjectPtr< TemplateHello_obj > TemplateHello_obj::__new()
{  hx::ObjectPtr< TemplateHello_obj > _result_ = new TemplateHello_obj();
	_result_->__construct();
	return _result_;}

Dynamic TemplateHello_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TemplateHello_obj > _result_ = new TemplateHello_obj();
	_result_->__construct();
	return _result_;}

::String TemplateHello_obj::execute( ){
	HX_STACK_FRAME("TemplateHello","execute",0x82729c1f,"TemplateHello.execute","Template.erazor",1,0x470e8add)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	Dynamic tmp = this->escape_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	::erazor::Output tmp1 = ::erazor::Output_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	::erazor::Output __b__ = tmp1;		HX_STACK_VAR(__b__,"__b__");
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(2)
		__b__->add(HX_HCSTRING("hello from ","\xe8","\x6f","\xa5","\x30"));
		HX_STACK_LINE(3)
		::String tmp2 = this->language;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1)
		__b__->unsafeAdd(tmp2);
		HX_STACK_LINE(6)
		__b__->add(HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00"));
		HX_STACK_LINE(1)
		{
			HX_STACK_LINE(1)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(3)
			Array< ::String > tmp3 = this->words;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(3)
			Array< ::String > _g1 = tmp3;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1)
			while((true)){
				HX_STACK_LINE(1)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1)
				if ((tmp5)){
					HX_STACK_LINE(1)
					break;
				}
				HX_STACK_LINE(1)
				::String tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1)
				::String word = tmp6;		HX_STACK_VAR(word,"word");
				HX_STACK_LINE(1)
				++(_g);
				HX_STACK_LINE(12)
				__b__->add(HX_HCSTRING("\n  ","\x8a","\xb2","\x07","\x00"));
				HX_STACK_LINE(5)
				::String tmp7 = word.toUpperCase();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(4)
				__b__->unsafeAdd(tmp7);
				HX_STACK_LINE(17)
				__b__->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
				HX_STACK_LINE(19)
				Dynamic();
			}
		}
		HX_STACK_LINE(22)
		__b__->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(205)
	::String tmp2 = __b__->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	return tmp2;
}



TemplateHello_obj::TemplateHello_obj()
{
}

void TemplateHello_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TemplateHello);
	HX_MARK_MEMBER_NAME(language,"language");
	HX_MARK_MEMBER_NAME(words,"words");
	::erazor::macro::HtmlTemplate_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TemplateHello_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(language,"language");
	HX_VISIT_MEMBER_NAME(words,"words");
	::erazor::macro::HtmlTemplate_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TemplateHello_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"words") ) { return words; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { return language; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TemplateHello_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"words") ) { words=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { language=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TemplateHello_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TemplateHello_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("language","\x58","\x80","\x11","\x7a"));
	outFields->push(HX_HCSTRING("words","\x69","\x8f","\x64","\xce"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TemplateHello_obj,language),HX_HCSTRING("language","\x58","\x80","\x11","\x7a")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TemplateHello_obj,words),HX_HCSTRING("words","\x69","\x8f","\x64","\xce")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("language","\x58","\x80","\x11","\x7a"),
	HX_HCSTRING("words","\x69","\x8f","\x64","\xce"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TemplateHello_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TemplateHello_obj::__mClass,"__mClass");
};

#endif

hx::Class TemplateHello_obj::__mClass;

void TemplateHello_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TemplateHello","\x58","\xf8","\xa0","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TemplateHello_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TemplateHello_obj >;
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

