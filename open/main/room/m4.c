// Room: /open/main/room/m4.c

inherit ROOM;

void create()
{
	set("short", "丘陵");
	set("long", "你走上了连绵的土丘,微微的风轻拂着你,这里甚么都没有,
有着只是茫茫的芦花和蓝天.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"m10",
  "west" : __DIR__"m3",
  "east" : __DIR__"m5",
]) );

  set("outdoors", "/open/main" );


  setup();
}
