
#pragma warning disable 109, 114, 219, 429, 168, 162
public class TemplateHello : global::erazor.macro.HtmlTemplate {
	
	public TemplateHello(global::haxe.lang.EmptyObject empty) : base(global::haxe.lang.EmptyObject.EMPTY) {
	}
	
	
	public TemplateHello() : base(global::haxe.lang.EmptyObject.EMPTY) {
		global::TemplateHello.__hx_ctor__TemplateHello(this);
	}
	
	
	public static void __hx_ctor__TemplateHello(global::TemplateHello __temp_me10) {
		global::erazor.macro.HtmlTemplate.__hx_ctor_erazor_macro_HtmlTemplate(__temp_me10);
	}
	
	
	public static new object __hx_createEmpty() {
		return new global::TemplateHello(global::haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static new object __hx_create(global::Array arr) {
		return new global::TemplateHello();
	}
	
	
	public string language;
	
	public global::Array<object> words;
	
	public override string execute() {
		global::erazor.Output __b__ = new global::erazor.Output(((global::haxe.lang.Function) (this.escape) ));
		{
			__b__.b.Append(((string) ("hello from ") ));
			__b__.unsafeAdd(this.language);
			__b__.b.Append(((string) ("\n\n") ));
			{
				int _g = 0;
				global::Array<object> _g1 = this.words;
				while (( _g < _g1.length )) {
					string word = global::haxe.lang.Runtime.toString(_g1[_g]);
					 ++ _g;
					__b__.b.Append(((string) ("\n  ") ));
					__b__.unsafeAdd(word.ToUpperInvariant());
					__b__.b.Append(((string) ("\n") ));
					object __temp_expr1 = null;
				}
				
			}
			
			__b__.b.Append(((string) ("\n") ));
		}
		
		return __b__.b.ToString();
	}
	
	
	public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
		unchecked {
			switch (hash) {
				case 1315213161:
				{
					this.words = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
					return @value;
				}
				
				
				case 2047967320:
				{
					this.language = global::haxe.lang.Runtime.toString(@value);
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
				
				
				case 1315213161:
				{
					return this.words;
				}
				
				
				case 2047967320:
				{
					return this.language;
				}
				
				
				default:
				{
					return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
				}
				
			}
			
		}
	}
	
	
	public override void __hx_getFields(global::Array<object> baseArr) {
		baseArr.push("words");
		baseArr.push("language");
		{
			base.__hx_getFields(baseArr);
		}
		
	}
	
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
public class EntryPoint__Main {
	public static void Main() {
		global::cs.Boot.init();
		global::Main.main();
	}
}

public class Main : global::haxe.lang.HxObject {
	
	public Main(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Main() {
		global::Main.__hx_ctor__Main(this);
	}
	
	
	public static void __hx_ctor__Main(global::Main __temp_me11) {
	}
	
	
	public static void main() {
		unchecked {
			string language = "cs";
			global::TemplateHello render = new global::TemplateHello();
			render.language = language;
			render.words = global::haxe.lang.StringExt.split("The cat is on the table", " ");
			global::haxe.Log.trace.__hx_invoke2_o(default(double), render.execute(), default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"main", "Main", "Main.hx"}, new int[]{1981972957}, new double[]{((double) (31) )}));
		}
	}
	
	
	public static new object __hx_createEmpty() {
		return new global::Main(global::haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static new object __hx_create(global::Array arr) {
		return new global::Main();
	}
	
	
}


