inherit ROOM;
void create() {
	set( "short", "药房" );
	set( "owner", "konan" );
	set( "object", ([
		"amount9"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file3"    : "/obj/gift/bingtang",
		"amount8"  : 1,
		"file8"    : "/daemon/class/fighter/armband",
		"file10"   : "/obj/gift/hobowdan",
		"amount10" : 1,
		"file5"    : "/obj/gift/lingzhi",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"file7"    : "/open/mogi/castle/obj/lochagem",
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount2"  : 1,
		"file6"    : "/obj/gift/unknowdan",
		"amount7"  : 1,
	]) );
	set( "build", 10521 );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room236.c",
		"west"      : "/open/clan/13_luck/room/room283",
	]) );
	set( "long", @LONG

    进到此房中，地上尽是眷罐罐，其中不乏一些丹药、中药、奇花
异草。柜中也都是各种医药书籍参考资料，卓上摆放着研磨工具及各
式的刀具。如果误食药物会有严重后遗症的。

不然这房间的主人不会帮你医治 切记

LONG);
	setup();
	replace_program(ROOM);
}
