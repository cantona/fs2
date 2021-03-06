inherit ROOM;
void create() {
	set( "short", "世间金道" );
	set( "owner", "winder" );
	set( "object", ([
		"amount10" : 1,
		"file6"    : "/open/firedancer/npc/eq/r_boots",
		"amount2"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/firedancer/npc/eq/r_head",
		"file2"    : "/open/firedancer/npc/eq/r_hands",
		"amount4"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_cape",
		"file4"    : "/open/firedancer/npc/eq/r_cloth",
		"file8"    : "/open/firedancer/npc/eq/r_armbands",
		"file10"   : "/open/firedancer/npc/eq/r_belt",
		"amount8"  : 1,
		"amount7"  : 1,
		"file9"    : "/open/firedancer/npc/eq/r_leg",
		"amount9"  : 1,
		"file3"    : "/open/firedancer/npc/eq/r_finger",
		"amount6"  : 1,
		"amount5"  : 1,
		"file7"    : "/open/firedancer/npc/eq/r_shield",
		"amount1"  : 1,
	]) );
	set( "build", 10164 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room277.c",
		"south"     : "/open/clan/13_luck/room/room318",
		"east"      : "/open/clan/13_luck/room/room305.c",
		"north"     : "/open/clan/13_luck/room/room273.c",
	]) );
	set( "long", @LONG

    沧桑岁月，世间常变，来到这条十三吉祥的世间五行道，此道为[0;1;33m□[1m□[0m
[0;1;33m□[1mD[0m，用来比喻十三吉祥的防御，而此道上面都放着给帮众的防具与武器
，而适用对象为，没时间打防具跟武器的帮众，与新进帮众没能力打防
具与没自己的房间可以借用一下。

LONG);
	setup();
	replace_program(ROOM);
}
