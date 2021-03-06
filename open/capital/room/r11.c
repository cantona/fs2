// Room: /open/capital/room/r11.c

inherit ROOM;

void create ()
{
  set ("short", "环宫大道");
  set ("long", @LONG
你现在来到了京城的中央部份, 这儿附近是不准有人逗留的, 偌大
的道路空荡荡的, 映着大红色的高大宫墙, 别有一份风味, 不过可要小
心别被发现你在闲晃。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/cleanman" : 1,
    "/open/start/npc/handson_du" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r09",
  "east" : __DIR__"r12",
]));
  set("gopath", "east");

  setup();
}
