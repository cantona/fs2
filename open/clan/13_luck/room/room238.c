inherit ROOM;
void create() {
	set( "short", "禁地" );
	set( "owner", "dancer" );
	set( "object", ([
		"amount6"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"file10"   : "/open/killer/memory/static",
		"file5"    : "/open/magic-manor/obj/golden-ball",
		"file6"    : "/open/killer/memory/static",
		"amount1"  : 1,
		"file2"    : "/open/magic-manor/obj/soil-ball",
		"file7"    : "/open/killer/memory/static",
		"amount10" : 1,
		"file4"    : "/open/magic-manor/obj/fire-ball",
		"file1"    : "/open/magic-manor/obj/water-ball",
		"amount9"  : 1,
		"file3"    : "/open/magic-manor/obj/wood-ball",
		"file9"    : "/open/killer/outsea/dstone",
		"amount7"  : 1,
		"file8"    : "/open/killer/outsea/dstone",
		"amount4"  : 1,
	]) );
	set( "build", 10699 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room119",
		"south"     : "/open/clan/13_luck/room/room239",
	]) );
	set( "long", @LONG

这里是夜梦宫二楼,根据历代先祖的遗命平常这里是禁止任何人的进出
的,就算是宫主也不能违背这项决定,除非是遇到重大灾害外,否则不能动
到这里的任何东西.正当你疑惑这怎么会没有任何的守护者,四周的墙上
闪出十道光芒并出现十只护卫神兽对你说道没是快滚不要留在这里.

LONG);
	setup();
	replace_program(ROOM);
}
