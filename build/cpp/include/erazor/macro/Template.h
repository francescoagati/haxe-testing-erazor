#ifndef INCLUDED_erazor_macro_Template
#define INCLUDED_erazor_macro_Template

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(erazor,macro,Template)
namespace erazor{
namespace macro{


class HXCPP_CLASS_ATTRIBUTES  Template_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Template_obj OBJ_;
		Template_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="erazor.macro.Template")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Template_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Template_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Template","\x5a","\xa4","\xf9","\x85"); }

		Dynamic escape;
		inline Dynamic &escape_dyn() {return escape; }

		virtual ::String execute( );
		Dynamic execute_dyn();

};

} // end namespace erazor
} // end namespace macro

#endif /* INCLUDED_erazor_macro_Template */ 
