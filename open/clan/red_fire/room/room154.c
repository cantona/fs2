inherit ROOM;
void create() {
	set( "short", "枫叶林出口" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room153",
	]) );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
