
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace erazor.macro {
	public class Template : global::haxe.lang.HxObject {
		
		public Template(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public Template() {
			global::erazor.macro.Template.__hx_ctor_erazor_macro_Template(this);
		}
		
		
		public static void __hx_ctor_erazor_macro_Template(global::erazor.macro.Template __temp_me7) {
			__temp_me7.escape = ( (( global::erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun.__hx_current != null )) ? (global::erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun.__hx_current) : (global::erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun.__hx_current = ((global::erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun) (new global::erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun()) )) );
		}
		
		
		public static new object __hx_createEmpty() {
			return new global::erazor.macro.Template(global::haxe.lang.EmptyObject.EMPTY);
		}
		
		
		public static new object __hx_create(global::Array arr) {
			return new global::erazor.macro.Template();
		}
		
		
		public global::haxe.lang.Function escape;
		
		public virtual string execute() {
			return null;
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 1524253569:
					{
						this.escape = ((global::haxe.lang.Function) (@value) );
						return @value;
					}
					
					
					default:
					{
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 1275922997:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "execute", 1275922997)) );
					}
					
					
					case 1524253569:
					{
						return this.escape;
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
					case 1275922997:
					{
						return this.execute();
					}
					
					
					default:
					{
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			baseArr.push("escape");
			{
				base.__hx_getFields(baseArr);
			}
			
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace erazor.macro {
	public class Template___hx_ctor_erazor_macro_Template_21__Fun : global::haxe.lang.Function {
		
		public Template___hx_ctor_erazor_macro_Template_21__Fun() : base(1, 0) {
		}
		
		
		public static global::erazor.macro.Template___hx_ctor_erazor_macro_Template_21__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string str = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			return str;
		}
		
		
	}
}


