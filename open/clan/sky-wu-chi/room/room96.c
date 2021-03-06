inherit ROOM;
void create() {
	set( "short", "$HIW$武圣居$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount3"  : 1,
		"amount9"  : 1,
		"file4"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 1,
		"file5"    : "/open/capital/obj/king-boots",
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 1,
		"amount4"  : 19,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount1"  : 1,
		"file2"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file6"    : "/open/capital/guard/gring",
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount10" : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"file1"    : "/obj/gift/hobowdan",
		"amount7"  : 1,
	]) );
	set( "build", 10320 );
	set( "owner", "herozero" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room150.c",
		"south"     : "/open/clan/sky-wu-chi/room/room97.c",
		"east"      : "/open/clan/sky-wu-chi/room/room148.c",
		"west"      : "/open/clan/sky-wu-chi/room/room98",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
唉呀，运气真好，不小心掉到山涯下却找到了传说中的‘武圣居’
小小的武圣居前有个大大的广场，广场上都是练武用的木人，木桩，果
然，即使是武圣，如果不勤于练武的话也是不行的，想到这，你不禁问
自己，什么时候才能达到武圣的境界呢??
LONG);
	setup();
	replace_program(ROOM);
}
