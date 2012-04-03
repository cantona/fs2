// Room: /open/main/room/r33.c

inherit ROOM;

void create ()
{
	set("short","道路");
	set( "build", 47 );
  set ("long", @LONG
顺着道路走 , 你登上了一座丘陵 , 南方是一片森林 , 从这里
你可以清楚的看到北边的中央驿站 , 人来人往 , 好不热闹 .

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"m26",
  "north" : __DIR__"r31",
  "south" : __DIR__"r35",
]));

  set("outdoors", "/open/main");

  setup();
}
