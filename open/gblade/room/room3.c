// Room: /u/m/moner/tree/room1.c
inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG

你现在在回廊上, 往北是一条小径, 东西两边各有回廊
通往东厢房与西厢房, 两边的栏干上雕刻着瑰丽的花纹,向南

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room4.c",
  "south" : __DIR__"room2.c",
]));
  set("light_up", 1);

  setup();
}
