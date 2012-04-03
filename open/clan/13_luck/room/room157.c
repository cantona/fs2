inherit ROOM;
void create() {
	set( "short", "雾之林" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room157",
		"east"      : "/open/clan/13_luck/room/room157",
		"west"      : "/open/clan/13_luck/room/room157.c",
		"north"     : "/open/clan/13_luck/room/room158.c",
		"out"       : "/open/clan/13_luck/room/room152.c",
	]) );
	set( "long", @LONG

　　谜样般的森林，终年浓雾不散，眼前只见白茫茫的一大片，伸手
不见五指。树林内更是听不到虫鸣鸟叫，只觉在这浓浓白雾之中，充
满着诡异的气氛，似乎有什么东西，正瞪大着双眼，在远处监视着你
的一举一动，诡异的气息压的你喘不过气来。

LONG);
	setup();
	replace_program(ROOM);
}
