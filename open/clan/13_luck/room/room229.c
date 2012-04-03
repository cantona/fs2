inherit ROOM;
void create() {
	set( "short", "龙灭之道" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room230",
		"north"     : "/open/clan/13_luck/room/room227",
	]) );
	set( "long", @LONG

　　四周围静的让人毛骨耸然，空气中充斥着一股作人欲呕的血腥味
，但是路上却没有看到任何尸首或者打斗过的痕迹，你踏着脚步小心
地往前走着，脚步声和着心跳更添几分恐怖的气氛，不知有多少自认
是高手的人被击毙在此。

LONG);
	setup();
	replace_program(ROOM);
}
