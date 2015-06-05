package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Main extends haxe.lang.HxObject
{
	public static void main(String[] args)
	{
		main();
	}
	
	public Main(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Main()
	{
		//line 8 "/home/francesco/projects/test/tmp/Main.hx"
		haxe.root.Main.__hx_ctor__Main(this);
	}
	
	
	public static void __hx_ctor__Main(haxe.root.Main __temp_me7)
	{
	}
	
	
	public static void main()
	{
		//line 18 "/home/francesco/projects/test/tmp/Main.hx"
		java.lang.String language = "java";
		//line 28 "/home/francesco/projects/test/tmp/Main.hx"
		haxe.root.TemplateHello render = new haxe.root.TemplateHello();
		//line 29 "/home/francesco/projects/test/tmp/Main.hx"
		render.language = language;
		//line 30 "/home/francesco/projects/test/tmp/Main.hx"
		render.words = haxe.lang.StringExt.split("The cat is on the table", " ");
		//line 31 "/home/francesco/projects/test/tmp/Main.hx"
		haxe.Log.trace.__hx_invoke2_o(0.0, render.execute(), 0.0, new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"Main", "Main.hx", "main"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (31) )) )}));
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 8 "/home/francesco/projects/test/tmp/Main.hx"
		return new haxe.root.Main(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 8 "/home/francesco/projects/test/tmp/Main.hx"
		return new haxe.root.Main();
	}
	
	
}


