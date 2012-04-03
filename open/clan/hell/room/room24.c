inherit ROOM;
void create() {
	set( "short", "入魔之道" );
	set( "owner", "zero" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room60",
	]) );
	set( "long", @LONG
    这是一条诡异的走道，充满着鬼魅的邪气，沿途的墙壁上刻满着宇宙
        间禁忌的武功及强大的魔法，凌驾着人间所有东西的威力，并且记载
        着历来神魔大战只不过世一群自称勇者的半调子借用神的力量暂时封
        印魔力而不让这些强大的力量流入人界。
LONG);
	setup();
	replace_program(ROOM);
}
