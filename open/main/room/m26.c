// Room: /open/main/room/m26.c

inherit ROOM;

void create()
{
	set("short", "丘陵");
	set("long", "离开了道路,你走上了一座土丘,微微的风轻拂着你,这里甚
么都没有,有着只是茫茫的芦花和蓝天. 道路则在你的东方.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"f18",
  "west" : __DIR__"m25",
  "east" : __DIR__"r33",
]) );

  set("outdoors", "/open/main" );


  setup();
}
