<?php

class TemplateHello extends erazor_macro_HtmlTemplate {
	public function __construct() {
		if(!php_Boot::$skip_constructor) {
		parent::__construct();
	}}
	public $language;
	public $words;
	public function execute() {
		$__b__ = new erazor_Output((isset($this->escape) ? $this->escape: array($this, "escape")));
		{
			$__b__->add("hello from ");
			$__b__->unsafeAdd($this->language);
			$__b__->add("\x0A\x0A");
			{
				$_g = 0;
				$_g1 = $this->words;
				while($_g < $_g1->length) {
					$word = $_g1[$_g];
					++$_g;
					$__b__->add("\x0A  ");
					$__b__->unsafeAdd(strtoupper($word));
					$__b__->add("\x0A");
					null;
					unset($word);
				}
			}
			$__b__->add("\x0A");
		}
		return $__b__->b;
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
	function __toString() { return 'TemplateHello'; }
}
