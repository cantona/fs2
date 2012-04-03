// Room: /open/start/room/r2
inherit ROOM;

void create ()
{
  set ("short", "乡间小路");
  set ("long", @LONG
这条小路的两旁都长满了跟人差不多高的稻草，让你无
法看清楚四周的景物，看来这里很少有人经过。

LONG);

  set("outdoors", "/open/start");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/start/room/r3",
  "north" : "/open/start/room/r1",
]));

  setup();
}
