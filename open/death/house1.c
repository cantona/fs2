// Room: /open/death/house1.c

inherit ROOM;

void create()
{
	set("short", "鬼屋");
	set("long", "
这是一间什么都没有的房间。
");

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"eroad",
]));
  set("light_up", 1 );
  set("no_magic", 1 );
  set("no_fight", 1 );

	setup();
}
