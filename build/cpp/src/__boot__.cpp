#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_erazor_Output
#include <erazor/Output.h>
#endif
#ifndef INCLUDED_erazor_UnsafeString
#include <erazor/UnsafeString.h>
#endif
#ifndef INCLUDED_erazor_TString
#include <erazor/TString.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_TemplateHello
#include <TemplateHello.h>
#endif
#ifndef INCLUDED_erazor_macro_HtmlTemplate
#include <erazor/macro/HtmlTemplate.h>
#endif
#ifndef INCLUDED_erazor_macro_Template
#include <erazor/macro/Template.h>
#endif

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::haxe::Log_obj::__register();
::erazor::Output_obj::__register();
::erazor::UnsafeString_obj::__register();
::erazor::TString_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Main_obj::__register();
::TemplateHello_obj::__register();
::erazor::macro::HtmlTemplate_obj::__register();
::erazor::macro::Template_obj::__register();
::haxe::Log_obj::__boot();
}

