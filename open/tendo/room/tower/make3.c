inherit ROOM;
void create()
{
	set("short", "林间小路");
	set("long", @LONG
你现在正走在一条林间的小路上，小路两旁长满了高耸的松树，从
林间传来阵阵鸟叫声，小路往东西两个方向延伸出去。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/tendo/room/tower/make2",
  "west" : "/open/tendo/room/tower/make4",
]));
     set("outdoors",1);
	setup();
}
