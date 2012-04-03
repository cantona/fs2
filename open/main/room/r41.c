// Room: /open/main/room/r41.c

inherit ROOM;

void create ()
{
  set ("short", "黄土路");
  set ("long", @LONG
这是一条东西向的道路,往东是平南城,往西则进入苗疆.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"maiu-1.c",
  "north" : __DIR__"L13",
  "east" : "/open/ping/room/wdoor",
]));
  set("outdoors", "/open/main");

  setup();
}
