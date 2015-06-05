
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace erazor.macro {
	public class HtmlTemplate : global::erazor.macro.Template {
		
		public HtmlTemplate(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public HtmlTemplate() : base(global::haxe.lang.EmptyObject.EMPTY) {
			global::erazor.macro.HtmlTemplate.__hx_ctor_erazor_macro_HtmlTemplate(this);
		}
		
		
		public static void __hx_ctor_erazor_macro_HtmlTemplate(global::erazor.macro.HtmlTemplate __temp_me9) {
			global::erazor.macro.Template.__hx_ctor_erazor_macro_Template(__temp_me9);
			__temp_me9.escape = ( (( global::erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun.__hx_current != null )) ? (global::erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun.__hx_current) : (global::erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun.__hx_current = ((global::erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun) (new global::erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun()) )) );
		}
		
		
		public static new object __hx_createEmpty() {
			return new global::erazor.macro.HtmlTemplate(global::haxe.lang.EmptyObject.EMPTY);
		}
		
		
		public static new object __hx_create(global::Array arr) {
			return new global::erazor.macro.HtmlTemplate();
		}
		
		
		public virtual global::erazor.TString raw(object str) {
			return new global::erazor.TString(((string) (global::Std.@string(str)) ));
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 5690856:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "raw", 5690856)) );
					}
					
					
					default:
					{
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_invokeField(string field, int hash, global::Array dynargs) {
			unchecked {
				switch (hash) {
					case 5690856:
					{
						return this.raw(dynargs[0]);
					}
					
					
					default:
					{
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace erazor.macro {
	public class HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun : global::haxe.lang.Function {
		
		public HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun() : base(1, 0) {
		}
		
		
		public static global::erazor.macro.HtmlTemplate___hx_ctor_erazor_macro_HtmlTemplate_8__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string str = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			return global::StringTools.htmlEscape(str, new global::haxe.lang.Null<bool>(true, true));
		}
		
		
	}
}


