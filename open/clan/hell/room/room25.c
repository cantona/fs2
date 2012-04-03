inherit ROOM;
void create() {
	set( "short", "朝圣之路" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room58",
	]) );
	set( "long", @LONG
    这是一条笔直的长廊，四周充斥着明亮的圣火，沿途的墙壁上刻满着
        各式各样封魔的武功以及纪录历来神魔大战的重要记事，而经由详细
        的纪录中发现，历来成功除魔的勇者都是依赖神圣的装备或道具，因
        人类很少有能够完全修练完整的神之技能。
LONG);
	setup();
	replace_program(ROOM);
}
