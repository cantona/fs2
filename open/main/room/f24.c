// Room: /open/main/room/f24.c

inherit ROOM;

void create()
{
	set("short", "森林");
	set("long", "这里是一片广大的原始森林，参差的树木杂乱的长着，阳
光透过枝叶洒下点点金黄，地上则凌乱的部满落叶与杂草.
");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"f23",
  "south" : __DIR__"f25",
  "north" : __DIR__"r37",
  "east" : __DIR__"r40",
]) );

  set("outdoors", "/open/main" );

  setup();
}
