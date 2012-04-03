inherit ROOM;
void create() {
	set( "short", "将军道" );
	set( "object", ([
		"file1"    : "/open/firedancer/npc/eq/r_pants",
		"amount1"  : 1,
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10548 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room288",
		"south"     : "/open/clan/13_luck/room/room284.c",
	]) );
	set( "long", @LONG
将军道..为这营区最大的长官驾车所走的道路..所以走这条道路
希望不要自找麻烦..最好绕道而行..不然就等着吃不完兜着走..虽然
两旁风景漂亮..但也没时间在那享受风景..还是快去办理自己的事情
,,免的长官经过就要倒大楣了..
LONG);
	setup();
	replace_program(ROOM);
}
