inherit ROOM;
void create() {
	set( "short", "魔龙麟收藏阁" );
	set( "owner", "biwem" );
	set( "object", ([
		"file3"    : "/obj/gift/lingzhi",
		"file1"    : "/obj/gift/lingzhi",
		"amount1"  : 1,
		"file6"    : "/obj/gift/shenliwan",
		"amount6"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"file2"    : "/obj/gift/bingtang",
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/obj/gift/xiandan",
		"amount9"  : 1,
		"amount8"  : 1,
		"file8"    : "/obj/gift/hobowdan",
		"file10"   : "/obj/gift/bingtang",
		"file9"    : "/obj/gift/unknowdan",
		"amount5"  : 1,
		"file7"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file4"    : "/open/mogi/dragon/obj/scale",
	]) );
	set( "build", 10050 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room281.c",
	]) );
	set( "long", @LONG
这里是机器人一号收集魔龙麟的房间
里面的战利品都是机器人一号到处骗来的
其中最令他自己感到骄傲的是
他竟然能重吃人不吐骨头的 梦魂残星 那骗到手
这时连他自己都粉佩服自己的勇气和好运
但不怕死的他
正在计画如何重 梦魂残星 那骗到更多ㄉ好东西
LONG);
	setup();
	replace_program(ROOM);
}
