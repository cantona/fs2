inherit ROOM;
void create() {
	set( "short", "笨蛋不得入内" );
	set( "build", 10845 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room122",
		"west"      : "/open/clan/hell/room/room127.c",
	]) );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
