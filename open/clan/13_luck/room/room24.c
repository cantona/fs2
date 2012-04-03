inherit ROOM;
void create() {
	set( "short", "齐天道" );
	set( "object", ([
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/ping/obj/gold_hand",
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"file4"    : "/open/ping/obj/iceger",
		"amount5"  : 1,
		"file1"    : "/open/ping/obj/chilin_legging",
		"amount1"  : 1,
		"file5"    : "/obj/gift/xisuidan",
		"file9"    : "/open/prayer/obj/boris-boots",
		"file2"    : "/data/autoload/killer/reko_sword",
		"amount7"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/scholar/obj/icefan",
		"amount3"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"file7"    : "/open/prayer/obj/kylin-belt",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "mad" );
	set( "build", 18595 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room25",
		"south"     : "/open/clan/13_luck/room/room23",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    走着走着你发现天蓝的空不见了，变成了人为的灯火时，你猜想着
是不是要到了，看看四周警备更森严，不准敌人伺机而入，再走一会看
到深蓝殿堂想必那就是霸者传人之殿一‘齐天殿’，你将可目睹传人之
真面目了。

LONG);
	setup();
	replace_program(ROOM);
}
