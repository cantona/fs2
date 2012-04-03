inherit ROOM;
void create() {
	set( "short", "凤凰楼七楼" );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room100.c",
		"east"      : "/open/clan/13_luck/room/room341.c",
		"north"     : "/open/clan/13_luck/room/room349",
		"south"     : "/open/clan/13_luck/room/room347.c",
		"west"      : "/open/clan/13_luck/room/room346.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

　　在店小二的引领，你沿着灯火照亮的楼梯往上爬，来到了凤凰楼
七楼的通道，往你的厢房走去。夜里，徐徐的凉风吹来，真是舒畅。
倾靠在护栏上静静的欣赏美丽的夜景，暂时忘却一切烦恼，欣赏这美
丽的夜景真是人间一大乐事。


LONG);
	setup();
	replace_program(ROOM);
}
