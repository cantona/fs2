inherit ROOM;
void create() {
	set( "short", "$HIR$灵气火珠$NOR$" );
	set( "object", ([
		"file5"    : "/open/gsword/obj1/sball",
		"file1"    : "/open/magic-manor/obj/fire-ball",
		"amount1"  : 1,
		"amount2"  : 1,
		"file4"    : "/open/magic-manor/obj/fire-ball",
		"amount5"  : 1,
		"file2"    : "/open/magic-manor/obj/fire-ball",
		"amount3"  : 1,
		"file3"    : "/open/magic-manor/obj/fire-ball",
		"file6"    : "/open/magic-manor/obj/fire-ball",
		"amount4"  : 1,
		"amount6"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10111 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room86",
	]) );
	set( "long", @LONG
相传如果要进入五行灵塔，就必需要携带的宝物，灵气火珠所散
发出来的灵气，足以克制五行之中的金灵之气，可以减少具有伤害的
灵气所带来之伤害。灵气火珠必需要聚灵之后，才会开启其作用，若
尚未聚灵的灵气火珠是无任何作用的。
所以阴曹地府天兵天将们在闯塔前,记得带一颗吧!!

LONG);
	setup();
	replace_program(ROOM);
}
