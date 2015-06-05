#ifndef INCLUDED_erazor_UnsafeString
#define INCLUDED_erazor_UnsafeString

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_erazor_TString
#include <erazor/TString.h>
#endif
HX_DECLARE_CLASS1(erazor,TString)
HX_DECLARE_CLASS1(erazor,UnsafeString)
namespace erazor{


class HXCPP_CLASS_ATTRIBUTES  UnsafeString_obj : public ::erazor::TString_obj{
	public:
		typedef ::erazor::TString_obj super;
		typedef UnsafeString_obj OBJ_;
		UnsafeString_obj();
		Void __construct(::String s,Dynamic escapeMethod);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="erazor.UnsafeString")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UnsafeString_obj > __new(::String s,Dynamic escapeMethod);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UnsafeString_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UnsafeString","\xb7","\x0d","\xe4","\xfa"); }

		Dynamic escape;
		inline Dynamic &escape_dyn() {return escape; }

		virtual ::String toString( );

};

} // end namespace erazor

#endif /* INCLUDED_erazor_UnsafeString */ 
