# haxe-testing-erazor
Testing haxe erazor macro template compilation on php,java,javascript,python,cpp and neko

code 

```

@:includeTemplate("Template.erazor")
class TemplateHello extends erazor.macro.HtmlTemplate {
  public var language:String;
  public var words:Array<String>;
}

class Main {

  public static function main() {
    #if js
      var language = 'js';
    #elseif neko
      var language = 'neko';
    #elseif php
      var language = 'php';
    #elseif java
      var language = 'java';
    #elseif python
      var language = 'python';
    #elseif cpp
      var language = 'c++';
    #end


    var render = new TemplateHello();
    render.language = language;
    render.words = "The cat is on the table".split(" ");
    trace(render.execute());
  }

}

```

template 
```
hello from @language

@for (word in words) {
  @word.toUpperCase()
}

```

build file 
```
-js build/js/main.js
-lib erazor
-main Main
-dce full
--next
-php build/php
-lib erazor
-main Main
--next
-java build/java
-lib erazor
-main Main
--next
-python build/python/main.py
-lib erazor
-main Main
--next
-cpp build/cpp
-lib erazor
-main Main
--next
-neko build/neko/main.n
-lib erazor
-main Main

```

for compile all targets
```
haxe build.hxml
```

for run code compiled for targets 
```
python3.4 python/main.py
java -jar build/java/Main.jar
node build/js/main.js 
php build/php/index.php 
/build/cpp/Main
neko build/neko/main.n 
```
