package erazor.macro;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Template extends haxe.lang.HxObject
{
	public Template(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Template()
	{
		//line 16 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		erazor.macro.Template.__hx_ctor_erazor_macro_Template(this);
	}
	
	
	public static void __hx_ctor_erazor_macro_Template(erazor.macro.Template __temp_me3)
	{
		//line 21 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		__temp_me3.escape = ( (( erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun.__hx_current != null )) ? (erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun.__hx_current) : (erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun.__hx_current = ((erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun) (new erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun()) )) );
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		return new erazor.macro.Template(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		return new erazor.macro.Template();
	}
	
	
	public haxe.lang.Function escape;
	
	public java.lang.String execute()
	{
		//line 28 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		return null;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		{
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			switch (field.hashCode())
			{
				case -1294172031:
				{
					//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
					if (field.equals("escape")) 
					{
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						__temp_executeDef1 = false;
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						this.escape = ((haxe.lang.Function) (value) );
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						return value;
					}
					
					//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
					break;
				}
				
				
			}
			
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		{
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			switch (field.hashCode())
			{
				case -1319569547:
				{
					//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
					if (field.equals("execute")) 
					{
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						__temp_executeDef1 = false;
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "execute")) );
					}
					
					//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
					break;
				}
				
				
				case -1294172031:
				{
					//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
					if (field.equals("escape")) 
					{
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						__temp_executeDef1 = false;
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						return this.escape;
					}
					
					//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
					break;
				}
				
				
			}
			
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, haxe.root.Array dynargs)
	{
		//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		{
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			boolean __temp_executeDef1 = true;
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			switch (field.hashCode())
			{
				case -1319569547:
				{
					//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
					if (field.equals("execute")) 
					{
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						__temp_executeDef1 = false;
						//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
						return this.execute();
					}
					
					//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
					break;
				}
				
				
			}
			
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			if (__temp_executeDef1) 
			{
				//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		baseArr.push("escape");
		//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		{
			//line 14 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


