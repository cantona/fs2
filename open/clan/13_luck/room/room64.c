inherit ROOM;
void create() {
	set( "short", "混沌" );
	set( "owner", "long" );
	set( "object", ([
		"file4"    : "/open/doctor/obj/needle9",
		"file8"    : "/daemon/class/fighter/armband",
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"file6"    : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount7"  : 1,
	]) );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room62",
	]) );
	set( "light_up", 1 );
	set( "build", 10078 );
	set( "long", @LONG

    这里是一个与外界完全不同的地方，没有任何的景物，没有任何的
颜色只是一片纯白的世界,让人匪夷所思,在这其中隐约看的到一个人盘
腿而坐在其中，他就是数十年前叱吒风云的一位高人，至于他为何会在
这里，那也只有等你自己去问他了．

LONG);
	setup();
	replace_program(ROOM);
}
