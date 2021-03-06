inherit ROOM;
void create() {
	set( "short", "吟风小筑" );
	set( "object", ([
		"file3"    : "/daemon/class/blademan/obj/shield",
		"file7"    : "/open/tendo/obj/chaosbelt",
		"amount9"  : 1,
		"file1"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount1"  : 1,
		"amount3"  : 1,
		"file10"   : "/daemon/class/bonze/puty_pullium",
		"amount8"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/capital/room/king/obj/km-boots",
		"amount7"  : 1,
		"file9"    : "/open/gsword/obj/yuskirt",
		"amount4"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount10" : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"file2"    : "/open/main/obj/et_sword",
		"file8"    : "/open/ping/obj/chilin_legging",
	]) );
	set( "build", 10006 );
	set( "owner", "jsa" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room195.c",
		"out"       : "/open/clan/sky-wu-chi/room/room58.c",
		"west"      : "/open/clan/sky-wu-chi/room/room188.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"north"     : "/open/clan/sky-wu-chi/room/room190.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
山风徐徐吹来，将笼罩着的薄雾吹散，定
眼一看，已来到了吟风小筑门前；这世上有流传着
这么一句话，没参观过吟风小筑的人这一生算是白
活了，看这宅第苍松环抱难辨大小，一色的白墙灰
瓦相当素雅，门口两只石狮子张嘴微笑着，似乎也
安于这隐世独立般的情调。
LONG);
	setup();
	replace_program(ROOM);
}
