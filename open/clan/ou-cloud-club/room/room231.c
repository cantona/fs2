inherit ROOM;
void create() {
	set( "short", "$HIY$聚宝盆$NOR$" );
	set( "object", ([
		"amount1"  : 311,
		"file4"    : "/obj/gift/xiandan",
		"amount5"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/ping/obj/poison_pill",
		"amount6"  : 1,
		"amount7"  : 1,
		"file8"    : "/obj/gift/xisuidan",
		"file7"    : "/obj/gift/xisuidan",
		"file2"    : "/obj/gift/shenliwan",
		"amount2"  : 1,
		"amount3"  : 1,
		"file10"   : "/obj/gift/shenliwan",
		"amount10" : 1,
		"amount8"  : 1,
		"file6"    : "/obj/gift/shenliwan",
		"file3"    : "/obj/gift/xisuidan",
		"amount9"  : 1,
		"file9"    : "/obj/gift/xisuidan",
		"file5"    : "/obj/gift/unknowdan",
	]) );
	set( "owner", "enter" );
	set( "build", 10076 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/ou-cloud-club/room/room101.c",
	]) );
	set( "long", @LONG
传说中的聚宝盆，不知为何可以进到其中，传闻聚宝盆中
装满着各式各样的宝物，且在此盆中有取之不尽的财富与宝物
，可是进到盆内却也只是空空的，不见任何东西，就连一私私
尘染也不得见了，更别说会有宝物与财富了呢？

LONG);
	setup();
	replace_program(ROOM);
}
