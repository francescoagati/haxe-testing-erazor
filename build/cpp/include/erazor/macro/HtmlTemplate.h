#ifndef INCLUDED_erazor_macro_HtmlTemplate
#define INCLUDED_erazor_macro_HtmlTemplate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_erazor_macro_Template
#include <erazor/macro/Template.h>
#endif
HX_DECLARE_CLASS1(erazor,TString)
HX_DECLARE_CLASS2(erazor,macro,HtmlTemplate)
HX_DECLARE_CLASS2(erazor,macro,Template)
namespace erazor{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  HtmlTemplate_obj : public ::erazor::macro::Template_obj{
	public:
		typedef ::erazor::macro::Template_obj super;
		typedef HtmlTemplate_obj OBJ_;
		HtmlTemplate_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="erazor.macro.HtmlTemplate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HtmlTemplate_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HtmlTemplate_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("HtmlTemplate","\xe5","\x68","\x26","\x46"); }

		
		virtual ::erazor::TString raw( Dynamic str);
		Dynamic raw_dyn();

};

} // end namespace erazor
} // end namespace macro

#endif /* INCLUDED_erazor_macro_HtmlTemplate */ 
