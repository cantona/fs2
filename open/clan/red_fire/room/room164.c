inherit ROOM;
void create() {
	set( "short", "快完成房间吧" );
	set( "owner", "welo" );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room115",
	]) );
	set( "long", @LONG
此地初建, 空无一物。
LONG);
	setup();
	replace_program(ROOM);
}
