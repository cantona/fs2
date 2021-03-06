inherit ROOM;
void create() {
	set( "short", "$HIM$牡丹$HIC$亭$NOR$" );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file8"    : "/daemon/class/blademan/obj/shield",
		"amount2"  : 1,
		"file6"    : "/open/tendo/obj/chaosbelt",
		"amount1"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"amount7"  : 1,
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/killer/obj/k_ring",
		"amount9"  : 1,
	]) );
	set( "owner", "sillyboy" );
	set( "item_desc", ([
		"牡丹" : @ITEM
鲜艳炫丽的大红花朵，让你看的目不暇给。
ITEM,
	]) );
	set( "build", 10049 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room75.c",
	]) );
	set( "long", @LONG
这里是$HIR$红莲$NOR$里数一数二的用$HIY$毒$NOR$高手「$HIY$毒$HIM$牡丹$NOR$”的窝居，推门进入
扑面而来的是浓郁$HIC$馨香$NOR$，放眼瞧去尽是争丽斗艳，令人赏玩不已的$HIM$牡
丹$NOR$，望着眼前万紫千红的大朵花儿，房内摆设的却只有朴素的$HIW$床铺$NOR$与
$YEL$铜镜$NOR$，让你感受到主人孤芳自赏的高傲与脱俗。


LONG);
	setup();
	replace_program(ROOM);
}
