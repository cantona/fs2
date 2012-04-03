// Room: /open/main/room/L2.c

inherit ROOM;

void create ()
{
  set ("short", "台地");
  set ("long", @LONG
这是一块微微高起的台地，稀稀疏疏的长了起几丛杂草，
几块石块杂乱分部，更显得这里的荒凉.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/main/room/s8",
  "west" : "/open/main/room/L1",
  "east" : "/open/main/room/L3",
]));

  set("outdoors", "/open/main");

  setup();
}
