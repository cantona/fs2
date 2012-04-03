inherit ROOM;
void create() {
	set( "short", "一分钟待命班" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10473 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room284",
	]) );
	set( "long", @LONG
一分钟待命班..为应付大门的紧急状况而设立的..除了可以
驱逐敌人还可以消防与检毒..大多要求八秒之内要带上防毒面具
..一分钟内不管你在任何地方..集合时都要到..而且要全副武装
建制武器跟设备..都要带齐..而大门的紧急状况就要看他们了..
人过多就要连洛警卫排或战备连出动了..
LONG);
	setup();
	replace_program(ROOM);
}
