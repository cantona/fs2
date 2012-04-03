// Room: /open/capital/room/r61.c

inherit ROOM;

void create ()
{
  set ("short", "三叉路口");
  set ("long", @LONG
北方是通往连接皇城入口及东西二城门的街道, 是京城的重要道路
。西北边的广场是干通天所开设的竞技场。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r60",
  "north" : __DIR__"r74",
  "east" : __DIR__"r62",
]));

  set("outdoors", "/open/capital");

  setup();
}
