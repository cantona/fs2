inherit ROOM;
void create() {
	set( "short", "大门会客室" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10287 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room284",
	]) );
	set( "long", @LONG
会客大门..除了每天有人担心儿子安全会来会客外..这里可
说是禁闭室的地方..关着在军中犯错而情节重大还不能判军法的
人..但有些变态的长官就例外了..曾经有人跑三千落队也有被抓
去关的..这一种是变态的旅长..心里不正常..避之避之..
LONG);
	setup();
	replace_program(ROOM);
}
