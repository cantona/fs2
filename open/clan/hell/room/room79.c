inherit ROOM;
void create() {
	set( "short", "$HIC$灵气水珠$NOR$" );
	set( "object", ([
		"file2"    : "/open/magic-manor/obj/water-ball",
		"amount2"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/water-ball",
	]) );
	set( "build", 10090 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room86",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
相传如果要进入五行灵塔，就必需要携带的宝物，灵气水珠所散
发出来的灵气，足以克制五行之中的火灵之气，可以减少具有伤害的
灵气所带来之伤害。灵气水珠必需要聚灵之后，才会开启其作用，若
尚未聚灵的灵气水珠是无任何作用的。
所以阴曹地府天兵天将们在闯塔前,记得带一颗吧!!

LONG);
	setup();
	replace_program(ROOM);
}
