// Room: /u/o/onion/newroom.c

inherit ROOM;

void create()
{
	set("short", "新房间");
	set("long", @LONG
这里是新房间。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"xx",
]));
	setup();
}
