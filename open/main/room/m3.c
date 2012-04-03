// Room: /open/main/room/m3.c

inherit ROOM;

void create ()
{
  set ("short", "丘陵");
  set ("long", @LONG
你走上了连绵的土丘,微微的风轻拂着你,这里甚么都没有,
有着只是茫茫的芦花和蓝天.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/junkman.c" : 2,
]));
  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"m2",
  "south" : __DIR__"m9",
  "east" : __DIR__"m4",
]));

  setup();
}
