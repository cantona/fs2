inherit ROOM;
void create() {
	set( "short", "$HIY$※$HIC$漂漂$HIM$小雨灵$HIG$的$HIR$闺房$HIY$※$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/daemon/class/fighter/figring",
		"amount6"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/dancer/obj/maple_ribbon",
		"amount4"  : 1,
		"file2"    : "/open/mogi/castle/obj/lochagem",
		"file8"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
		"amount5"  : 1,
		"file3"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-helmet",
	]) );
	set( "build", 10138 );
	set( "owner", "corin" );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room76.c",
		"south"     : "/open/clan/red_fire/room/room137.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

标准的$HIC$大$HIG$家$HIM$闺$HIY$秀$NOR$房间，有$HIY$梳妆台$NOR$、$HIR$女红台$NOR$，$HIC$床上$NOR$有锦被绣枕。墙上挂有一
幅$HIM$雨灵$NOR$的画像，展现出她爱跳舞的一面，舞姿美轮美奂。旁边放有一个大
箱子，打开一看都是$HIY$舞装$NOR$，还有可供挥舞的$HIC$彩$HIM$带$NOR$，可见$HIM$雨灵$NOR$嗜舞如命的个
性。$HIY$梳妆台$NOR$上摆满了$HIC$胭脂$NOR$与$HIY$腮红$NOR$等化妆用品，$HIM$雨灵$NOR$每天都打扮的漂漂亮亮
的出门。贤淑的$HIM$雨灵$NOR$女红方面也是顶瓜瓜，$HIR$女红台$NOR$上未完成的绣帕，上面
栩栩如生的$HIM$凤$HIY$翔$HIC$图$NOR$，直教人啧啧称奇。


LONG);
	setup();
	replace_program(ROOM);
}
