inherit ROOM;
void create() {
	set( "short", "神之左手" );
	set( "object", ([
		"file2"    : "/open/ping/obj/gold_hand",
		"file1"    : "/open/ping/obj/chilin_legging",
		"amount1"  : 1,
		"amount2"  : 1,
	]) );
	set( "build", 10133 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room25",
		"east"      : "/open/clan/hell/room/room62",
	]) );
	set( "long", @LONG
     
        一进入这里，立刻被一股温暖的气劲所包围，除此之外还有一股圣洁
        不可侵犯的气势，而目光马上被眼前的一座雕像(statue)所吸引，只
        见雕像全身穿满前所未见的神圣装备，突然四周所有的力量及装备结
        合在你的身上，你感觉到自己有一个重大的使命及拥有天神般的力量


LONG);
	setup();
	replace_program(ROOM);
}
