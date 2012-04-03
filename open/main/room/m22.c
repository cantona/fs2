// Room: /open/main/room/m22.c

inherit ROOM;

void create ()
{
  set ("short", "丘陵");
  set ("long", @LONG
你走上了连绵的土丘,微微的风轻拂着你,这里甚么都没有,
有着只是茫茫的芦花和蓝天.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/wolf" : 1,
]));

  set("outdoors", "/open/main");

set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"s22",
  "south" : __DIR__"m31",
  "west" : __DIR__"m21",
]));

  setup();
}
