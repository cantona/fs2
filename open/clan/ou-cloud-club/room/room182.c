inherit ROOM;
void create() {
	set( "short", "小凉被" );
	set( "object", ([
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 1,
		"amount4"  : 2,
		"amount5"  : 1,
		"amount6"  : 1,
		"amount1"  : 9,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"file7"    : "/open/scholar/obj/s_hands",
		"file9"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
		"amount8"  : 1,
		"file5"    : "/open/gblade/obj/sa-head",
		"file6"    : "/open/capital/guard/gring",
		"file8"    : "/open/prayer/obj/boris-cloth",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount3"  : 1,
		"file3"    : "/open/mogi/castle/obj/sspill",
		"file10"   : "/open/ping/obj/chilin_legging",
		"amount9"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10011 );
	set( "owner", "super" );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room129",
	]) );
	set( "long", @LONG
这是凉储放冬天衣物的储藏室，一叠叠的厚重衣物堆满了半个房间
看来凉是个很念旧的人，舍不得将陪伴多年的衣物丢掉，
房间的最深处有个尘封的镶金箱子，看来年代相当久远，
墙壁上却挂了一把龙骨之星，以及全套的防具，
原来这也是凉放装备的密秘房间，难怪不想让人进来
大概也是怕宵小窃贼吧...
LONG);
	setup();
	replace_program(ROOM);
}
