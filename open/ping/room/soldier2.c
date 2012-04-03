// Room: /open/ping/room/soldier2.c
inherit ROOM;

void create ()
{
  set ("short", "练兵场");
  set ("long", @LONG
你来到平南驻军的练兵场,许多士兵们正努力的操练着,为
保家护国供献他们的青春,你不禁对他们的精神感到钦配.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/soldier1" : 1,
]));
  set("outdoors", "/open/ping");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"road10",
  "south" : __DIR__"soldier3.c",
  "east" : __DIR__"soldier1",
]));

  setup();
}
