inherit ROOM;
void create() {
	set( "short", "min的私房菜2" );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room18",
	]) );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
