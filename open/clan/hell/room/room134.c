inherit ROOM;
void create() {
	set( "short", "防风林内" );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room141",
	]) );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
