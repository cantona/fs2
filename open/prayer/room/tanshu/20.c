// Room: /open/prayer/room/tanshu/20.c

inherit ROOM;

void create()
{
	set("short", "柴房");
	set("long", @LONG

    这边是天枢门的柴房，一堆一堆的木柴和枯树枝，通常都是供给
炊事用的，不过门主也常利用这里来关一些不守纪律的弟子。

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"18.c",
]));
	set("no_clean_up", 0);

	setup();
	}
