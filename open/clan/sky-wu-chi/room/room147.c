inherit ROOM;
void create() {
	set( "short", "小嫺的闺房" );
	set( "object", ([
		"file10"   : "/daemon/class/fighter/armband",
		"file7"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/daemon/class/bonze/puty_pullium",
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount7"  : 1,
		"amount10" : 1,
		"file5"    : "/open/dancer/obj/yuaboots",
		"amount8"  : 1,
		"file8"    : "/open/ping/obj/ring-2",
		"file6"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"amount4"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount3"  : 1,
		"file1"    : "/open/ping/obj/chilin_legging",
		"amount6"  : 1,
		"amount9"  : 1,
		"amount1"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
	]) );
	set( "owner", "oop" );
	set( "light_up", 1 );
	set( "build", 10103 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room149",
	]) );
	set( "long", @LONG
当你一进入我想上的房间，不禁欲火焚身，开始想要起来了，真是奇怪，平时都起不来
，现在变成这样。就好像我都踢了你一下你怎么可能还站的起来。

其不传绝学小宇宙拳如：
我想上把圣衣脱下，燃烧了自己的小宇宙，大喝第一式：看我的‘星　云　风　暴’～～～

我想上大喝第二式：看我的‘曙  光  女  神  之  宽  恕’～～～‘钻  石  巨  拳’

我想上燃烧了全身的小宇宙，大喝第三式：看我的‘凤  翼  天  翔’～～～

最后突发奇想创出最强一击

我想上大喝一声最终式：看我的「天  马  流  星  拳”～～～

LONG);
	setup();
	replace_program(ROOM);
}
