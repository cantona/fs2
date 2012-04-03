inherit ROOM;
void create() {
	set( "short", "世间云道" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10485 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room299.c",
		"south"     : "/open/clan/13_luck/room/room320",
		"east"      : "/open/clan/13_luck/room/room301.c",
		"north"     : "/open/clan/13_luck/room/room271.c",
	]) );
	set( "long", @LONG

    沧桑岁月，世间常变，来到这条十三吉祥的世间五候道，此道为[0;1;37m□[1m□[0m
[0;1;37m□[1mD[0m，用来比喻十三吉祥的威力，而此道上面都放着给帮众的防具与武器
，而适用对象为，没时间打防具跟武器的帮众，与新进帮众没能力打防
具与没自己的房间可以借用一下。

LONG);
	setup();
	replace_program(ROOM);
}
