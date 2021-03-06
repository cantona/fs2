inherit ROOM;
void create() {
	set( "short", "$HIC$欣$HIR$□$HIY$防具所$HIB$IV$NOR$" );
	set( "owner", "lts" );
	set( "object", ([
		"file1"    : "/open/ping/obj/iceger",
		"amount8"  : 1,
		"file3"    : "/daemon/class/fighter/ywboots",
		"amount7"  : 1,
		"file10"   : "/daemon/class/fighter/ywsu",
		"file9"    : "/open/ping/obj/ring-2",
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/fighter/ywhelme",
		"amount6"  : 1,
		"amount1"  : 1,
		"amount5"  : 1,
		"file7"    : "/daemon/class/fighter/ywhand",
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/daemon/class/fighter/armband",
		"file5"    : "/daemon/class/fighter/ywleg",
		"amount10" : 1,
		"amount3"  : 1,
		"amount4"  : 1,
	]) );
	set( "build", 10085 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room187.c",
		"west"      : "/open/clan/sky-wu-chi/room/room108",
	]) );
	set( "long", @LONG
当你到了欣的房间便不自觉的感觉到了一股淡淡的香气与悠悠的乐音围;绕在你的四周，天花板上所映射而下的蓝色光芒均匀的散布在房间的每个角落﹞@张;华丽的巨大蓝宝石床正摆放在你的北边，在你的南边，你看到一座古色古香的檀木制;书橱，而你的西边则摆放着一个巨大的古瓷玉瓶，你的东方有一面巨大的蓝宝石墙，;你可以透过蓝宝石墙看到整个狂想空间完全的呈现在你的面前。

LONG);
	setup();
	replace_program(ROOM);
}
