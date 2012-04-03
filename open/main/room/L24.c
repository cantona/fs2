// Room: /open/main/room/L24.c

inherit ROOM;

void create ()
{
  set ("short", "台地");
  set ("long", @LONG
这是一块微微高起的台地，稀稀疏疏的长了起几丛杂草，
几块石块杂乱分部，更显得这里的荒凉.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/wolf" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"L23",
  "south" : __DIR__"s34",
  "north" : __DIR__"r43",
  "east" : __DIR__"L25",
]));

  setup();
}
