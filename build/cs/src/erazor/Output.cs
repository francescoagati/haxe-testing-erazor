
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace erazor {
	public class TString : global::haxe.lang.HxObject {
		
		public TString(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public TString(string str) {
			global::erazor.TString.__hx_ctor_erazor_TString(this, str);
		}
		
		
		public static void __hx_ctor_erazor_TString(global::erazor.TString __temp_me21, string str) {
			__temp_me21.s = str;
		}
		
		
		public static new object __hx_createEmpty() {
			return new global::erazor.TString(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		
		
		public static new object __hx_create(global::Array arr) {
			return new global::erazor.TString(global::haxe.lang.Runtime.toString(arr[0]));
		}
		
		
		public string s;
		
		public virtual string toString() {
			return this.s;
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 115:
					{
						this.s = global::haxe.lang.Runtime.toString(@value);
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
					case 946786476:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
					}
					
					
					case 115:
					{
						return this.s;
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
					case 946786476:
					{
						return this.toString();
					}
					
					
					default:
					{
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
			}
		}
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			baseArr.push("s");
			{
				base.__hx_getFields(baseArr);
			}
			
		}
		
		
		public override string ToString(){
			return this.toString();
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace erazor {
	public class UnsafeString : global::erazor.TString {
		
		public UnsafeString(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
		}
		
		
		public UnsafeString(string s, global::haxe.lang.Function escapeMethod) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			global::erazor.UnsafeString.__hx_ctor_erazor_UnsafeString(this, s, escapeMethod);
		}
		
		
		public static void __hx_ctor_erazor_UnsafeString(global::erazor.UnsafeString __temp_me22, string s, global::haxe.lang.Function escapeMethod) {
			global::erazor.TString.__hx_ctor_erazor_TString(__temp_me22, s);
			__temp_me22.escape = ( (( global::erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun.__hx_current != null )) ? (global::erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun.__hx_current) : (global::erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun.__hx_current = ((global::erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun) (new global::erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun()) )) );
			if (( escapeMethod != null )) {
				__temp_me22.escape = escapeMethod;
			}
			
		}
		
		
		public static new object __hx_createEmpty() {
			return new global::erazor.UnsafeString(global::haxe.lang.EmptyObject.EMPTY);
		}
		
		
		public static new object __hx_create(global::Array arr) {
			unchecked {
				return new global::erazor.UnsafeString(global::haxe.lang.Runtime.toString(arr[0]), ((global::haxe.lang.Function) (arr[1]) ));
			}
		}
		
		
		public global::haxe.lang.Function escape;
		
		public override string toString() {
			return global::haxe.lang.Runtime.toString(this.escape.__hx_invoke1_o(default(double), this.s));
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
					case 946786476:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "toString", 946786476)) );
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
		
		
		public override void __hx_getFields(global::Array<object> baseArr) {
			baseArr.push("escape");
			{
				base.__hx_getFields(baseArr);
			}
			
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace erazor {
	public class UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun : global::haxe.lang.Function {
		
		public UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun() : base(1, 0) {
		}
		
		
		public static global::erazor.UnsafeString___hx_ctor_erazor_UnsafeString_22__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string str = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			return global::StringTools.htmlEscape(str, new global::haxe.lang.Null<bool>(true, true));
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace erazor {
	public class Output : global::StringBuf {
		
		public Output(global::haxe.lang.EmptyObject empty) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
		}
		
		
		public Output(global::haxe.lang.Function escapeMethod) : base(global::haxe.lang.EmptyObject.EMPTY) {
			global::erazor.Output.__hx_ctor_erazor_Output(this, escapeMethod);
		}
		
		
		public static void __hx_ctor_erazor_Output(global::erazor.Output __temp_me23, global::haxe.lang.Function escapeMethod) {
			__temp_me23.escape = ( (( global::erazor.Output___hx_ctor_erazor_Output_47__Fun.__hx_current != null )) ? (global::erazor.Output___hx_ctor_erazor_Output_47__Fun.__hx_current) : (global::erazor.Output___hx_ctor_erazor_Output_47__Fun.__hx_current = ((global::erazor.Output___hx_ctor_erazor_Output_47__Fun) (new global::erazor.Output___hx_ctor_erazor_Output_47__Fun()) )) );
			if (( escapeMethod != null )) {
				__temp_me23.escape = escapeMethod;
			}
			
			global::StringBuf.__hx_ctor__StringBuf(__temp_me23);
		}
		
		
		public static global::erazor.TString safe(string str) {
			return new global::erazor.TString(((string) (str) ));
		}
		
		
		public static global::erazor.UnsafeString @unsafe(string str) {
			return new global::erazor.UnsafeString(str, null);
		}
		
		
		public static new object __hx_createEmpty() {
			return new global::erazor.Output(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) ));
		}
		
		
		public static new object __hx_create(global::Array arr) {
			return new global::erazor.Output(((global::haxe.lang.Function) (arr[0]) ));
		}
		
		
		public global::haxe.lang.Function escape;
		
		public virtual void unsafeAdd(object str) {
			string val = null;
			if (( str is global::erazor.TString )) {
				val = global::haxe.lang.Runtime.toString(((object) (global::haxe.lang.Runtime.callField(str, "toString", 946786476, null)) ));
			}
			else {
				val = global::haxe.lang.Runtime.toString(this.escape.__hx_invoke1_o(default(double), global::Std.@string(str)));
			}
			
			this.b.Append(((string) (global::Std.@string(val)) ));
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
					case 1888993691:
					{
						return ((global::haxe.lang.Function) (new global::haxe.lang.Closure(this, "unsafeAdd", 1888993691)) );
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
					case 1888993691:
					{
						this.unsafeAdd(dynargs[0]);
						break;
					}
					
					
					default:
					{
						return base.__hx_invokeField(field, hash, dynargs);
					}
					
				}
				
				return null;
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
namespace erazor {
	public class Output___hx_ctor_erazor_Output_47__Fun : global::haxe.lang.Function {
		
		public Output___hx_ctor_erazor_Output_47__Fun() : base(1, 0) {
		}
		
		
		public static global::erazor.Output___hx_ctor_erazor_Output_47__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string str = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			return str;
		}
		
		
	}
}


