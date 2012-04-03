inherit ROOM;
void create() {
	set( "short", "平凡无奇的所在" );
	set( "object", ([
		"amount3"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"amount5"  : 365,
		"file9"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file10"   : "/open/mon/obj/ghost-claw",
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 295,
		"amount9"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/ping/obj/cloud",
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount10" : 1,
		"file5"    : "/open/doctor/pill/human_pill",
		"file4"    : "/open/doctor/pill/ice_pill",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "owner", "slayer" );
	set( "light_up", 1 );
	set( "build", 10061 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room176",
	]) );
	set( "long", @LONG
环顾四周，朴素的摆设，简单明亮的格局，这实在是个平
凡无奇的所在．．是了，这就是圣火新星  无奇的练功所在。
无奇是个神秘人物，没人知道他的武功究竟有多深，他亦从来
不轻易展露自己的武功。话虽如此，没人不想知道究竟他如何
以一介新人习得圣火的独门绝学且成为教中核心人物的来由。
但，看这平凡无奇的居所，你不禁一叹，其神秘实难以捉摸。
LONG);
	setup();
	replace_program(ROOM);
}
