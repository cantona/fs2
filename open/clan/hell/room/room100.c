inherit ROOM;
void create() {
	set( "short", "新区域" );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room102",
	]) );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
