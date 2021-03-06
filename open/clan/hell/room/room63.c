inherit ROOM;
void create() {
	set( "short", "$HIY$废公阿琳老先生$WHT$之墓$NOR$" );
	set( "owner", "kalin" );
	set( "object", ([
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/doctor/pill/gnd_pill",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount5"  : 96,
		"amount10" : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 111,
		"amount8"  : 1,
		"file3"    : "/open/fire-hole/obj/k-pill",
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount1"  : 20,
		"amount9"  : 1,
		"amount3"  : 4,
		"file2"    : "/open/ping/obj/poison_pill",
		"file4"    : "/open/doctor/pill/sky_pill",
	]) );
	set( "build", 10348 );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room44",
		"north"     : "/open/clan/hell/room/room54.c",
		"east"      : "/open/clan/hell/room/room51.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
当你看到这个墓碑时..
一定会大吃一惊...心中不禁想着..
然到红颜都薄命吗?
你深深叹了口气....

压抑着悲伤与惋惜...
你焚香对着墓碑祭拜...

说时迟那时快..突然天雨交加...狂雷不矣..
墓冢竟然崩开一条裂缝...
飞出一只大头绿苍蝇....

ACK 1000 one.. oh my god!!
LONG);
	setup();
	replace_program(ROOM);
}
