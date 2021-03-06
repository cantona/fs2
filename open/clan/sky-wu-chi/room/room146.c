inherit ROOM;
void create() {
	set( "short", "白虎走廊" );
	set( "owner", "palapala" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10240 );
	set( "object", ([
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount8"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/ping/questsfan/obj/stone",
		"file3"    : "/open/gsword/obj/yuskirt",
		"file8"    : "/open/ping/questsfan/obj/posthumous",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"file5"    : "/open/ping/obj/ring-2",
		"file6"    : "/daemon/class/bonze/puty_pullium",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room144",
		"west"      : "/open/clan/sky-wu-chi/room/room145.c",
		"south"     : "/open/clan/sky-wu-chi/room/room78.c",
	]) );
	set( "long", @LONG
你走在名为‘白虎’走廊上你感觉到有一种不寒而栗的杀气，心种有股如同
走在钢索般一样危险而刺激，你巧运起内劲正等待未知的可能性。当你走到走廊
的中段时，你乍然的发现在东方有一个奇特的聚会场所。于是乎，你就越兴奋的
朝‘七彩结界’的方向走了过去。但是却有一股奇特的‘曼沱罗之盾’挡住了你
要往东边走去的路中，那发现你可能要集中精神才有办法走过。

LONG);
	setup();
	replace_program(ROOM);
}
