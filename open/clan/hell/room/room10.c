inherit ROOM;
void create() {
	set( "short", "$HIY$阴间金纸存放处$NOR$" );
	set( "build", 12306 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/hall",
	]) );
	set( "long", @LONG
这里是地府的大鬼中鬼小鬼们放金纸的地方,仔细看四周的墙壁,全都是用纸
钱做成的,地府的金库就在此处,如果想要死的时候过的快乐点,就没事过来捐点
钱吧,阎罗王收够了钱自然会多关照你的,可别想从这偷钱喔,逃到地狱也会把你
偷的钱追回来的

LONG);
	setup();
	replace_program(ROOM);
}
