inherit ROOM;
void create() {
	set( "short", "药丹房二" );
	set( "owner", "biwem" );
	set( "object", ([
		"file2"    : "/obj/gift/xiandan",
		"amount5"  : 1,
		"file5"    : "/obj/gift/lingzhi",
		"amount2"  : 1,
		"amount8"  : 1,
		"file1"    : "/obj/gift/shenliwan",
		"file7"    : "/obj/gift/lingzhi",
		"amount10" : 1,
		"amount7"  : 1,
		"file6"    : "/obj/gift/lingzhi",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/obj/gift/unknowdan",
		"file3"    : "/obj/gift/hobowdan",
		"file9"    : "/obj/gift/xiandan",
		"amount9"  : 1,
		"file10"   : "/obj/gift/xisuidan",
		"amount4"  : 1,
		"file8"    : "/obj/gift/lingzhi",
		"amount1"  : 1,
	]) );
	set( "build", 10324 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room176",
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
