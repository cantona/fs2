inherit ROOM;
void create() {
	set( "short", "$HIC$kalin$HIW$的$HIG$鸡丝头2$NOR$" );
	set( "owner", "taxi" );
	set( "build", 11202 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room4.c",
		"east"      : "/open/clan/hell/room/room55.c",
	]) );
	set( "long", @LONG
嗯..
kalin 自从sui后,一心想中兴射手,好不容易练到375one
但..但.....连master 废 ba 都打不赢....
呜....如今kalin只能卖卖公益彩券维生...
往日的妖刀风采不在...只能盼望小弟大飞能振作...
帮kalin把铜锣湾扛霸子的地位要回来...
LONG);
	setup();
	replace_program(ROOM);
}
