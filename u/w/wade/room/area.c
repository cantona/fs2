inherit ROOM;

void create ()
{
  set ("short", "LPC 说明之 简介 -- area");
  set("long", @LONG

一些由创造者造出来的物件, 通常使用 LPC 的重要特征--继承--来善用 mudlib
物件的特性(性质)来变成游戏中玩家所使用的特殊物件, 这些物件构成了整个
世界.
LONG);

  set("exits", ([
	"back"	: __DIR__"doc",
  ]) );
  setup();
}
