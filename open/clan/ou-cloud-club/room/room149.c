inherit ROOM;
void create() {
	set( "short", "$HIY$傲$HIC$云$NOR$居" );
	set( "object", ([
		"amount7"  : 1,
		"file6"    : "/open/love/obj/shield",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount2"  : 1,
		"amount8"  : 1,
		"file10"   : "/open/prayer/obj/boris-cloth",
		"file2"    : "/open/poison/obj/pearl",
		"file1"    : "/open/scholar/obj/s_hands",
		"amount9"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount4"  : 1,
		"file9"    : "/open/wu/npc/obj/armband",
		"file7"    : "/open/ping/obj/ring-2",
		"amount10" : 1,
	]) );
	set( "owner", "saysay" );
	set( "build", 10343 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room150",
		"east"      : "/open/clan/ou-cloud-club/room/room218",
		"north"     : "/open/clan/ou-cloud-club/room/room125.c",
		"south"     : "/open/clan/ou-cloud-club/room/room152.c",
	]) );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的地方，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的的小心谨慎，以免进入了不该进入的房间。
　　　　　　　　　　　　　　　　　　　　　
左边是小芭乐(kiroro)的芭乐园，右边则是轻舞飞扬(flyindance)的房间．

LONG);
	setup();
	replace_program(ROOM);
}
