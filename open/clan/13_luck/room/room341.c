inherit ROOM;
void create() {
	set( "short", "COMAN的房间" );
	set( "owner", "coman" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file3"    : "/obj/gift/shenliwan",
		"amount1"  : 215,
		"amount3"  : 1,
		"file2"    : "/obj/gift/unknowdan",
	]) );
	set( "build", 10812 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room342",
	]) );
	set( "long", @LONG

    当你一进入这间方间时，你觉得身体充满ㄌ杀气，你稍微看ㄌ四
周，放满ㄌ刀子，原来这间房间ㄉ主人喜欢收集各种绝世宝刀!!，前
面ㄉ墙壁上还挂ㄌ一幅雷震天 (WCC)ㄉ画像，此人就是当年一个人单
挑fire kingㄉ刀客之王，也是COMANㄉ师傅，恩师。


LONG);
	setup();
	replace_program(ROOM);
}
