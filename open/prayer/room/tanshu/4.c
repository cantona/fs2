// Room: /open/prayer/room/tanshu/4.c

inherit ROOM;

void create()
{
	set("short", "大厅");
	set("long", @LONG

    这里是门主接见宾客的地方,上头是葛辉的虎皮宝坐,左右两排则
是红檀木的椅子,墙上一幅金色龙头的壁画,使得葛辉不失一股霸气,
他正高高在上,吩咐属下职务。

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"3.c",
  "west" : __DIR__"7.c",
  "east" : __DIR__"5.c",
  "enter" : __DIR__"16.c",
]));
	set("light_up", 1);
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/tanshu" : 1,
]));
	set("no_clean_up", 0);
	set("valid_startroom", 1);

	setup();
	}
