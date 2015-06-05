package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class TemplateHello extends erazor.macro.HtmlTemplate
{
	public TemplateHello(haxe.lang.EmptyObject empty)
	{
		//line 3 "/home/francesco/projects/test/tmp/Main.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public TemplateHello()
	{
		//line 16 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 16 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		haxe.root.TemplateHello.__hx_ctor__TemplateHello(this);
	}
	
	
	public static void __hx_ctor__TemplateHello(haxe.root.TemplateHello __temp_me6)
	{
		//line 16 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Template.hx"
		erazor.macro.HtmlTemplate.__hx_ctor_erazor_macro_HtmlTemplate(__temp_me6);
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 3 "/home/francesco/projects/test/tmp/Main.hx"
		return new haxe.root.TemplateHello(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 3 "/home/francesco/projects/test/tmp/Main.hx"
		return new haxe.root.TemplateHello();
	}
	
	
	public java.lang.String language;
	
	public haxe.root.Array<java.lang.String> words;
	
	@Override public java.lang.String execute()
	{
		//line 203 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Build.hx"
		erazor.Output __b__ = new erazor.Output(((haxe.lang.Function) (this.escape) ));
		//line 1 "/home/francesco/projects/test/tmp/Template.erazor"
		{
			//line 2 "_internal_"
			__b__.add("hello from ");
			//line 1 "/home/francesco/projects/test/tmp/Template.erazor"
			__b__.unsafeAdd(this.language);
			//line 6 "_internal_"
			__b__.add("\n\n");
			//line 1 "/home/francesco/projects/test/tmp/Template.erazor"
			{
				//line 1 "/home/francesco/projects/test/tmp/Template.erazor"
				int _g = 0;
				//line 3 "/home/francesco/projects/test/tmp/Template.erazor"
				haxe.root.Array<java.lang.String> _g1 = this.words;
				//line 1 "/home/francesco/projects/test/tmp/Template.erazor"
				while (( _g < _g1.length ))
				{
					//line 1 "/home/francesco/projects/test/tmp/Template.erazor"
					java.lang.String word = _g1.__get(_g);
					//line 1 "/home/francesco/projects/test/tmp/Template.erazor"
					 ++ _g;
					//line 12 "_internal_"
					__b__.add("\n  ");
					//line 4 "/home/francesco/projects/test/tmp/Template.erazor"
					__b__.unsafeAdd(word.toUpperCase());
					//line 17 "_internal_"
					__b__.add("\n");
					//line 19 "_internal_"
					java.lang.Object __temp_expr1 = null;
				}
				
			}
			
			//line 22 "_internal_"
			__b__.add("\n");
		}
		
		//line 205 "/usr/lib/haxe/lib/erazor/1,0,0-rc,1/src/erazor/macro/Build.hx"
		return __b__.toString();
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 3 "/home/francesco/projects/test/tmp/Main.hx"
		{
			//line 3 "/home/francesco/projects/test/tmp/Main.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/home/francesco/projects/test/tmp/Main.hx"
			switch (field.hashCode())
			{
				case 113318569:
				{
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					if (field.equals("words")) 
					{
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						__temp_executeDef1 = false;
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						this.words = ((haxe.root.Array<java.lang.String>) (value) );
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						return value;
					}
					
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					break;
				}
				
				
				case -1613589672:
				{
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					if (field.equals("language")) 
					{
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						__temp_executeDef1 = false;
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						this.language = haxe.lang.Runtime.toString(value);
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						return value;
					}
					
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					break;
				}
				
				
			}
			
			//line 3 "/home/francesco/projects/test/tmp/Main.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/home/francesco/projects/test/tmp/Main.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 3 "/home/francesco/projects/test/tmp/Main.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 3 "/home/francesco/projects/test/tmp/Main.hx"
		{
			//line 3 "/home/francesco/projects/test/tmp/Main.hx"
			boolean __temp_executeDef1 = true;
			//line 3 "/home/francesco/projects/test/tmp/Main.hx"
			switch (field.hashCode())
			{
				case -1319569547:
				{
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					if (field.equals("execute")) 
					{
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						__temp_executeDef1 = false;
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						return ((haxe.lang.Function) (new haxe.lang.Closure(this, "execute")) );
					}
					
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					break;
				}
				
				
				case -1613589672:
				{
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					if (field.equals("language")) 
					{
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						__temp_executeDef1 = false;
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						return this.language;
					}
					
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					break;
				}
				
				
				case 113318569:
				{
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					if (field.equals("words")) 
					{
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						__temp_executeDef1 = false;
						//line 3 "/home/francesco/projects/test/tmp/Main.hx"
						return this.words;
					}
					
					//line 3 "/home/francesco/projects/test/tmp/Main.hx"
					break;
				}
				
				
			}
			
			//line 3 "/home/francesco/projects/test/tmp/Main.hx"
			if (__temp_executeDef1) 
			{
				//line 3 "/home/francesco/projects/test/tmp/Main.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 3 "/home/francesco/projects/test/tmp/Main.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 3 "/home/francesco/projects/test/tmp/Main.hx"
		baseArr.push("words");
		//line 3 "/home/francesco/projects/test/tmp/Main.hx"
		baseArr.push("language");
		//line 3 "/home/francesco/projects/test/tmp/Main.hx"
		{
			//line 3 "/home/francesco/projects/test/tmp/Main.hx"
			super.__hx_getFields(baseArr);
		}
		
	}
	
	
}


