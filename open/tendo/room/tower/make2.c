inherit ROOM;
void create()
{
	set("short", "大松树顶");
	set("long", @LONG
哇....你终于爬上这株松树的树顶了，一阵阵凉风从四面八方吹来
，使你觉得心旷神怡，虽然你的经验告诉你在这种地方往下看是十分不
智的，但是你还是忍不住看了一眼，这里离地面至少也有十五、六丈高
，一阵晕眩警告你最好在跌下去以前离开这个地方。不过你忽然发觉右
边有条小径通往一间茅庐。
LONG
	);
	set("exits", ([
  "west" : "/open/tendo/room/tower/make3",
  "down" : "/open/tendo/room/tower/make1",
]));
        set("outdoors",1);
	setup();

}


