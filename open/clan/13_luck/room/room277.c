inherit ROOM;
void create() {
	set( "short", "武具防具厅" );
	set( "object", ([
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount7"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10221 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room282.c",
		"east"      : "/open/clan/13_luck/room/room306.c",
		"west"      : "/open/clan/13_luck/room/room301",
		"out"       : "/open/clan/13_luck/room/room5.c",
	]) );
	set( "long", @LONG

    整层放着，防具跟武具，有着各式各样的武具跟防具，强如风舞扬
。任正晴。郭襄....等，也逃不过吉祥高手的围剿，所以为新进弟子成
立的eq。wp室，希望能有一天..

               [0;1;32m□[1m□[1m□[1m□[1m□[1mA[1m□[1mH[1m□[1mQ[1m□[1mT[1m□[1m□[1m□[1ma[0m，[0;1;34m□[1m□[1m□[1m□[1m□[1mQ[1m□[1mT[1m□[1mH[1m□[1mA[1m□[1m□[1m□[1ma[0m
　　　　　　
     WEST ＝ [0;1;31m□[1mZ[1m□[1m□[1m□[1m□[0m    SOUTH ＝ [0;1;36m□[1m□[1m□[1m□[1m□[1m□[0m    [0;1;33m□[1m□[1m□[1m□[1m□[1m□[0m ＝ EAST

LONG);
	setup();
	replace_program(ROOM);
}
