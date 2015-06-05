#ifndef INCLUDED_TemplateHello
#define INCLUDED_TemplateHello

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_erazor_macro_HtmlTemplate
#include <erazor/macro/HtmlTemplate.h>
#endif
HX_DECLARE_CLASS0(TemplateHello)
HX_DECLARE_CLASS2(erazor,macro,HtmlTemplate)
HX_DECLARE_CLASS2(erazor,macro,Template)


class HXCPP_CLASS_ATTRIBUTES  TemplateHello_obj : public ::erazor::macro::HtmlTemplate_obj{
	public:
		typedef ::erazor::macro::HtmlTemplate_obj super;
		typedef TemplateHello_obj OBJ_;
		TemplateHello_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="TemplateHello")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TemplateHello_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TemplateHello_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TemplateHello","\x58","\xf8","\xa0","\x6e"); }

		::String language;
		Array< ::String > words;
		virtual ::String execute( );

};


#endif /* INCLUDED_TemplateHello */ 
