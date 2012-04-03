inherit ROOM;
void create() {
	set( "short", "十三钱庄" );
	set( "build", 10676 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/hall.c",
		"up"        : "/open/clan/13_luck/room/room40.c",
	]) );
	set( "long", @LONG

    古人云：钱不是万能的，但是没钱却是万万不能。现今的十三吉
祥属于草创的时候，需要很多的人力跟物力，希望身为十三的一员能
够有钱的出钱，有力的出力。让十三吉祥再一次的活耀于狂想空间，
最终目标：　　
　　　　　　　　～～～成为武林中最大帮派～～～

LONG);
	setup();
	replace_program(ROOM);
}
