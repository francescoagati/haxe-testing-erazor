package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class StringTools extends haxe.lang.HxObject
{
	public StringTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public StringTools()
	{
		//line 32 "/usr/lib/haxe/std/StringTools.hx"
		haxe.root.StringTools.__hx_ctor__StringTools(this);
	}
	
	
	public static void __hx_ctor__StringTools(haxe.root.StringTools __temp_me10)
	{
	}
	
	
	public static java.lang.String htmlEscape(java.lang.String s, java.lang.Object quotes)
	{
		//line 98 "/usr/lib/haxe/std/StringTools.hx"
		s = haxe.lang.StringExt.split(haxe.lang.StringExt.split(haxe.lang.StringExt.split(s, "&").join("&amp;"), "<").join("&lt;"), ">").join("&gt;");
		//line 99 "/usr/lib/haxe/std/StringTools.hx"
		if (haxe.lang.Runtime.toBool((quotes))) 
		{
			//line 99 "/usr/lib/haxe/std/StringTools.hx"
			return haxe.lang.StringExt.split(haxe.lang.StringExt.split(s, "\"").join("&quot;"), "\'").join("&#039;");
		}
		else
		{
			//line 99 "/usr/lib/haxe/std/StringTools.hx"
			return s;
		}
		
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 32 "/usr/lib/haxe/std/StringTools.hx"
		return new haxe.root.StringTools(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 32 "/usr/lib/haxe/std/StringTools.hx"
		return new haxe.root.StringTools();
	}
	
	
}


