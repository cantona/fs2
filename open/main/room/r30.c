// Room: /open/main/room/r30.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
你走在灰尘滚滚的石子路上，望着四周空荡的丘陵与盆地，
是如此的孤独与沉寂，北方有一条官道，往南，则可到平南城
，那里已经进远离中土，接近苗疆了.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"m15",
  "north" : __DIR__"r23",
  "south" : __DIR__"r32",
  "east" : __DIR__"m16",
]));

  set("outdoors", "/open/main");


  setup();
}
