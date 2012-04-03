inherit ROOM;
void create() {
	set( "short", "药丹房" );
	set( "owner", "biwem" );
	set( "object", ([
		"file5"    : "/obj/gift/xisuidan",
		"file8"    : "/obj/gift/hobowdan",
		"file7"    : "/obj/gift/xisuidan",
		"file9"    : "/obj/gift/xiandan",
		"amount8"  : 1,
		"file1"    : "/obj/gift/xiandan",
		"file4"    : "/obj/gift/xiandan",
		"file6"    : "/obj/gift/bingtang",
		"amount6"  : 1,
		"amount1"  : 1,
		"file10"   : "/obj/gift/xiandan",
		"file3"    : "/obj/gift/xiandan",
		"amount9"  : 1,
		"amount5"  : 1,
		"file2"    : "/obj/gift/lingzhi",
		"amount4"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
	]) );
	set( "build", 10830 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room175.c",
		"west"      : "/open/clan/sky-wu-chi/room/room351",
	]) );
	set( "long", @LONG
这是机器人一号ㄉ药丹房,专门收集一些灵丹妙药,
如能家经验ㄉ万年灵芝,如能使人变聪明ㄉ仙丹,
能小补内力ㄉ荷包蛋,能增加灵性ㄉ仙丹.
如能令人亘加强壮ㄉ仙丹.......等等
并希望爱心人士能施舍一些药丹给他
因为它十分倒楣一辈子都没捡到过@@
LONG);
	setup();
	replace_program(ROOM);
}
