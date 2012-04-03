inherit ROOM;
void create() {
	set( "short", "秘集室" );
	set( "object", ([
		"amount4"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"file10"   : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "owner", "roar" );
	set( "build", 10287 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room186",
	]) );
	set( "long", @LONG
你来到这，发现这里有一堆书架，你不由主的向书架前去，发现书架上的
秘集都是[0;1;32m□[1m□[1m□[1m@[1m□[1m□[1m□[1m□[0m，有”[0;1;34m□[1m□[1m□[1m~[1m□[1mp[1m□[1m□[0m”、”[0;1;31m□[1mC[1m□[1mj[1m□[1m□[0m”、”[0;1;36m□[1m□[1m□[1m□[1m□[1mC[1m□[1m□[0m”、”[0;1;32m□[1m□[1m□[1m□[1m□[1m□[0m
[0;1;32m□[1mC[0m”、”[0;1;30m□[1m□[1m□[1m□[1m□[1m□[1m□[1mk[0m”、”[0;1;33m□[1mW[1m□[1m□[1;30m□[1mU[1m□[1ma[1;31m□[1m□[1m□[1mL[1m□[1m\[0m”、”[0;1;35m□[1m@[1m□[1m□[1;31m□[1mG[1m□[1mQ[1;36m□[1m|[1m□[1m□[0m”，心想这都不
是狂想的秘技，好奇之于你一本一本的翻开看，却发现～[0;1;5;34m□[1;5mO[1;5m□[1;5mH[1;5m□[1;5m□[1;5m□[1;5mF[1;5m□[1;5m□[1;5m□[1;5m□[1;5m□[1;5mn[1;5m□[1;5m□[1;5m□[1;5m□[0m
～这九个字。

LONG);
	setup();
	replace_program(ROOM);
}
