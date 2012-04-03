// Room: /open/main/room/m25.c

inherit ROOM;

void create()
{
	set("short", "丘陵");
	set("long", "你走上了连绵得土丘,微微的风轻拂着你,这里甚么都没有,
有着只是茫茫的芦花和蓝天.
");

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"f17",
  "west" : __DIR__"m24",
  "north" : __DIR__"m17",
  "east" : __DIR__"m26",
]) );

  set("outdoors", "/open/main" );


  setup();
}
