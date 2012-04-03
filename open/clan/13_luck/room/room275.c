inherit ROOM;
void create() {
	set( "short", "魔法盾室" );
	set( "object", ([
		"file2"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/ping/obj/ring-2",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"amount6"  : 1,
		"file5"    : "/open/wu/npc/obj/armband",
		"amount3"  : 1,
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount10" : 1,
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "sznking" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room313",
		"south"     : "/open/clan/13_luck/room/room302.c",
	]) );
	set( "build", 10137 );
	set( "light_up", 1 );
	set( "long", @LONG

    此为魔刀二代掌门莫无愁的身上宝物，魔刀的变态是狂想空间中出
名的，何况是师傅级的，常常被他的魔龙诀打到不能动而死，魔刀连击
更是暴力中的狠角色，三斩归元，被斩的乱七八糟，等级低的玩家，可
别找他领教不然吃不完就去找小黑小白泡茶了..

LONG);
	setup();
	replace_program(ROOM);
}
