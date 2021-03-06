inherit ROOM;
void create() {
	set( "short", "冰雪神戒室" );
	set( "object", ([
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount4"  : 1,
		"amount7"  : 1,
		"amount8"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount2"  : 1,
		"file7"    : "/open/ping/obj/gold_hand",
		"amount10" : 1,
		"amount1"  : 1,
		"file4"    : "/open/ping/obj/ring-2",
		"file3"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount6"  : 1,
		"amount5"  : 1,
		"file9"    : "/daemon/class/blademan/obj/shield",
		"file1"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
	]) );
	set( "owner", "force" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room278",
		"south"     : "/open/clan/13_luck/room/room300.c",
	]) );
	set( "build", 10224 );
	set( "light_up", 1 );
	set( "long", @LONG

    传说中会把人冰住的神戒，可以让人短暂时间无法移动，此戒乃在
平南税官的手中，常常会有人为了神戒，银行少一半的钱也无所谓，为
了是这一只的神戒，在以后打怪物更是无往不利，使玩家信心大增，以
后的一代大侠愿望更是信心满满。

LONG);
	setup();
	replace_program(ROOM);
}
