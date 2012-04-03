inherit ROOM;
void create() {
	set( "short", "【我想上的内房】" );
	set( "owner", "sir" );
	set( "object", ([
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/capital/obj/gold_pill",
		"amount9"  : 704,
		"file3"    : "/open/tendo/obj/chaosbelt",
		"amount5"  : 1,
		"file8"    : "/open/doctor/pill/human_pill",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount1"  : 1,
		"amount8"  : 158,
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file9"    : "/open/doctor/pill/ice_pill",
		"amount4"  : 1,
		"file10"   : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10353 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room158",
		"down"      : "/open/clan/sky-wu-chi/room/room27",
	]) );
	set( "long", @LONG

这里是我想上预定二老婆的房间，为了防止被老婆大人刀神燕仔发现，
特地做出一个内房不让任何人发现，我想上真是一个不知羞耻的小色龟。
而且还要在作出更多的内房好满足自己的欲望。但是大老婆会发现吗?
你邪恶地对着大家说着，大家瞎子吃馄饨─心里有数。
也因此而创出《性情心法》的强力绝学。

LONG);
	setup();
	replace_program(ROOM);
}
