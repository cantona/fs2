inherit ROOM;
void create() {
	set( "short", "吉祥水道" );
	set( "object", ([
		"file7"    : "/daemon/class/blademan/obj/hstone",
		"file5"    : "/daemon/class/blademan/obj/wastone",
		"file3"    : "/daemon/class/blademan/obj/estone",
		"amount1"  : 1,
		"file6"    : "/daemon/class/blademan/obj/skykey",
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/daemon/class/blademan/obj/gstone",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/daemon/class/blademan/obj/wstone",
		"file2"    : "/daemon/class/blademan/obj/fstone",
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 10103 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/hall.c",
		"west"      : "/open/clan/13_luck/room/room26",
	]) );
	set( "long", @LONG

    当你向前远望时，你会感到非常高兴，因为目的地即将到达，当你
更注意前方的景色时你会觉得好美，在你探听之下知道那是十三吉祥的
名胜柳月泉，那是十三吉祥的总枢纽，来来往往的帮众众多，你会巴不
得赶快下船去柳月泉好好游玩一般。

LONG);
	setup();
	replace_program(ROOM);
}
