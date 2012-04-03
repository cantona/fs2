inherit ROOM;
void create() {
	set( "short", "命运叉路" );
	set( "object", ([
		"amount2"  : 41,
		"amount3"  : 1,
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 200,
		"file1"    : "/open/fire-hole/obj/g-pill",
		"file2"    : "/open/fire-hole/obj/g-pill",
	]) );
	set( "owner", "zero" );
	set( "build", 10023 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room60.c",
		"west"      : "/open/clan/hell/room/room58.c",
		"hole"      : "/open/clan/hell/room/room61",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

        渐渐清醒之后，发觉自己漂浮在一个诡异的次元当中，四周若有似无
        的奇幻装备，多次尝试着去拿取，却不得其法，这时发现前方似乎有
        两条通道，凝神往右边看去，突然一股邪恶气息上冲，脑中充满杀戮
        ，转头往左边看去，心中涌出无限的勇气，全身布满一股正义之气。


LONG);
	setup();
	replace_program(ROOM);
}
