inherit ROOM;
void create() {
	set( "short", "青龙回廊" );
	set( "object", ([
		"file7"    : "/open/ping/obj/chilin_legging",
		"file5"    : "/open/prayer/obj/boris-cloth",
		"amount6"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount9"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/ping/obj/gold_hand",
		"file8"    : "/open/ping/obj/iceger",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount7"  : 1,
		"file2"    : "/daemon/class/fighter/armband",
	]) );
	set( "build", 10119 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room10.c",
		"west"      : "/open/clan/13_luck/room/room12",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    在往白虎堂的路上看到美丽的花种植在路旁的花园里，花园里有假
山流水是一个费尽心思所布置的地方，一切只为了只为了让青龙殿变的
更美丽，妳在往西边走着走着，过了不久听到不远处传来喧哗声，可见
‘白虎堂’快到了。

LONG);
	setup();
	replace_program(ROOM);
}
