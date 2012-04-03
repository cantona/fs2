inherit ROOM;
void create() {
	set( "short", "幸运草环室" );
	set( "owner", "szn" );
	set( "object", ([
		"file6"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/ping/obj/gold_hand",
		"file7"    : "/open/dancer/obj/yuawaist",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"file1"    : "/open/ping/obj/ring-2",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"amount1"  : 1,
		"file3"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/daemon/class/fighter/armband",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room310",
		"south"     : "/open/clan/13_luck/room/room305",
	]) );
	set( "build", 10146 );
	set( "light_up", 1 );
	set( "long", @LONG

    这这，是那个传说中小东邪郭襄手中的幸运草环吗？此人的掌法得
到东邪黄药师的真传，一掌三四千都不夸张，加上变态的剑法，难怪是
free mob中的狠角色，加上那机车的倚天剑，武器都会被打坏，所以幸
运草环来之不易，希望爱惜使用。

LONG);
	setup();
	replace_program(ROOM);
}
