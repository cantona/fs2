// Room: /open/main/room/m28.c

inherit ROOM;

void create()
{
	set("short", "丘陵");
	set("long", "你走上了连绵的土丘,微微的风轻拂着你,这里甚么都没有,
有着只是茫茫的芦花和蓝天.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"L9",
  "west" : __DIR__"m27",
  "north" : __DIR__"m19",
  "east" : __DIR__"m29",
]) );

  set("outdoors", "/open/main" );


  setup();
}
