inherit ROOM;
void create() {
	set( "short", "-客厅-" );
	set( "owner", "andy" );
	set( "object", ([
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
		"file6"    : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"amount5"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/daemon/class/bonze/puty_pullium",
		"amount10" : 1,
		"amount1"  : 1,
		"file1"    : "/open/wu/npc/obj/armband",
		"file7"    : "/open/gsword/obj/may_ring",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"file10"   : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/tendo/obj/chaosbelt",
		"amount3"  : 1,
		"amount7"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10178 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room73",
	]) );
	set( "long", @LONG
这是ANDY的客厅，四周除了一座沙发之外，没有任何的摆设，
他都在这儿提升自己基本内功以及雪苍内功的等级，为的就是让自
己变的更强，努力朝着ＦＳ中第一武者的称号迈进......所以他现
在拼命的努力狂练功，以达成目标为主。


LONG);
	setup();
	replace_program(ROOM);
}
