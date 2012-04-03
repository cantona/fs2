inherit ROOM;
void create() {
	set( "short", "$HIG$乾坤战斗服$NOR$" );
	set( "object", ([
		"file7"    : "/open/dancer/obj/yuawaist",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"file1"    : "/open/dancer/obj/yuawaist",
		"amount6"  : 1,
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "light_up", 1 );
	set( "build", 11698 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room187",
		"west"      : "/open/clan/ou-cloud-club/room/room143",
	]) );
	set( "long", @LONG
$WHT$基本棍法(stick)                技能效应： 15$NOR$
    $WHT$扑击格斗技巧(unarmed)          技能效应： 15$NOR$
    $WHT$跳跃闪躲之术(dodge)            技能效应： 5$NOR$
    $WHT$基本内功(force)                技能效应： 5$NOR$
此为圣火教的镇教之宝....竟然被小马..
有几件还沾着血迹.....林宏升也许正在头痛着...
LONG);
	setup();
	replace_program(ROOM);
}
