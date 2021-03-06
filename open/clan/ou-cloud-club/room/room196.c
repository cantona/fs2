inherit ROOM;
void create() {
	set( "short", "$HIR$真情$HIC$一$HIY$世$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"file10"   : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount5"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"amount9"  : 1,
		"file1"    : "/open/capital/guard/gring",
		"file9"    : "/open/killer/obj/k_ring",
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount8"  : 73,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount10" : 1,
		"amount7"  : 1,
		"file8"    : "/open/marksman/obj/super_pill",
		"file7"    : "/open/poison/obj/pearl",
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"file2"    : "/open/capital/obj/gold_pill",
	]) );
	set( "owner", "flyindance" );
	set( "build", 10072 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room130.c",
		"enter"     : "/open/clan/ou-cloud-club/room/room228",
	]) );
	set( "long", @LONG
剑君十二恨的老大〔无情〕的住所，传闻此人
是帮主在求武时的大哥，武学似乎还在帮主剑君之
上，但却隐居于此，而此房装饰更为简朴，只有一
张床可以用来睡觉跟几只拿来练武用的木人伫立着
而已．墙角道是摆着不少武具．

LONG);
	setup();
	replace_program(ROOM);
}
