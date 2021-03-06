inherit ROOM;
void create() {
	set( "short", "剑冢" );
	set( "object", ([
		"file8"    : "/daemon/class/bonze/puty_pullium",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount6"  : 1,
		"file3"    : "/open/ping/obj/gold_hand",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/gsword/obj/dragon-sword",
		"amount10" : 1,
		"amount3"  : 1,
		"file4"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount7"  : 1,
		"file5"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"file10"   : "/open/mogi/village/obj/mogi_ring",
		"amount4"  : 1,
	]) );
	set( "owner", "konan" );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room267",
		"east"      : "/open/clan/13_luck/room/room100",
	]) );
	set( "build", 10186 );
	set( "light_up", 1 );
	set( "long", @LONG
这里就是天下名剑最终归位之所，一个白发须须的老者正高坐石碑之
上。于各名剑中，因各剑士本身之修为兴造诣，使各剑灵性迥然不同，只
见中央处摆设一五芒星阵，【[0;1;31m□[1m][1m□[1my[1m□[1mC[0m．[0;1;36m□[1m□[0m】被封印其中，只闻其剑发出阵
阵的嗡鸣声响，其状迥异于其它名剑，赫见四只金龙冲天而起，分立四方
。守护并封印着【[0;1;36m□[1m□[0m】，长久以来使一直由兜山大悟所看守并期望着有天
能驾御此剑行走天下。

LONG);
	setup();
	replace_program(ROOM);
}
