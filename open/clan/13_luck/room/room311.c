inherit ROOM;
void create() {
	set( "short", "枫之舞室" );
	set( "owner", "turtle" );
	set( "object", ([
		"file2"    : "/open/gsword/obj/dragon-sword",
		"file1"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/tendo/obj/shoe",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/scholar/obj/icefan",
		"file4"    : "/open/gsword/obj/yuskirt",
		"amount1"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/doctor/obj/needle9",
	]) );
	set( "build", 10305 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room273",
	]) );
	set( "long", @LONG

    传说中的门派，变态舞者手中的武器，一身法术无人能敌，尤其是
玄冰护体，比移花接木，借力使力还要厉害，只要两三下，就可以收一
收，好去阴间报到了，天火神雷术更是让你状况一堆，小心看到舞者就
是不要打就对了。

LONG);
	setup();
	replace_program(ROOM);
}
