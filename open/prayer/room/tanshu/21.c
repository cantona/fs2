// Room: /open/prayer/room/tanshu/21.c

inherit ROOM;

void create()
{
	set("short", "练武场");
	set("long", @LONG

    天枢门的练武场，弟子们汗流浃背的顶着大太阳，辛勤的练武只
为早日练成圣火的绝世武学，更希望有朝一日能在教中提升自己的地
位，可见要学成圣火教的武学，并非想像中的容易。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"13.c",
  "east" : __DIR__"12.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
