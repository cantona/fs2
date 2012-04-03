inherit ROOM;
void create() {
	set( "short", "‘观众台’" );
	set( "owner", "poll" );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room253",
		"north"     : "/open/clan/13_luck/room/room78",
	]) );
	set( "long", @LONG
一层层的阶梯形成了座位。从这边可以清楚看到决斗场上的比赛
。往决斗场望去，似乎可以感觉到昔日比武的盛况。至于未来竞争的
精彩，或许就是坐在看台上的你要去努力的了。想到这边，渐渐泛起
热血，心中呼喊着：‘加油！’。
LONG);
	setup();
	replace_program(ROOM);
}
