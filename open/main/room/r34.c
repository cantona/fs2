// Room: /open/main/room/r34.c

inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
你走在灰尘滚滚的石子路上，望着四周空荡的丘陵与盆地，
是如此的孤独与沉寂，也许这就是身入江湖的悲哀吧..道路在此
呈南北走向，越往南则越远离中土，越近苗疆.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"s25",
  "south" : __DIR__"r39",
  "north" : __DIR__"r32",
  "east" : __DIR__"m32",
]));

  set("outdoors", "/open/main");

  setup();
}
