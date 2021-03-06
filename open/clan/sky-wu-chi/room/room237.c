inherit ROOM;
void create() {
	set( "short", "圣火殿" );
	set( "owner", "gifa" );
	set( "object", ([
		"file10"   : "/daemon/class/fighter/armband",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/prayer/obj/boris-cloth",
		"amount2"  : 1,
		"amount10" : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"file2"    : "/open/capital/guard/gring",
		"amount5"  : 1,
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/open/ping/questsfan/obj/dagger1",
	]) );
	set( "build", 11313 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room94",
		"west"      : "/open/clan/sky-wu-chi/room/room297",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
悲伤止步 苏永康

作词：陈建宁/陈政卿　作曲：蔡灯锹/黄祖荫　编曲：锺兴民

天亮了　我们竟然不知如何道别
我们都笑了　已经分离不同于再见
亲吻好像也不对　拥抱好像也不对
妳说天色这么美　不如再走下一条街

天凉了　冷风在耳边拼命地吹啊吹
我可以感觉　悲伤正在城市中蔓延
爱情走的太仓促　幸福跟不上脚步
这样结束对或不对　对我而言都是种错误

能不能让悲伤止步　停留在幸福原处
我努力追逐　才发现妳也一样辛苦

能不能让悲伤止步　回到相识的最初
如果我们不问付出　也许爱情会看得更清楚



LONG);
	setup();
	replace_program(ROOM);
}
