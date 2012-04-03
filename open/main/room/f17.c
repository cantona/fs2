// Room: /open/main/room/f17.c

inherit ROOM;

void create()
{
	set("short", "森林");
	set("long", "这里是一片广大的原始森林，参差的树木杂乱的长着，阳
光透过枝叶洒下点点金黄，地上则凌乱的部满落叶与杂草.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f20",
  "west" : __DIR__"m32",
  "north" : __DIR__"m25",
  "east" : __DIR__"f18",
]) );

  setup();
}
