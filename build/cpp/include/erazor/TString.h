#ifndef INCLUDED_erazor_TString
#define INCLUDED_erazor_TString

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(erazor,TString)
namespace erazor{


class HXCPP_CLASS_ATTRIBUTES  TString_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TString_obj OBJ_;
		TString_obj();
		Void __construct(::String str);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="erazor.TString")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TString_obj > __new(::String str);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TString_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TString","\x45","\x94","\xcf","\xea"); }

		::String s;
		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace erazor

#endif /* INCLUDED_erazor_TString */ 
