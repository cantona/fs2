inherit ROOM;
void create() {
	set( "short", "吉祥埋刀室" );
	set( "owner", "vickey" );
	set( "object", ([
		"amount6"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"file6"    : "/open/ping/obj/ring-2",
		"amount8"  : 1,
		"file7"    : "/open/gsword/obj/ring-1",
		"amount5"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
		"file2"    : "/open/ping/obj/ring-2",
	]) );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room268",
	]) );
	set( "build", 10455 );
	set( "light_up", 1 );
	set( "long", @LONG

    刀者，武器之霸者，幻想中的两大刀派，魔刀跟金刀，都是无人不
知的强力门派，加上好刀，更是得心应手，战无不胜，所以打把好刀真
的不容易，因为太难打了，随时都有我不入地狱，谁入地狱的准备去打
把好刀，所以希望能珍惜。

LONG);
	setup();
	replace_program(ROOM);
}
