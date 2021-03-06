inherit ROOM;
void create() {
	set( "short", "修身养性" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount10" : 1,
		"amount2"  : 1,
		"file10"   : "/obj/gift/bingtang",
		"amount3"  : 535,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount8"  : 1,
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file6"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file9"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file3"    : "/open/fire-hole/obj/g-pill",
		"file2"    : "/open/capital/obj/blade2",
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount1"  : 18,
		"file1"    : "/open/fire-hole/obj/w-pill",
	]) );
	set( "build", 10573 );
	set( "light_up", 1 );
	set( "owner", "icpms" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room211",
	]) );
	set( "long", @LONG


身是菩提树  心是明镜台  时时勤拂拭  勿使惹尘埃

菩提本无树  明镜亦非台  本来无一物  何处惹尘埃

人执我空  有心不动  傲看滚滚尘浪

众醉独醒  无待清明  笑对芸芸众生

云开碧落松千尺  截断红尘水一溪

风吹不动天边月  云压难催涧底松

LONG);
	setup();
	replace_program(ROOM);
}
