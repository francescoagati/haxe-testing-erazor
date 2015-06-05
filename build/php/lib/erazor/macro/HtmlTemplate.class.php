<?php

class erazor_macro_HtmlTemplate extends erazor_macro_Template {
	public function __construct() {
		if(!isset($this->escape)) $this->escape = array(new _hx_lambda(array(&$this), "erazor_macro_HtmlTemplate_0"), 'execute');
		if(!php_Boot::$skip_constructor) {
		parent::__construct();
	}}
	public function escape($str) { return call_user_func_array($this->escape, array($str)); }
	public $escape = null;
	public function raw($str) {
		return new erazor_TString(Std::string($str));
	}
	public function __call($m, $a) {
		if(isset($this->$m) && is_callable($this->$m))
			return call_user_func_array($this->$m, $a);
		else if(isset($this->__dynamics[$m]) && is_callable($this->__dynamics[$m]))
			return call_user_func_array($this->__dynamics[$m], $a);
		else if('toString' == $m)
			return $this->__toString();
		else
			throw new HException('Unable to call <'.$m.'>');
	}
	function __toString() { return 'erazor.macro.HtmlTemplate'; }
}
function erazor_macro_HtmlTemplate_0(&$__hx__this, $str) {
	{
		return StringTools::htmlEscape($str, true);
	}
}
