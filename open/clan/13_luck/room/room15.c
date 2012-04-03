inherit ROOM;
void create() {
	set( "short", "朱雀堂口" );
	set( "owner", "aman" );
	set( "object", ([
		"file6"    : "/daemon/class/bonze/puty_pullium",
		"amount2"  : 9,
		"amount7"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"amount9"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/fire-hole/obj/r-pill",
		"amount10" : 1,
		"amount4"  : 2,
		"file5"    : "/open/ping/obj/ring-2",
		"amount6"  : 1,
		"file3"    : "/open/snow/obj/figring",
		"file4"    : "/open/mogi/castle/obj/sspill",
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
	]) );
	set( "build", 10377 );
	set( "exits", ([
		"enter"     : "/open/clan/13_luck/room/room14",
		"west"      : "/open/clan/13_luck/room/room16.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

    终于来到朱雀堂的外面，在门边的石柱雕着凤凰，凤凰身上披着红
衫，听说此红衫是花了数以百年的时间，请十三吉祥的画工师傅一笔一
画的慢慢加上的，使整个凤凰有如浴火重生永不消失，这只凤凰也是十
三吉祥的精神象征。

LONG);
	setup();
	replace_program(ROOM);
}
