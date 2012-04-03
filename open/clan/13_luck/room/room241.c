inherit ROOM;
void create() {
	set( "short", "炎龙谷" );
	set( "owner", "pighead" );
	set( "object", ([
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 63,
		"amount8"  : 1,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"file3"    : "/open/fire-hole/obj/g-pill",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 70,
		"amount5"  : 1,
		"amount4"  : 98,
		"file1"    : "/open/fire-hole/obj/r-pill",
	]) );
	set( "build", 10404 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room179",
	]) );
	set( "long", @LONG

    这里是传说中的[0;1;32m□[1m□[1m□[1ms[1m□[1m□[0m，一进入谷中发现几只可爱的小动物在嘻
戏玩耍着，长着小翅膀，不时飞旋于空中，让你想要把它们抱起来把
玩，就在你抱起它的同时，远处传来具大的脚步声，让你觉得心生畏
惧，难到真的有龙的存在？当你在考虑要不要离开时，在眼前出现一
只具大的火龙，嘴里正吐出熊熊的[0;1;31m□[1m□[1m□[1mV[0m，你一个脚步不稳坐在地面，
一个念头闪过，难不成我抱的是牠的小孩吗？


LONG);
	setup();
	replace_program(ROOM);
}
