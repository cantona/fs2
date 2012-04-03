// Room: /open/main/room/r3.c

inherit ROOM;

void create()
{
	set("short", "道路");
    set("long", "这里是从驿站通往绝情门的重要道路，东边的沼泽地一不小心会把
人整个吞进去，西方有一大块平地，道路在此呈南北向和东北方，
是个三叉路段。
");

set("exits", ([ /* sizeof() == 3 */
  "northeast" : __DIR__"r2",
  "south" : __DIR__"r5",
  "west" : __DIR__"L3",
  "east" : __DIR__"p1",
]));



  setup();
}
