// Room: /open/main/room/f13.c

inherit ROOM;

void create()
{
	set("short", "森林");
	set("long", "这里是一片广大的原始森林，参差的树木杂乱的长着，阳
光透过枝叶洒下点点金黄，地上则凌乱的部满落叶与杂草.
");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f12",
  "south" : __DIR__"r13",
  "east" : __DIR__"f14",
]) );

  set("outdoors", "/open/main" );


  setup();
}
