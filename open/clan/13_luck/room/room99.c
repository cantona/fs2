inherit ROOM;
void create() {
	set( "short", "凤凰楼" );
	set( "build", 363 );
	set( "exits", ([
		"up"        : "/open/clan/13_luck/room/room98",
		"out"       : "/open/clan/13_luck/room/room41.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    这里是是十三吉祥的客栈左厅‘凤凰楼’，也是装饰最为华丽非
凡，大门口挂着钻石做的牌匾闪闪发亮，令你忍不住多看几眼，两根
门柱上的凤凰雕刻的栩栩如生，在往里面望去大厅中央壁上挂着一幅
龙凤呈祥，显的气派非凡。

LONG);
	setup();
	replace_program(ROOM);
}
