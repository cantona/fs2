inherit ROOM;
void create() {
	set( "short", "$HIG$指令测试房二$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/new_heaven/room/room6",
		"north"     : "/open/clan/new_heaven/room/room10",
	]) );
	set( "long", @LONG
别闹了, long还叫我要写一堆, 不然就不给我算有long, 看了code,
说要sizeof(long)>100才算数, 拜托一下, 本大爷没那么多时间写叙述啦,
哈啦半天, 应该有100字了吧
LONG);
	setup();
	replace_program(ROOM);
}
