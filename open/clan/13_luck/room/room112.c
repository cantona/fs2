inherit ROOM;
void create() {
	set( "short", "EMC吃饭会议室" );
	set( "owner", "wyld" );
	set( "object", ([
		"file3"    : "/open/gsword/obj/yuskirt",
		"amount6"  : 1,
		"file2"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
		"file7"    : "/open/doctor/obj/needle9",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/killer/outsea/dstone",
		"file5"    : "/open/gsword/obj/ring-1",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/mogi/village/obj/mogi_ring",
	]) );
	set( "build", 10191 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room104",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
里面有着营长经理老大买的微波炉,抽屉会放些晚上加班
吃的饼干跟泡面..还有每天煮的咖啡都会在里面
每天中午不是出去吃饭,就是在这边吃着便当..
牛肉面,或是海鲜锅..不然有时也会买些好料放在这...CCC
这里虽然麻雀虽小..但是五脏可是据全的..
LONG);
	setup();
	replace_program(ROOM);
}
