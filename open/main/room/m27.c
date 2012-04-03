// Room: /open/main/room/m27.c

inherit ROOM;

void create ()
{
  set ("short", "丘陵");
  set ("long", @LONG
离开了道路,你走上了一座土丘,微微的风轻拂着你,这里甚
么都没有,有着只是茫茫的芦花和蓝天. 道路则在你的南方.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/main/npc/bee" : 1,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r38",
  "north" : __DIR__"m18",
  "east" : __DIR__"m28",
]));

  setup();
}
