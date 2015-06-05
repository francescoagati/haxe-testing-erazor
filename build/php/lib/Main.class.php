<?php

class Main {
	public function __construct(){}
	static function main() {
		$language = "php";
		$render = new TemplateHello();
		$render->language = $language;
		$render->words = _hx_explode(" ", "The cat is on the table");
		haxe_Log::trace($render->execute(), _hx_anonymous(array("fileName" => "Main.hx", "lineNumber" => 29, "className" => "Main", "methodName" => "main")));
	}
	function __toString() { return 'Main'; }
}
