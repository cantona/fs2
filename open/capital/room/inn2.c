// Room: /open/capital/room/inn2.c

inherit ROOM;

void create()
{
	set("short", "空房间");
	set("long", @LONG
这是一间什么也没有的空房间。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"inn",
]));

	setup();
}
