// Room: /open/main/room/f3.c

inherit ROOM;

void create()
{
	set("short", "森林");
	set("long", @LONG
这里一望无际的森林, 西边有一条河流, 却不知怎么下去。
往西北方望去有一座不知名的高山，不知道是否有高人隐居于山
上。
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"f1",
  "south" : __DIR__"f5",
  "east" : __DIR__"f4",
  "northwest" : "/open/tensan/room1",
]) );

  set("outdoors", "/open/main" );


  setup();
}
