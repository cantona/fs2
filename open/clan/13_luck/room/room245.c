inherit ROOM;
void create() {
	set( "short", "风起云涌楼" );
	set( "owner", "adeyzit" );
	set( "build", 11388 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room246.c",
		"up"        : "/open/clan/13_luck/room/room244",
	]) );
	set( "long", @LONG

    江山辈有人才出，一代新人换旧人，十三吉祥有着传说中的帮主
小南的人才培育中心，教导出不少的好人才，一位位都是以后的准大
将，也在小南的指导下，可以自行去解迷的 save eq才能算是合格，
也让十三吉祥殿定壮大的基础。

LONG);
	setup();
	replace_program(ROOM);
}
