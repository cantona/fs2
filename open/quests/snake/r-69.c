inherit ROOM;

void create()
{
	set("short","蛇寨 二层暗道");
	set("long",@LONG
阴暗且潮湿，是你对这整个蛇寨最大的映像，这里不外乎也是如
此，往南通往蛇寨前栋二层休息处。
LONG);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/crazy_snake":2,
__DIR__"npc/poison_soldier":2,
]));
	set("exits",([
"up":__DIR__"r-64",
"south":__DIR__"r-14",
]));
	setup();
}

int valid_leave(object me,string dir)
{
	if( present("snake-soldier",environment(me)) )
	{
		message_vision("守卫大喝：兄弟们～别让"+me->name(1)+"跑了～\n",me);
		return notify_fail("你的退路已经被挡住了。\n");
	}
	if( dir == "south" )
		message_vision("$N一不小心，滑了出去～\n",me);
return 1;
}