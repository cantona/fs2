inherit ROOM;
void create() {
	set( "short", "$MAG$地下铁牢$NOR$" );
	set( "exits", ([
		"west"      : "/open/clan/hell/room/room76",
	]) );
	set( "build", 1530 );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
