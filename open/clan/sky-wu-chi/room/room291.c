inherit ROOM;
void create() {
	set( "short", "火雁" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room15",
		"south"     : "/open/clan/sky-wu-chi/room/room289.c",
	]) );
	set( "long", @LONG
步入这里你发现了雪雁在这里练功...他以他惊人的内力做出这个人间炼狱
这时你不经怀疑他的修为是否以达到天人...和帮主相比又会差多少ㄋ...
所以你决定一探究尽
突然你被他的刀气所伤...完全没有办法进入他所防守的区域...只被他一昧攻击
结果你输了..他指说出一句话 怒 杀 斩 
LONG);
	setup();
	replace_program(ROOM);
}
