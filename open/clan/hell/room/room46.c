inherit ROOM;
void create() {
	set( "short", "$HIB$nevermind$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount7"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"amount10" : 1,
		"file2"    : "/open/mon/obj/ghost-legging",
		"file7"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file9"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file10"   : "/open/mon/obj/ghost-legging",
		"file3"    : "/daemon/class/fighter/armband",
		"amount6"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"amount2"  : 1,
		"amount9"  : 1,
		"amount5"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
	]) );
	set( "owner", "nirvana" );
	set( "build", 10121 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room50.c",
		"south"     : "/open/clan/hell/room/room51.c",
		"east"      : "/open/clan/hell/room/room34",
		"west"      : "/open/clan/hell/room/room54.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
话说kalin的音乐经...那有的说了..
在kalin高三的那□...经历了一场大浩劫...
在身心俱疲时....megadeth进驻了他的小小心灵...
kalin之后深信rock 'N roll never die......
一直到大一时...kalin抛弃了thrash 拥抱了punk....
这是一个很关键的转折点...
听了一年的heavy... thrash... kalin的rock很传统...
但接触到punk后..,kalin像是找到宝的小孩..欣喜不矣..
若说rock 'N roll是上帝，那punk就是撒旦了...
LONG);
	setup();
	replace_program(ROOM);
}
