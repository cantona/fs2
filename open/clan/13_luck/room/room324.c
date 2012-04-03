inherit ROOM;
void create() {
	set( "short", "锁龙窟" );
	set( "object", ([
		"amount4"  : 1,
		"file1"    : "/open/capital/guard/gring",
		"amount10" : 1,
		"amount6"  : 1,
		"file8"    : "/open/magic-manor/obj/lin-cloud-fan",
		"amount5"  : 1,
		"amount7"  : 1,
		"file5"    : "/obj/gift/lingzhi",
		"file7"    : "/open/mogi/castle/obj/leave",
		"file9"    : "/obj/gift/bingtang",
		"amount1"  : 1,
		"amount3"  : 44,
		"amount9"  : 1,
		"amount2"  : 1,
		"file10"   : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/open/ping/obj/poison_pill",
		"amount8"  : 1,
		"file4"    : "/obj/gift/bingtang",
		"file6"    : "/open/capital/room/king/obj/dagger1",
		"file2"    : "/obj/gift/xiandan",
	]) );
	set( "owner", "fighter" );
	set( "build", 10395 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room276",
	]) );
	set( "long", @LONG

    一阵阴森的感觉袭来，踏入此洞之中，心里感到阵阵的不安，一
声声的铁链重击声不绝于耳，不时也传出阵阵怒吼声，被困于魔界禁
地[35m地底牢笼[0m中的[0;1;33m□[1m□[1m□[1m□[1m□[1m□[1m□[1ms[0m(Goldendragon)，被[0;1;31m□[1m□[1m□[1m□[1m□[1ms[1m□[1mi[1;36m□[1mi[1m□[1m□[1;33m□[1m□[1m□[1m□[1;31m□[1mj[0m重
创后，便一直被禁锢此处，无法在危害世人。


LONG);
	setup();
	replace_program(ROOM);
}
