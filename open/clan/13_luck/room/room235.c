inherit ROOM;
void create() {
	set( "short", "惊雁宫" );
	set( "object", ([
		"amount9"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
		"file7"    : "/open/prayer/obj/boris-boots",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-claw",
		"amount10" : 1,
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/capital/obj/gold_pill",
		"amount7"  : 1,
		"file6"    : "/open/killer/obj/dagger",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/prayer/obj/kylin-belt",
	]) );
	set( "light_up", 1 );
	set( "build", 10015 );
	set( "owner", "rickshu" );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room97",
	]) );
	set( "long", @LONG
惊雁宫占地极广，殿阁亭台，气象肃森，依山势而建，背靠千里岗
主峰惊雁峰，亦呈行宫得名之来由。惊雁峰高插入云，秀出群山之上，
使惊雁宫雄视整个留马平原，留马驿在左上方的七里远处。全宫除主殿
偏殿以一种近乎大理石的质料所建外，其他都是木构建筑。
LONG);
	setup();
	replace_program(ROOM);
}
