<?php

class erazor_UnsafeString extends erazor_TString {
	public function __construct($s, $escapeMethod = null) {
		if(!isset($this->escape)) $this->escape = array(new _hx_lambda(array(&$this, &$escapeMethod, &$s), "erazor_UnsafeString_0"), 'execute');
		if(!php_Boot::$skip_constructor) {
		parent::__construct($s);
		if($escapeMethod !== null) {
			$this->escape = $escapeMethod;
		}
	}}
	public function escape($str) { return call_user_func_array($this->escape, array($str)); }
	public $escape = null;
	public function toString() {
		return $this->escape($this->s);
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
	function __toString() { return $this->toString(); }
}
function erazor_UnsafeString_0(&$__hx__this, &$escapeMethod, &$s, $str) {
	{
		return StringTools::htmlEscape($str, true);
	}
}
