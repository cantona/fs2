inherit ROOM;
void create() {
	set( "short", "$HIC$莱雅$NOR$的$HIY$家$NOR$" );
	set( "object", ([
		"file5"    : "/open/ping/questsfan/obj/diamond_legging",
		"amount6"  : 1,
		"file6"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"file2"    : "/open/ping/questsfan/obj/diamond_hands",
		"file3"    : "/open/ping/questsfan/obj/diamond_armor",
		"file4"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount3"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/ping/questsfan/obj/diamond_boots",
		"file1"    : "/open/ping/questsfan/obj/diamond_belt",
		"amount1"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/ping/obj/cloud_fan",
		"file7"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount7"  : 1,
		"amount8"  : 1,
		"amount2"  : 1,
		"amount9"  : 1,
	]) );
	set( "build", 10556 );
	set( "owner", "laiyia" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room75",
	]) );
	set( "long", @LONG

这是$HIC$莱雅$NOR$的$HIR$爱$NOR$的$HIY$小窝$NOR$，$HIC$莱雅$NOR$常常一个人在这里$HIW$读书$NOR$和$HIM$练功$NOR$。
这间屋子虽然并不华丽，也没有$HIW$贵族$NOR$般的享受，却给了人们
一种$HIR$故$HIG$乡$HIY$温$HIC$馨$NOR$的感觉，只要待在这里，就会觉得人间的$HIC$温暖$NOR$
随手可得。


LONG);
	setup();
	replace_program(ROOM);
}
