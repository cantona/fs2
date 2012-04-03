inherit ROOM;
void create() {
	set( "short", "EMC 战斗教练场" );
	set( "object", ([
		"amount8"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount3"  : 1,
		"amount10" : 1,
		"amount6"  : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"file10"   : "/open/killer/memory/static",
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"file8"    : "/open/killer/memory/static",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10116 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room104.c",
		"enter"     : "/open/clan/13_luck/room/room284",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
这里有广阔的红土高原..都在上面跑 攻防搜警坚..
老是看到班长在比手势..第x 班注意,朝哪个方向走多少公
尺,以什么队形..以什么方式前进..
在上面跑来跑去..也可以摸鱼打混..用钱把小蜜蜂打死..
躺在草丛遥望天空..享受蓝天白云...也是一种满足
LONG);
	setup();
	replace_program(ROOM);
}
