inherit ROOM;
void create() {
	set( "short", "'$HIY$$HBGRN$美国疯$NOR$" );
	set( "owner", "butthead" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 20,
		"amount8"  : 40,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file10"   : "/open/ping/obj/poison_pill",
		"amount7"  : 200,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"amount4"  : 18,
		"file6"    : "/open/fire-hole/obj/k-pill",
		"amount9"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/doctor/pill/human_pill",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"amount10" : 7,
		"file5"    : "/open/snow/obj/dragon-sword",
		"file4"    : "/open/doctor/pill/human_pill",
		"amount6"  : 4,
		"file8"    : "/open/ping/obj/poison_pill",
		"file2"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 11043 );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room110",
		"north"     : "/open/clan/hell/room/room93.c",
		"west"      : "/open/clan/hell/room/room49.c",
	]) );
	set( "long", @LONG
$HIG$$HBBLU$
最近好友憋四...马的BB CALL把上了一个恐龙后..就天天骑龙..
你鬼咧...
死恐龙很爽咧...

凸 -,-
凸 @,@
凸 >,Q

闷死了.....何时大头蛋才能开炮ㄋㄟ...??!!
还是到车库弹弹我的小吉他好了....
看看是不是也出一张低传真的专辑...就能跟十八豆子一样..嘿嘿

$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
