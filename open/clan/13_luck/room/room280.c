inherit ROOM;
void create() {
	set( "short", "吉祥埋剑室" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"file1"    : "/open/port/obj/wolf_ring",
		"amount2"  : 1,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 1,
		"amount4"  : 2,
		"file2"    : "/open/ping/obj/ring-2",
	]) );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room269",
	]) );
	set( "build", 10473 );
	set( "light_up", 1 );
	set( "long", @LONG

    此室放着各式各样的剑，传说中的连阳剑，无坚不摧的倚天剑，各
种好剑都在其中，也是吉祥的先烈们一手打来的，而连阳剑在仙剑现任
掌门郑士欣之手，使出剑气连阳更是暴力无穷，而倚天剑在小东邪郭襄
之手，而小东邪除了掌法，剑术也学到真传，只能小心小心在小心的去
打，不然只是去送死而已。


LONG);
	setup();
	replace_program(ROOM);
}
