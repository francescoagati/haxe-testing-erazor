package erazor.macro;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class HtmlTemplate extends erazor.macro.Template
{
	public HtmlTemplate(haxe.lang.EmptyObject empty)
	{
		//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public HtmlTemplate()
	{
		//line 16 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 16 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		erazor.macro.HtmlTemplate.__hx_ctor_erazor_macro_HtmlTemplate(this);
	}
	
	
	public static void __hx_ctor_erazor_macro_HtmlTemplate(erazor.macro.HtmlTemplate __temp_me5)
	{
		//line 16 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		erazor.macro.Template.__hx_ctor_erazor_macro_Template(__temp_me5);
		//line 8 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		__temp_me5.escape = ( (( erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun.__hx_current != null )) ? (erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun.__hx_current) : (erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun.__hx_current = ((erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun) (new erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun()) )) );
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		return new erazor.macro.HtmlTemplate(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		return new erazor.macro.HtmlTemplate();
	}
	
	
	public erazor.TString raw(java.lang.Object str)
	{
		//line 15 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		return new erazor.TString(haxe.lang.Runtime.toString(haxe.root.Std.string(str)));
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		{
			//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
			boolean __temp_executeDef1 = true;
			//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
			switch (field.hashCode())
			{
				case 112680:
				{
					//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
					if (field.equals("raw")) 
					{
						//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "raw")) );
					}
					
					//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
					break;
				}
				
				
			}
			
			//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
			if (__temp_executeDef1) 
			{
				//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
		{
			//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
			boolean __temp_executeDef1 = true;
			//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
			switch (field.hashCode())
			{
				case 112680:
				{
					//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
					if (field.equals("raw")) 
					{
						//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
						__temp_executeDef1 = false;
						//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
						return this.raw(dynargs.__get(0));
					}
					
					//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
					break;
				}
				
				
			}
			
			//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
			if (__temp_executeDef1) 
			{
				//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 5 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/HtmlTemplate.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


