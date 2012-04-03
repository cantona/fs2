// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "昆仑山");
	set("long", @LONG
平坦的石道到了这里变成了较为崎岖的石子路，两
旁的树木愈见稀少，往前望去只看到一条蜿蜒的羊
肠小径，曲曲折折地通往山顶。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
	"south" : __DIR__"v9",
	"north" : __DIR__"r1",
]));
	set("outdoors", "1");

	setup();
}
