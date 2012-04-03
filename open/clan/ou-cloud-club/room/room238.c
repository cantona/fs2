inherit ROOM;
void create() {
	set( "short", "$HIB$恶霸$HIG$拳$HIW$场$NOR$" );
	set( "object", ([
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount7"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
	]) );
	set( "build", 10160 );
	set( "light_up", 1 );
	set( "owner", "nickm" );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room195",
	]) );
	set( "long", @LONG

$HIC$□恶霸掌

$HIW$    此掌由不详的$CYN$武林高人$HIW$所创，所使用的招式颇为阴险，常常夹带奇怪的功用，如：
$MAG$困住敌手，$BLU$吸取敌人功力，$RED$疯狂连续攻击$HIW$等，可以说是相当恶毒的掌法，也颇为难学。
$HIW$此种掌法必须要有相当的$HIR$杀气$HIW$才能修练，而其许多的特殊功用必须要辅以$HIC$恶化魔功$HIW$方能
$HIW$见效。$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
