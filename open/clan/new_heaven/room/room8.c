inherit ROOM;
void create() {
	set( "short", "$HIC$内堂$NOR$" );
	set( "light_up", 1 );
	set( "object", ([
		"file2"    : "/open/dancer/obj/yuawaist",
		"amount1"  : 1,
		"amount2"  : 1,
		"file1"    : "/u/b/bss/ring-4",
	]) );
	set( "owner", "xing" );
	set( "exits", ([
		"out"       : "/open/clan/new_heaven/room/room7",
	]) );
	set( "long", @LONG
这里是傲笑红尘用来放东西的地方, 墙上挂着一副图, 上面有一
把剑, 用古体写着[羽情]二字, 看来这就是傲笑红尘的佩剑了
LONG);
	setup();
	replace_program(ROOM);
}
