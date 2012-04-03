inherit ROOM;
void create() {
	set( "short", "剑客居" );
	set( "build", 678 );
	set( "owner", "cylling" );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room76",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    这里是狂想仙剑派剑客的专属房间，也是他平常用来钻研各种武
功秘笈的地方，房间内的摆设非常简单，只有几本书，一把剑和一枝
钓竿，大部份的时间都不在家，只有特定的时间会出现于此，修练武
功及秘笈，将自己的剑术发挥到及至，这是身为剑客一生的使命。

LONG);
	setup();
	replace_program(ROOM);
}
