inherit ROOM;
void create() {
	set( "short", "世间水道" );
	set( "object", ([
		"amount3"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"amount9"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"file4"    : "/open/mogi/castle/obj/lochagem",
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"amount2"  : 1,
		"file3"    : "/open/mogi/castle/obj/lochagem",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"amount7"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/mogi/castle/obj/lochagem",
	]) );
	set( "build", 10206 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room304.c",
		"south"     : "/open/clan/13_luck/room/room315",
		"east"      : "/open/clan/13_luck/room/room302.c",
		"north"     : "/open/clan/13_luck/room/room264.c",
	]) );
	set( "long", @LONG

    沧桑岁月，世间常变，来到这条十三吉祥的世间五行道，此道为[0;1;36m□[1m□[0m
[0;1;36m□[1mD[0m，用来比喻十三吉祥的防御，而此道上面都放着给帮众的防具与武器
，而适用对象为，没时间打防具跟武器的帮众，与新进帮众没能力打防
具与没自己的房间可以借用一下。

LONG);
	setup();
	replace_program(ROOM);
}
