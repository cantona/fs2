inherit ROOM;
void create() {
	set( "short", "锁龙塔顶" );
	set( "light_up", 1 );
	set( "exits", ([
		"ball"      : "/open/clan/13_luck/room/room198",
		"down"      : "/open/clan/13_luck/room/room200",
	]) );
	set( "long", @LONG

　　经历过层层关卡你终于到了顶楼，传说锁龙塔塔顶正是通往天界
，不过从来没人知道如何进去的方法，因为从未有人连过九关来到此
处，看着地上怖满的蛛网可想而知，此地已有好尹(ball)正发出一闪
一闪的光茫，十分耀眼。

LONG);
	setup();
	replace_program(ROOM);
}
