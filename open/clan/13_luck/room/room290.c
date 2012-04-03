inherit ROOM;
void create() {
	set( "short", "EMC营区大门" );
	set( "object", ([
		"amount6"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "adeyzit" );
	set( "build", 10995 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room284",
	]) );
	set( "long", @LONG
营区大门..除了每天来往的洽公人员..与长官的出入..登记是
一定要的..大门除了两名卫兵..还有一位哨长..卫兵两小时一班..
有分单点哨跟双点哨..都由警卫排安官所带来上哨..每个卫兵都要
全副武装以防止敌人的渗入..而且就要叫一分钟待命班支援了..
LONG);
	setup();
	replace_program(ROOM);
}
