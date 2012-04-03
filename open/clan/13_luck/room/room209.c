inherit ROOM;
void create() {
	set( "short", "锁龙塔休息室" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room210",
		"north"     : "/open/clan/13_luck/room/room208",
	]) );
	set( "long", @LONG

　　一路上历经万难，总算找到这一小小的避风港。环顾四周地处隐
密，应该不虞会被龙群发现这藏身之处，总算可以安心的休养生息一
下了！！看来前途奸险，不如趁此良机好好休息一下，待会才能继续
冒险的旅程，拯救昌生于一己！！

LONG);
	setup();
	replace_program(ROOM);
}
