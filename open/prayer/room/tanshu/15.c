// Room: /open/prayer/room/tanshu/15.c

inherit ROOM;

void create()
{
	set("short", "偏厅");
	set("long", @LONG

    一些门生在此来来往往，看起来好像很忙碌的样子，为的只是把
总坛交附下来的任务完成，万一有什么闪失，个人可担当不起，往北
走就是后院了。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"7.c",
  "north" : __DIR__"17.c",
]));
	set("light_up", 1);
	set("no_clean_up", 0);

	setup();
	}
