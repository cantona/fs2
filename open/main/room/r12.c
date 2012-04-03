// Room: /open/main/room/r12.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set("long", "这里是从驿站通往北卢关必经的要道, 东边是一片平整的台地
西边则是高低起伏的丘陵.
");

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r19",
  "north" : __DIR__"r10",
  "west" : __DIR__"m7",
]) );

  set("outdoors", "/open/main" );


  setup();
}
