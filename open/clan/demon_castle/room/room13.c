inherit ROOM;
void create() {
	set( "short", "小二的丹药房" );
	set( "light_up", 1 );
	set( "build", 10040 );
	set( "exits", ([
		"south"     : "/open/clan/demon_castle/room/room12",
	]) );
	set( "owner", "suzukiami" );
	set( "long", @LONG
这里摆着小二由世界各地蒐集来的丹药
各式各样的丹药琳琅满目
看的你眼花撩乱
但是...它们都放在保险柜里
你只能看到它们却拿不到
LONG);
	setup();
	replace_program(ROOM);
}
