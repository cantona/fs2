// Room: /open/prayer/room/tanshu/17.c

inherit ROOM;

void create()
{
	set("short", "后院");
	set("long", @LONG

    阵阵花香朝你扑鼻而来，美丽的花蝴蝶在花丛中，舞出曼丽的舞
姿，黄莺在枝头上唱着清脆嘹亮的哥声，正是鸟语花香的净地，令你
想不到一代莽夫也能有此雅兴。

LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"15.c",
  "east" : __DIR__"18.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/gardener1.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	}
