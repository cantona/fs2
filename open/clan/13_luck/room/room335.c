inherit ROOM;
void create() {
	set( "short", "学武之道" );
	set( "owner", "haoman" );
	set( "object", ([
		"file5"    : "/open/mogi/castle/obj/ninepill",
		"amount5"  : 7,
		"amount2"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/ping/obj/ring-2",
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/daemon/class/blademan/obj/gold-blade",
		"amount1"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"amount7"  : 1,
	]) );
	set( "build", 11358 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room336",
		"south"     : "/open/clan/13_luck/room/room333.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    松林中静俏俏地没半点声息，下弦月不甚[0;1;33m□[1m□[1m□[1mG[0m，映着野[0;1;32m□[1mQ[1m□[1mL[0m。照
得人面皆转过了良久忽听得林中一声呼哨，左侧和右侧各有一行[0;1;30;47m□[1m□[1m□[1m□[0m
汉子奔出，原来是[0;1;34m□[1m□[1m□[1m□[1m□[1m□[0m的门徒正在努力练习轻功。此时厚厚黑黑的
云层吹过来，压得你喘不过气来，连忙[0;1;33m□[1mB[1m□[1m\[0m自保。


LONG);
	setup();
	replace_program(ROOM);
}
