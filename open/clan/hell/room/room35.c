inherit ROOM;
void create() {
	set( "short", "$HBCYN$天晶结界$NOR$" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room29",
	]) );
	set( "object", ([
		"file5"    : "/open/ping/questsfan/obj/diamond_armor",
		"amount9"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount6"  : 1,
		"file1"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount3"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file3"    : "/open/ping/questsfan/obj/diamond_belt",
		"file4"    : "/open/ping/questsfan/obj/diamond_hands",
		"file6"    : "/open/ping/questsfan/obj/diamond_boots",
		"file2"    : "/open/ping/questsfan/obj/diamond_armor",
		"file10"   : "/open/ping/questsfan/obj/diamond_boots",
		"amount1"  : 1,
		"amount5"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10347 );
	set( "long", @LONG
传说中书生最好的装备,虹晶装备全套,虽然是针对书生设计的,但其实对于其他
门派来说,其实也是不错的防身装备.所以帮主平时特别准备三套此种装备,置于此结
界中,让帮众在偷懒或是紧急的时候可以来此拿取,结界的顶端刻着帮主的叮咛,希望
帮众使用完后都能自动归还

LONG);
	setup();
	replace_program(ROOM);
}
