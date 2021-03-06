inherit ROOM;
void create() {
	set( "short", "小猪头的东厢房" );
	set( "owner", "pighead" );
	set( "object", ([
		"file10"   : "/open/dancer/obj/yuawaist",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file9"    : "/daemon/class/bonze/puty_pullium",
		"amount7"  : 1,
		"file1"    : "/open/mogi/village/obj/mogi_ring",
		"file8"    : "/open/wu/npc/obj/armband",
		"amount9"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"file5"    : "/open/ping/obj/gold_hand",
		"amount8"  : 1,
		"amount10" : 1,
		"amount1"  : 1,
		"file6"    : "/open/killer/obj/k_ring",
		"file4"    : "/open/mon/obj/ghost-cloak",
		"amount4"  : 1,
		"amount6"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
	]) );
	set( "build", 10245 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room127",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    这里是可爱小猪头的东厢房，这边主要是储存战斗用的防具，例
如菩萨袈裟，阳炎臂环，金织手套，等都是在战斗中不可缺乏的防具
，如果没了它们，那是要如何抵抗狂想空间中的变态怪物，所以这里
的存放的防具都是很珍贵的。

LONG);
	setup();
	replace_program(ROOM);
}
