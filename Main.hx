
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
