// Room: /open/main/room/M14.c

inherit ROOM;

void create()
{
	set("short", "道路");
	set("long", @LONG
这儿是一个民风纯朴的小村庄，这条道路横贯着全村，虽然
这里是个偏僻的小地方，不过来往的行人还真不少。

LONG
	);
	set("exits", ([ /* sizeof() == 3 */
 "west" : __DIR__"v9",
	"east" : __DIR__"v2",
]));


	set("outdoors", "1");

	setup();
}
