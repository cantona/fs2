inherit ROOM;
void create() {
	set( "short", "笨蛋不得入内" );
	set( "build", 10212 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room121",
		"west"      : "/open/clan/hell/room/room123.c",
	]) );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
