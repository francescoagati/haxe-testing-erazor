#ifndef INCLUDED_erazor_Output
#define INCLUDED_erazor_Output

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(erazor,Output)
HX_DECLARE_CLASS1(erazor,TString)
HX_DECLARE_CLASS1(erazor,UnsafeString)
namespace erazor{


class HXCPP_CLASS_ATTRIBUTES  Output_obj : public ::StringBuf_obj{
	public:
		typedef ::StringBuf_obj super;
		typedef Output_obj OBJ_;
		Output_obj();
		Void __construct(Dynamic escapeMethod);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="erazor.Output")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Output_obj > __new(Dynamic escapeMethod);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Output_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Output","\x21","\x83","\x15","\x41"); }

		static ::erazor::TString safe( ::String str);
		static Dynamic safe_dyn();

		static ::erazor::UnsafeString unsafe( ::String str);
		static Dynamic unsafe_dyn();

		Dynamic escape;
		inline Dynamic &escape_dyn() {return escape; }

		virtual Void unsafeAdd( Dynamic str);
		Dynamic unsafeAdd_dyn();

};

} // end namespace erazor

#endif /* INCLUDED_erazor_Output */ 
