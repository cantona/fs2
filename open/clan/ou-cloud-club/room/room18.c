inherit ROOM;
void create() {
	set( "short", "$HIY$傲$HIC$云$NOR$居" );
	set( "object", ([
		"file6"    : "/open/killer/obj/bellstar",
		"file5"    : "/open/killer/obj/bellstar",
		"amount10" : 99999,
		"file7"    : "/open/killer/obj/bellstar",
		"file8"    : "/open/killer/obj/bellstar",
		"amount8"  : 99999,
		"file4"    : "/open/killer/obj/bellstar",
		"amount3"  : 99999,
		"amount9"  : 99999,
		"file2"    : "/open/killer/obj/bellstar",
		"amount7"  : 99999,
		"amount4"  : 99999,
		"amount2"  : 99999,
		"file3"    : "/open/killer/obj/bellstar",
		"file10"   : "/open/killer/obj/bellstar",
		"amount6"  : 99999,
		"amount5"  : 99999,
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/water-ball",
		"file9"    : "/open/killer/obj/bellstar",
	]) );
	set( "build", 10088 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room16.c",
		"west"      : "/open/clan/ou-cloud-club/room/room138.c",
		"up"        : "/open/clan/ou-cloud-club/room/room154",
		"east"      : "/open/clan/ou-cloud-club/room/room134.c",
		"north"     : "/open/clan/ou-cloud-club/room/room197",
	]) );
	set( "long", @LONG
这里是傲云山庄的高手们所居住的地方，傲云山庄内的
人都居住于此，拥有浓烈的肃杀味道，所以，在这里你要特
别的的小心谨慎，以免进入了不该进入的房间。

左边是黯夜残海(cowboy)的房间，右边则是天涯舞剑尘(left)之房．
往上则是人面蛆(issei)的水晶虫洞

LONG);
	setup();
	replace_program(ROOM);
}
