// Room: /open/main/room/m1.c

inherit ROOM;

void create ()
{
  set ("short", "丘陵");
	set( "build", 10 );
  set ("long", @LONG
离开了道路,你走上了一座土丘,微微的风轻拂着你,这里甚
么都没有,有着只是茫茫的芦花和蓝天. 道路则在你的南方或东
方.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/butterfly" : 1,
  "/obj/source/faint":2,
]));

  set("outdoors", "/open/main");

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"f9",
  "south" : __DIR__"r8",
  "east" : __DIR__"r6",
]));

  setup();
}
