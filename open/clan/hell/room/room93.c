inherit ROOM;
void create() {
	set( "short", "$HBBLU$ $HIW$ ★   $HIR$99 Ways To Die    $HIW$★  $NOR$" );
	set( "object", ([
		"amount3"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"amount4"  : 1,
		"file4"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount2"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/fire-hole/obj/y-pill",
		"file3"    : "/open/gsword/obj/dragon-sword",
		"amount6"  : 188,
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
	]) );
	set( "owner", "butthead" );
	set( "exits", ([
		"east"      : "/open/clan/hell/room/room112",
		"north"     : "/open/clan/hell/room/room96.c",
		"west"      : "/open/clan/hell/room/room34.c",
		"south"     : "/open/clan/hell/room/room136.c",
	]) );
	set( "light_up", 1 );
	set( "build", 13755 );
	set( "long", @LONG

$MAG$大头蛋最爱坐在客厅里的破沙发上看MTV...
$MAG$嗯 ~ 最近都没拨$HIC$Megadeath$MAG$的MTV..
$HIW$你鬼的$MAG$...又是$HIM$布兰妮$MAG$要怎样..cow
闷死人啦.....

$MAG$还是转台看看$HIY$Z频道$MAG$好了...
$WHT$口夷$MAG$ ~~  Die !!!!!!!
又是重播5年前的$HIG$东京情色派$MAG$... >_Q 
老妖小爱...丑死了.....

$RED$ ooxx....更!!         $HIW$凸 -,-$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
