package erazor;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class UnsafeString extends erazor.TString
{
	public UnsafeString(haxe.lang.EmptyObject empty)
	{
		//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public UnsafeString(java.lang.String s, haxe.lang.Function escapeMethod)
	{
		//line 27 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 27 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		erazor.UnsafeString.__hx_ctor_erazor_UnsafeString(this, s, escapeMethod);
	}
	
	
	public static void __hx_ctor_erazor_UnsafeString(erazor.UnsafeString __temp_me13, java.lang.String s, haxe.lang.Function escapeMethod)
	{
		//line 27 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		erazor.TString.__hx_ctor_erazor_TString(__temp_me13, s);
		//line 22 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		__temp_me13.escape = ( (( erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun.__hx_current != null )) ? (erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun.__hx_current) : (erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun.__hx_current = ((erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun) (new erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun()) )) );
		//line 28 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		if (( escapeMethod != null )) 
		{
			//line 29 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			__temp_me13.escape = escapeMethod;
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return new erazor.UnsafeString(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return new erazor.UnsafeString(haxe.lang.Runtime.toString(arr.__get(0)), ((haxe.lang.Function) (arr.__get(1)) ));
	}
	
	
	public haxe.lang.Function escape;
	
	@Override public java.lang.String toString()
	{
		//line 34 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return haxe.lang.Runtime.toString(this.escape.__hx_invoke1_o(0.0, this.s));
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			switch (field.hashCode())
			{
				case -1294172031:
				{
					//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("escape")) 
					{
						//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						this.escape = ((haxe.lang.Function) (value) );
						//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return value;
					}
					
					//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
			}
			
			//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			boolean __temp_executeDef1 = true;
			//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			switch (field.hashCode())
			{
				case -1776922004:
				{
					//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("toString")) 
					{
						//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
				case -1294172031:
				{
					//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("escape")) 
					{
						//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return this.escape;
					}
					
					//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
			}
			
			//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			if (__temp_executeDef1) 
			{
				//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		baseArr.push("escape");
		//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 20 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


