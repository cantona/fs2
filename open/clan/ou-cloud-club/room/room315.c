inherit ROOM;
void create() {
	set( "short", "新区域" );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room235",
	]) );
	set( "owner", "slap" );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
