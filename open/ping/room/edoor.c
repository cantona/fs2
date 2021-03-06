// Room: /open/ping/room/edoor.c

inherit ROOM;

void create ()
{
  set ("short", "平南城东门");
  set ("long", @LONG
你眼前是一座两丈高的城门,上面用楷书写着 __平南城__ ,
这里就是本朝南方重地平南城,本朝不但在此驻军防卫,更以这里
做为南进的基地,与苗人大大小小的战斗,已发生多场.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/guard-d1" : 1,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road1.c",
  "east" : "/open/main/room/r42",
]));

  setup();
}
