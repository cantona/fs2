inherit ROOM;
void create() {
	set( "short", "凤凰楼三楼" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room155.c",
		"north"     : "/open/clan/13_luck/room/room156.c",
		"east"      : "/open/clan/13_luck/room/room161.c",
		"down"      : "/open/clan/13_luck/room/room98.c",
		"west"      : "/open/clan/13_luck/room/room353",
		"up"        : "/open/clan/13_luck/room/room101.c",
	]) );
	set( "long", @LONG

    在店小二的引领，你沿着灯火照亮的楼梯往上爬，来到了凤凰楼
三楼的通道，往你的厢房走去。从窗口往外望去，西边有一座森林，
可惜被一片迷雾陇照，看不清全貌。天色渐渐变暗，只见满天的飞鸟
，也都要飞回巢穴去休息了。

LONG);
	setup();
	replace_program(ROOM);
}
