// Room: /open/main/room/[6].c

inherit ROOM;

void create()
{
	set("short", "空房间");
	set("long", @LONG
这是一间什么也没有的空房间。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r41",
  "east" : __DIR__"r42",
]));

	setup();
}
