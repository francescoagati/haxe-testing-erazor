package erazor;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun extends haxe.lang.Function
{
	public UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun()
	{
		//line 23 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		super(1, 0);
	}
	
	
	public static erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun __hx_current;
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 22 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		java.lang.String str = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (haxe.lang.Runtime.toString(__fn_float1)) : (haxe.lang.Runtime.toString(__fn_dyn1)) );
		//line 23 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return haxe.root.StringTools.htmlEscape(str, true);
	}
	
	
}


