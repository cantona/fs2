inherit ROOM;
void create() {
	set( "short", "刀冢" );
	set( "object", ([
		"file2"    : "/open/wind-rain/obj/bird-blade",
		"amount3"  : 1,
		"amount2"  : 1,
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"amount6"  : 1,
		"file7"    : "/daemon/class/blademan/obj/gold-blade",
		"amount8"  : 1,
		"file4"    : "/open/ping/obj/gold_hand",
		"file5"    : "/open/ping/obj/chilin_legging",
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/scholar/obj/icefan",
		"file8"    : "/open/port/obj/wolf_ring",
		"file3"    : "/open/killer/obj/k_ring",
		"amount7"  : 1,
		"amount1"  : 1,
	]) );
	set( "owner", "blader" );
	set( "build", 11826 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room352",
		"north"     : "/open/clan/13_luck/room/room342.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    经过狭小通道后，你来到一个巨大的洞穴之中，只见四周的土地
上有六座大小不一的坟墓，其中一座最大的坟墓上插者一把阴灵邪气
的刀中方的墓碑上(stone)似乎有东西，你心情兴奋的想调查(check)
                                 
                            (金)
                             ＊
                   (火)＊    ＊    ＊(木)
                            (心)
                          ＊　　＊
                         (水)  (土)

LONG);
	setup();
	replace_program(ROOM);
}
