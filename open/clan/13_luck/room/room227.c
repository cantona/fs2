inherit ROOM;
void create() {
	set( "short", "锁龙塔大门" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room229.c",
		"enter"     : "/open/clan/13_luck/room/room226.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

　　走了一小段路你来到了锁龙塔，锁龙塔高九层，九龙各自守卫一
层，因此除非你有三头六臂，否则想进入是比登天还难，入口的龙头
开裂的大口就是大门了( door )，整座塔好似一条龙盘倨，龙身更是铁
炼交错，这就是锁龙塔的由来吧。

LONG);
	setup();
	replace_program(ROOM);
}
