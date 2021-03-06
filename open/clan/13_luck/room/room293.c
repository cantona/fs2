inherit ROOM;
void create() {
	set( "short", "小猪头的南厢房" );
	set( "owner", "pighead" );
	set( "object", ([
		"amount7"  : 1,
		"amount1"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"file1"    : "/open/capital/obj/blade2",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/sky/obj11/yellow-crystal",
		"file3"    : "/open/sky/obj11/yellow-crystal",
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/sky/obj11/yellow-crystal",
		"file6"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/gblade/obj/sa-head",
		"amount8"  : 1,
	]) );
	set( "build", 10152 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room127",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    这里是可爱小猪头的东厢房，这边主要是各式各样的道具，例如
得来不易的仙丹，魔龙鳞，千坟之水等都是在战斗中不可缺乏的道具
，如果没了它们，那是要如何抵抗狂想空间中的变态怪物，所以这里
的存放的道具都是很珍贵的。

LONG);
	setup();
	replace_program(ROOM);
}
