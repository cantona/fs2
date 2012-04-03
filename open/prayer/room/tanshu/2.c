// Room: /open/prayer/room/tanshu/2.c

inherit ROOM;

void create()
{
	set("short", "走廊");
	set("long", @LONG

    你走在天枢门的走廊上,每走五步就是一盏油灯,那油灯站立着足
足有四尺高,且雕刻的好不细致,墙上一幅金龙的大壁画直到大厅你所
站的这里是龙身,原来门主葛辉的品味只是如此.

LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"10.c",
  "north" : __DIR__"3.c",
  "south" : __DIR__"1.c",
  "east" : __DIR__"9.c",
]));
	set("light_up", 1);
	set("no_clean_up", 0);
	set("", "");

	setup();
	}
