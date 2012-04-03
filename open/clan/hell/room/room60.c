inherit ROOM;
void create() {
	set( "short", "魔之右手" );
	set( "owner", "zero" );
	set( "object", ([
		"amount2"  : 200,
		"amount1"  : 1,
		"file2"    : "/open/fire-hole/obj/g-pill",
		"file1"    : "/daemon/class/fighter/figring",
	]) );
	set( "build", 13364 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room24",
		"west"      : "/open/clan/hell/room/room62.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
    
        一进入这里，立刻被一股嗜杀的气劲所包围，除此之外还有一股凶暴
        残忍的感觉出现，而目光马上被眼前的一座雕像(statue)所诱惑，只
        见雕像身着血红怪异的邪恶装备，慢慢眼神迷失在疯狂的强大漩涡当
        中，突然四周暴戾之气被你吸收，让你拥有遇神杀神的终极力量。


LONG);
	setup();
	replace_program(ROOM);
}
