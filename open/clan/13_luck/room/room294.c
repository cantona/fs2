inherit ROOM;
void create() {
	set( "short", "小猪头的西厢房" );
	set( "owner", "pighead" );
	set( "object", ([
		"amount1"  : 1,
		"amount4"  : 1,
		"amount3"  : 1,
		"file5"    : "/open/gsword/obj/may_ring",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount9"  : 1,
		"file9"    : "/open/magic-manor/obj/maun-shadow-blade",
		"amount7"  : 1,
		"amount2"  : 1,
		"file2"    : "/obj/gift/hobowdan",
		"file4"    : "/open/sky/obj11/purple-crystal",
		"file7"    : "/open/capital/obj/blade2",
		"amount5"  : 1,
	]) );
	set( "build", 10296 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room127",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    这里是可爱小猪头的西厢房，这边主要是储存战斗用的武器，例
如骐驎神刀，灵器夜千鸟，厚背紫金刀，等都是在战斗中不可缺乏的
武器，如果没了它们，那是要如何抵抗狂想空间中的变态怪物，所以
这里的存放的武器都是很珍贵的。

LONG);
	setup();
	replace_program(ROOM);
}
