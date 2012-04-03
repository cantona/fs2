inherit ROOM;
void create() {
	set( "short", "烟雨楼八楼" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room83.c",
		"east"      : "/open/clan/13_luck/room/room44.c",
		"up"        : "/open/clan/13_luck/room/room94",
		"west"      : "/open/clan/13_luck/room/room45.c",
		"north"     : "/open/clan/13_luck/room/room93.c",
		"south"     : "/open/clan/13_luck/room/room91",
	]) );
	set( "long", @LONG

    客官欢迎您来到烟雨楼八楼，您所定下的厢房已经清理干净了。
从房内的窗户往外看可以将十三吉祥的全貌尽收眼底，整个ＦＳ大陆
没有一个大楼能比十三吉祥的这三栋大楼更高更美的，全都花费了数
年的时间设计，能住在这里一天不知几年来修来的福分。

LONG);
	setup();
	replace_program(ROOM);
}
