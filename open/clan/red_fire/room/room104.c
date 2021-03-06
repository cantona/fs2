inherit ROOM;
void create() {
	set( "short", "$HIR$忘$NOR$$HIG$忧$NOR$$HIC$雅$NOR$$HIM$筑$NOR$$HIY$大厅$NOR$" );
	set( "owner", "borchin" );
	set( "object", ([
		"file1"    : "/open/gsword/npc2/sadsword",
		"file3"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"file6"    : "/open/capital/obj/4-4",
		"amount6"  : 1,
		"file2"    : "/open/gsword/obj1/karmband",
		"amount3"  : 1,
		"amount10" : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file5"    : "/open/gsword/obj1/ring",
		"file8"    : "/open/capital/guard/gring",
		"amount9"  : 1,
		"amount8"  : 1,
		"file9"    : "/open/gsword/obj1/khelmet",
		"amount5"  : 1,
		"file10"   : "/open/main/obj/m_cloak",
		"file7"    : "/open/gsword/obj1/bloodsword",
		"amount4"  : 1,
		"file4"    : "/open/main/obj/bird_legging",
	]) );
	set( "build", 10013 );
	set( "exits", ([
		"out"       : "/open/clan/red_fire/room/room103.c",
		"south"     : "/open/clan/red_fire/room/room15",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

进到里面，一看屋里的桌椅摆饰竟全是以$HIG$青竹$NOR$制成的。此
等情景只能用一句$YEL$古语$NOR$来形容

     $HIC$可使食无肉    不可使居无竹

     无肉令人瘦    无竹令人俗$NOR$

你不相信，世间竟有这等清闲如鹤的生活环境。刹时心中
有股想长居于此的唸头产生。


LONG);
	setup();
	replace_program(ROOM);
}
