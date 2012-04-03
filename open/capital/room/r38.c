// Room: /open/capital/room/r38.c

inherit ROOM;

void create ()
{
  set ("short", "永福胡同");
  set ("long", @LONG
远远得看到斜坡的尽头。这里比较冷清，没有店家在这开业，所以
人烟稀少，也因为人少，石板路旁都长满了杂草而无人理会。从这儿可
以看到大部份的京城。

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/walker1" : 1,
]));
  set("outdoors", "/open/capital");
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r36",
  "east" : __DIR__"r39",
]));
  set("gopath", "west");

  setup();
}
