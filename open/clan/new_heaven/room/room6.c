inherit ROOM;
void create() {
	set( "short", "指令测试房" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/new_heaven/room/room9",
		"south"     : "/open/clan/new_heaven/room/room4",
	]) );
	set( "long", @LONG
    这里是祈晴娃娃的工作室, 里面摆着他心爱的长古川 天
的大照片,还有一部大电脑, 听说可以看看旧的狂想的档案,
是个不错的设备,不过进来得要梅绛雪允许喔,因为梅绛雪最
讨厌有人随便进祈晴娃娃的房间了。
新增加检举(accuse)功能, 如果你觉得有人在run tin你可以用
accuse <id>来把他送去冰判官那去问问题。

LONG);
	setup();
	replace_program(ROOM);
}
