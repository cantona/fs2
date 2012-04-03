inherit ROOM;
void create() {
	set( "short", "＠小贤藏宝库＠" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount5"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/ping/obj/ring-2",
		"amount7"  : 1,
		"amount4"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file5"    : "/open/wu/npc/obj/armband",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"amount6"  : 1,
		"file2"    : "/open/dancer/obj/yuawaist",
	]) );
	set( "owner", "sznn" );
	set( "build", 10293 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room287",
		"west"      : "/open/clan/13_luck/room/room101.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    你一进门就被无数耀眼的光芒所吸引，仔细一看竟是全狂想最强
的武器和防具顿时感到不可思议，竟有人有如此能耐能取得如此强力
的东西心中暗道真强，穿上后感觉全身的战斗力跟防御力都提升了不
少，整装后马上出发战斗～～～～杀

LONG);
	setup();
	replace_program(ROOM);
}
