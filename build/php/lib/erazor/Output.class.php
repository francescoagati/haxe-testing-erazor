<?php

class erazor_Output extends StringBuf {
	public function __construct($escapeMethod = null) {
		if(!isset($this->escape)) $this->escape = array(new _hx_lambda(array(&$this, &$escapeMethod), "erazor_Output_0"), 'execute');
		if(!php_Boot::$skip_constructor) {
		if($escapeMethod !== null) {
			$this->escape = $escapeMethod;
		}
		parent::__construct();
	}}
	public function escape($str) { return call_user_func_array($this->escape, array($str)); }
	public $escape = null;
	public function unsafeAdd($str) {
		$val = null;
		if(Std::is($str, _hx_qtype("erazor.TString"))) {
			$val = _hx_string_call($str, "toString", array());
		} else {
			$val = $this->escape(Std::string($str));
		}
		$this->add($val);
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
	static function safe($str) {
		return new erazor_TString($str);
	}
	static function unsafe($str) {
		return new erazor_UnsafeString($str, null);
	}
	function __toString() { return 'erazor.Output'; }
}
function erazor_Output_0(&$__hx__this, &$escapeMethod, $str) {
	{
		return $str;
	}
}
