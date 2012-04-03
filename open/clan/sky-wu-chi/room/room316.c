inherit ROOM;
void create() {
	set( "short", "「多喝水”的家" );
	set( "object", ([
		"amount2"  : 1,
		"file3"    : "/open/killer/obj/kill_yar_head",
		"file1"    : "/open/doctor/pill/sky_pill",
		"amount4"  : 1,
		"file4"    : "/obj/gift/bingtang",
		"amount1"  : 17,
		"amount3"  : 1,
		"file2"    : "/open/sky/obj6/moon_diamond",
	]) );
	set( "build", 10108 );
	set( "light_up", 1 );
	set( "owner", "sogo" );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room36.c",
		"east"      : "/open/clan/sky-wu-chi/room/room342",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/room330.c",
	]) );
	set( "long", @LONG

水水水水水水水水水水水水水水水水水水水水水水水水
水水水水水水水水水水水水水水水水水水水水水水水水
水水水水水水水水水水喝喝水水水水水水水水水水水水   
水水水水水水水水水水喝喝水水水水水水水水水水水水   
水水水水水水水水水水喝喝水水水水水水水水水水水水   
水水水水水水水水水水喝喝水水水水水喝喝水水水水水
水水水水水水水水水水喝喝水水水水喝喝喝水水水水水
水水喝喝喝喝喝喝喝喝喝喝水水喝喝喝水水水水水水水     多
水水喝喝喝喝喝喝喝喝喝喝喝喝喝水水水水水水水水水     喝
水水水水水水水水喝喝喝喝喝喝水水水水水水水水水水     水
水水水水水水水喝喝喝喝喝喝喝水水水水水水水水水水     没
水水水水水水水喝喝水喝喝水喝喝水水水水水水水水水     事
水水水水水水喝喝水水喝喝水水喝喝水水水水水水水水
水水水水水水喝喝水水喝喝水水水喝喝水水水水水水水
水水水水水喝喝水水水喝喝水水水喝喝喝水水水水水水
水水水水水喝喝水水水喝喝水水水水喝喝喝喝水水水水
水水水水喝喝水水水水喝喝水水水水喝喝喝喝喝水水水          没
水水水喝喝水水水水水喝喝水水水水水喝喝喝喝喝水水          事
水水喝喝水水水水水水喝喝水水水水水水喝喝水水水水          多
水水水水水水水水喝喝喝喝水水水水水水水水水水水水          喝
水水水水水水水水水喝喝喝水水水水水水水水水水水水          水
水水水水水水水水水水喝水水水水水水水水水水水水水
水水水水水水水水水水水水水水水水水水水水水水水水
水水水水水水水水水水水水水水水水水水水水水水水水


LONG);
	setup();
	replace_program(ROOM);
}
