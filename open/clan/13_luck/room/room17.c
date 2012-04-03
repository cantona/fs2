inherit ROOM;
void create() {
	set( "short", "白虎堂" );
	set( "build", 159 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room12",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    一进白虎堂看到一面刻有猛虎的图案，你被吓了一跳，其实这也是
十三吉祥审理案件的地方，只要犯罪的人一进到这里都会被这只猛虎吓
到腿软使案件更好审理，听说这只猛虎有时晚上会巡视十三吉祥，有不
少人说有看过。

LONG);
	setup();
	replace_program(ROOM);
}
