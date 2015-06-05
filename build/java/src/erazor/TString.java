package erazor;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TString extends haxe.lang.HxObject
{
	public TString(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public TString(java.lang.String str)
	{
		//line 7 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		erazor.TString.__hx_ctor_erazor_TString(this, str);
	}
	
	
	public static void __hx_ctor_erazor_TString(erazor.TString __temp_me12, java.lang.String str)
	{
		//line 8 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		__temp_me12.s = str;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return new erazor.TString(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return new erazor.TString(haxe.lang.Runtime.toString(arr.__get(0)));
	}
	
	
	public java.lang.String s;
	
	@Override public java.lang.String toString()
	{
		//line 13 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return this.s;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			switch (field.hashCode())
			{
				case 115:
				{
					//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("s")) 
					{
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						this.s = haxe.lang.Runtime.toString(value);
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return value;
					}
					
					//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			switch (field.hashCode())
			{
				case -1776922004:
				{
					//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("toString")) 
					{
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "toString")) );
					}
					
					//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
				case 115:
				{
					//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("s")) 
					{
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return this.s;
					}
					
					//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			switch (field.hashCode())
			{
				case -1776922004:
				{
					//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("toString")) 
					{
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return this.toString();
					}
					
					//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
			}
			
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		baseArr.push("s");
		//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 3 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


