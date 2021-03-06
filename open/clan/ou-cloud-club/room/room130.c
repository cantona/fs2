// Room : /open/clan/ou-cloud-club/room/room130.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "傲云山庄" );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/ou-cloud-club/room/room196",
		"west"      : "/open/clan/ou-cloud-club/room/room14",
]) );
	set( "short", "$HIY$无$HIC$情$HIR$一生$NOR$" );
	set( "object", ([
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file6"    : "/open/ping/obj/ring-2",
		"file9"    : "/open/dancer/obj/maple_ribbon",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-claw",
		"file10"   : "/open/dancer/obj/yuawaist",
		"amount6"  : 1,
		"amount4"  : 292,
		"amount10" : 1,
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"amount3"  : 25,
		"file1"    : "/open/fire-hole/obj/w-pill",
		"amount5"  : 1,
		"file7"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 76,
		"amount8"  : 1,
		"amount9"  : 1,
		"amount2"  : 1,
	]) );
	set( "owner", "flyindance" );
	set( "build", 10387 );
	set( "long", @LONG
剑君十二恨的老大〔无情〕的住所，传闻此人
是帮主在求武时的大哥，武学似乎还在帮主剑君之
上，但却隐居于此，而此房装饰更为简朴，只有一
张床可以用来睡觉跟几只拿来练武用的木人伫立着
而已．墙角道是摆着不少武具．

LONG);
	set( "cmkroom", 1 );
	setup();

	}
