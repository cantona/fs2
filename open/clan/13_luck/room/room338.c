inherit ROOM;
void create() {
	set( "short", "百草道" );
	set( "owner", "smalloo" );
	set( "object", ([
		"amount4"  : 1,
		"file5"    : "/open/capital/obj/chen_dagger",
		"file3"    : "/daemon/class/bonze/puty_pullium",
		"file1"    : "/open/ping/obj/ring-2",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/killer/obj/s_pill",
		"amount5"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
	]) );
	set( "build", 11610 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room337",
		"north"     : "/open/clan/13_luck/room/room339.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    你突然眼前一亮，见[0;1;32m□[1mC[1m□[1mC[1m□[1mA[1m□[1m□[0m，满点缀着或[0;1;31m□[1m□[0m或[45m紫[0m，或[0;1;33m□[1m□[0m或[0;1m□[1m□[0m的
鲜花。你一路行来，遍地都是[0;1;32m□[1m□[1m□[1m□[1m□[1m□[1m□[1m□[0m，此处竟是一个花花丽丽的世
界，你在此处，受益良多，百花百草好像有治疗的功用让你身心觉舒
坦，好像所有的疼痛都不见了，收获不少。


LONG);
	setup();
	replace_program(ROOM);
}
