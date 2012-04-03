inherit ROOM;
void create() {
	set( "short", "内有恶犬" );
	set( "object", ([
		"file6"    : "/obj/gift/unknowdan",
		"file3"    : "/open/mogi/castle/obj/ninepill",
		"file9"    : "/obj/gift/shenliwan",
		"file5"    : "/obj/gift/xiandan",
		"file2"    : "/open/mogi/castle/obj/sspill",
		"amount4"  : 1,
		"amount6"  : 1,
		"file8"    : "/obj/gift/xiandan",
		"amount7"  : 1,
		"amount3"  : 125,
		"file1"    : "/open/mogi/castle/obj/blood-water",
		"amount5"  : 1,
		"file7"    : "/obj/gift/shenliwan",
		"file4"    : "/obj/gift/lingzhi",
		"amount1"  : 7,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount2"  : 471,
	]) );
	set( "owner", "roar" );
	set( "build", 10427 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room83.c",
		"enter"     : "/open/clan/13_luck/room/room88",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
你已踏进这地方就被这四个字吓到了”[0;1;33m□[1m□[1m□[1m□[1m□[1mc[1m□[1m□[0m”？？心想，自己一
生行走江湖，什么东西没看过，但这”[0;1;33m□[1m□[1m□[1m□[1m□[1mc[1m□[1m□[0m”是指什么呢？自己始终
是满怀疑问，但还是想一看究竟，此时跑出一只不算小的狗，看似即为可
爱，你忍不住去摸她，发现她叫[0;1;5;36m□[1;5mD[1;5m□[1;5mD[0m，原来是屋主故意要吓陌生人的大狗
。
LONG);
	setup();
	replace_program(ROOM);
}
