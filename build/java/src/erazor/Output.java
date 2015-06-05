package erazor;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Output extends haxe.root.StringBuf
{
	public Output(haxe.lang.EmptyObject empty)
	{
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public Output(haxe.lang.Function escapeMethod)
	{
		//line 44 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 44 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		erazor.Output.__hx_ctor_erazor_Output(this, escapeMethod);
	}
	
	
	public static void __hx_ctor_erazor_Output(erazor.Output __temp_me14, haxe.lang.Function escapeMethod)
	{
		//line 47 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		__temp_me14.escape = ( (( erazor.Output___hx_ctor_erazor_Output_47__Fun.__hx_current != null )) ? (erazor.Output___hx_ctor_erazor_Output_47__Fun.__hx_current) : (erazor.Output___hx_ctor_erazor_Output_47__Fun.__hx_current = ((erazor.Output___hx_ctor_erazor_Output_47__Fun) (new erazor.Output___hx_ctor_erazor_Output_47__Fun()) )) );
		//line 43 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		if (( escapeMethod != null )) 
		{
			//line 43 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			__temp_me14.escape = escapeMethod;
		}
		
		//line 44 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		haxe.root.StringBuf.__hx_ctor__StringBuf(__temp_me14);
	}
	
	
	public static erazor.TString safe(java.lang.String str)
	{
		//line 62 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return new erazor.TString(haxe.lang.Runtime.toString(str));
	}
	
	
	public static erazor.UnsafeString unsafe(java.lang.String str)
	{
		//line 66 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return new erazor.UnsafeString(str, null);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return new erazor.Output(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return new erazor.Output(((haxe.lang.Function) (arr.__get(0)) ));
	}
	
	
	public haxe.lang.Function escape;
	
	public void unsafeAdd(java.lang.Object str)
	{
		//line 52 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		java.lang.String val = null;
		//line 52 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		if (( str instanceof erazor.TString )) 
		{
			//line 53 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			val = haxe.lang.Runtime.toString(str.toString());
		}
		else
		{
			//line 55 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			val = haxe.lang.Runtime.toString(this.escape.__hx_invoke1_o(0.0, haxe.root.Std.string(str)));
		}
		
		//line 58 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		this.add(val);
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			boolean __temp_executeDef1 = true;
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			switch (field.hashCode())
			{
				case -1294172031:
				{
					//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("escape")) 
					{
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						this.escape = ((haxe.lang.Function) (value) );
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return value;
					}
					
					//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
			}
			
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			if (__temp_executeDef1) 
			{
				//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			boolean __temp_executeDef1 = true;
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			switch (field.hashCode())
			{
				case -725156581:
				{
					//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("unsafeAdd")) 
					{
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "unsafeAdd")) );
					}
					
					//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
				case -1294172031:
				{
					//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("escape")) 
					{
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						return this.escape;
					}
					
					//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
			}
			
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			if (__temp_executeDef1) 
			{
				//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			boolean __temp_executeDef1 = true;
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			switch (field.hashCode())
			{
				case -725156581:
				{
					//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					if (field.equals("unsafeAdd")) 
					{
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						__temp_executeDef1 = false;
						//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
						this.unsafeAdd(dynargs.__get(0));
					}
					
					//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
					break;
				}
				
				
			}
			
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			if (__temp_executeDef1) 
			{
				//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		baseArr.push("escape");
		//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
		{
			//line 40 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/Output.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


