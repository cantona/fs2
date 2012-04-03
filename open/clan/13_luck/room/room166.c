inherit ROOM;
void create() {
	set( "short", "雾之林" );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room163.c",
		"south"     : "/open/clan/13_luck/room/room166",
		"west"      : "/open/clan/13_luck/room/room166",
		"north"     : "/open/clan/13_luck/room/room169.c",
	]) );
	set( "long", @LONG

　　谜样般的森林，终年浓雾不散，眼前只见白茫茫的一大片，伸手
不见五指。越往里头走去，雾气更是浓厚，突然一股股的寒风不时由
四方吹来，令人打了个冷颤。不远处的草堆里，不时传来稀稀嗦嗦的
声音，看样子似乎有什么东西躲在那。

LONG);
	setup();
	replace_program(ROOM);
}
