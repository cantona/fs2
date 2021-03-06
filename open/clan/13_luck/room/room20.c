inherit ROOM;
void create() {
	set( "short", "青龙舞天" );
	set( "owner", "mad" );
	set( "object", ([
		"file10"   : "/open/scholar/obj/icefan",
		"file4"    : "/open/wu/npc/obj/armband",
		"amount9"  : 1,
		"file7"    : "/open/killer/obj/k_ring",
		"file9"    : "/daemon/class/blademan/obj/ublade",
		"amount2"  : 1,
		"amount10" : 1,
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/scholar/obj/icefan",
		"file2"    : "/open/ping/obj/gold_hand",
		"amount5"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/ping/obj/iceger",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/ping/obj/chilin_legging",
	]) );
	set( "build", 16398 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room19.c",
		"up"        : "/open/clan/13_luck/room/room21",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    上了青龙之阶你往下一看已经离地好几丈，你想如果在这被袭击大
概是很难活命的，再往上一看总觉得的很长好远怎么爬也爬不完，不过
你倒可以欣赏一下外头的风景，可以看到漂亮的柳月泉，也可以看到雪
白的天山这是你从没慢慢欣赏的，可以陪你渡过这次的阶之旅。

LONG);
	setup();
	replace_program(ROOM);
}
