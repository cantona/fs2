inherit ROOM;
void create() {
	set( "short", "龙蜒神弓室" );
	set( "owner", "szn" );
	set( "object", ([
		"file6"    : "/open/scholar/obj/icefan",
		"amount5"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file8"    : "/open/ping/obj/poison_pill",
		"file7"    : "/open/mogi/village/obj/mogi_ring",
		"file4"    : "/open/gsword/obj/yuskirt",
		"amount3"  : 1,
		"amount8"  : 15,
		"amount6"  : 1,
		"file1"    : "/open/gsword/obj/dragon-sword",
		"file5"    : "/daemon/class/blademan/obj/ublade",
		"amount4"  : 1,
		"file3"    : "/open/wind-rain/obj/bird-blade",
		"amount1"  : 1,
		"amount9"  : 1,
		"amount10" : 1,
		"file10"   : "/open/tendo/obj/luboot",
		"file9"    : "/daemon/class/blademan/obj/six-neck",
		"file2"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 10920 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room274",
	]) );
	set( "long", @LONG

    名震江湖神射手李广，手持龙蜒神弓败尽天下英雄，与他作战就跟
死神打交道一般，除了一身射功之后，成名招式十万火击更是暴力，万
箭齐发够是没医生在就准备受死了，所以跟他为敌也是要速战速决，必
免长久，否则攻击不准伤害减半就吃不完兜着走。

LONG);
	setup();
	replace_program(ROOM);
}
