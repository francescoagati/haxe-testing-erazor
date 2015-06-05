package erazor.macro;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun extends haxe.lang.Function
{
	public HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun()
	{
		//line 10 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		super(1, 0);
	}
	
	
	public static erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun __hx_current;
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 8 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		java.lang.String str = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (haxe.lang.Runtime.toString(__fn_float1)) : (haxe.lang.Runtime.toString(__fn_dyn1)) );
		//line 10 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		return haxe.root.StringTools.htmlEscape(str, true);
	}
	
	
}


