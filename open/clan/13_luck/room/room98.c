inherit ROOM;
void create() {
	set( "short", "凤凰楼二楼" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room99.c",
		"west"      : "/open/clan/13_luck/room/room146",
		"east"      : "/open/clan/13_luck/room/room151",
		"south"     : "/open/clan/13_luck/room/room122.c",
		"north"     : "/open/clan/13_luck/room/room123",
		"up"        : "/open/clan/13_luck/room/room102",
	]) );
	set( "long", @LONG

    在店小二的引领，你沿着灯火照亮的楼梯往上爬，来到了凤凰楼
二楼的通道，往你的厢房走去。厢房已打扫干净，桌上放置着一壶刚
泡好的冻顶乌龙茶，你坐了下来，边品嚐这上好的乌龙茶，边欣赏远
处的风景，真是好不惬意。

LONG);
	setup();
	replace_program(ROOM);
}
