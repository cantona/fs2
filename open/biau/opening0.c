// Room: /open/su/room/triggerman.c

inherit ROOM;

void create()
{
	set("short", "镳局大门");
	set("long", @LONG
    这里是武威镳局,蜀中第一把交椅,尤其是瓢把子赵鼎天,曾经靠着一路狂魔鞭法
    扫平蜀川三十六寨,讨回镳物,使江湖中人震摄不已.....只要把物品交给武威镳
    局,就可以高枕无忧....如今在蜀中城里的这栋大宅,已经成为不可或缺的路标,
    看到它,就知道是蜀中城的东方了.....门上的扁额写着
[1m    ‘    武       威        镳       局    ’[0m
    龙飞凤舞的四字,据说是金刀门王进所题,东边就是大门了,西边是蜀中的中心。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
//"west" : "/open/su/room/suroad5_10",
  "east" : __DIR__"opening1",
]));

	setup();
}
