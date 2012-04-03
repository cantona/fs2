// Room: /open/main/room/m13.c

inherit ROOM;

void create()
{
	set("short", "丘陵");
	set("long", "从笔架山跟凌云村之间的这条小路已经渐渐被人们遗忘了, 但
是当年还没有凌云村的时候, 这儿却是出西蜀关唯一要道, 只是因
为山贼出没频繁, 因此渐渐没落, 而在山脚下另外找了个山谷当交
通要道. 据说早期山贼曾经在这儿埋下大量金银珠宝, 可惜年代久
远, 又没听说有藏宝图留下来, 否则何不好好去寻一次宝哩?!
");

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"M14",
  "northwest" : __DIR__"b1",
]) );

  set("outdoors", "/open/main" );


  setup();
}
