inherit ROOM;
void create() {
	set( "short", "粉红水晶结界" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"file3"    : "/open/killer/obj/kill_yar_head",
		"amount2"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"file8"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount3"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount10" : 1,
		"file9"    : "/open/gblade/obj/sa-head",
		"amount6"  : 1,
		"amount1"  : 11,
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"amount9"  : 1,
	]) );
	set( "owner", "sski" );
	set( "light_up", 1 );
	set( "build", 12000 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room50.c",
		"west"      : "/open/clan/sky-wu-chi/room/room147.c",
		"south"     : "/open/clan/sky-wu-chi/room/room166.c",
		"east"      : "/open/clan/sky-wu-chi/room/room150.c",
	]) );
        set( "long", @LONG此地初建, 空无一物。
你走进来这里,发现你的眼前突然有一股光照射着你这股光随着
你的越走越近,也越来越强的照耀着....突然间你发现了你的头顶出
现一颗有如太阳般大的水晶正照射着你...突然间你发现你在粉红的
光线的照射之下,你的体力渐渐被无形的力量来把你给抽离你想要逃
但却逃不出他对你的吞噬
LONG);
        setup();
        replace_program(ROOM);
}

