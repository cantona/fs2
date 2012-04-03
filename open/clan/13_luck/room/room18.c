inherit ROOM;
void create() {
	set( "short", "青龙殿" );
	set( "object", ([
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount5"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/scholar/obj/icefan",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/ping/obj/iceger",
		"amount2"  : 1,
		"amount4"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"file3"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file5"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10156 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room19",
		"south"     : "/open/clan/13_luck/room/room10.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    走了一会觉得青龙殿快到了尽头，以为会看到大殿堂，但是好像没
有看到任何东西，没多久看到前方好像有宽广的空地，空地上有向上爬
伸的青环不知道是什么，所以你马上快速的前去，只见到青环一直向上
攀升似乎看不到进头。

LONG);
	setup();
	replace_program(ROOM);
}
