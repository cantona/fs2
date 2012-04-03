// Room: /open/main/room/f9.c

inherit ROOM;

void create ()
{
  set ("short", "森林");
  set ("long", @LONG
这里是一片广大的原始森林，参差的树木杂乱的长着，阳
光透过枝叶洒下点点金黄，地上则凌乱的部满落叶与杂草.
LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f8",
  "south" : __DIR__"f10",
  "east" : __DIR__"m1",
]));

  setup();
}
