// Room : /open/clan/ou-cloud-club/room/room112.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
你走在水中几处较为高耸的土丘上,在这里你发现了不少
青蛙跳来跳去,看来在这邪恶的城堡之内,还是会有一些比较
正常的生物的,然而即便如此,这些两栖类的小生命却似乎对
你存着些许敌意,或许是你无形中打扰了他们平静的生活吧!
LONG);
	set( "cmkroom", 1 );
	set( "short", "$HIR$恶魔城$HIW$地下水脉$NOR$" );
	set( "object", ([
		"file10"   : "/open/tendo/obj/chaosbelt",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file5"    : "/open/mon/obj/ghost-legging",
		"file8"    : "/open/mogi/castle/obj/lochagem",
		"file7"    : "/open/wu/npc/obj/armband",
		"amount6"  : 1,
		"file6"    : "/daemon/class/blademan/obj/shield",
		"amount8"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"file9"    : "/daemon/class/fighter/figring",
		"file1"    : "/open/gsword/obj/may_ring",
		"file2"    : "/open/sky/obj/lucky_grasslink",
		"amount7"  : 1,
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "owner", "freaky" );
	set( "light_up", 1 );
	set( "build", 10158 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room127.c",
  "west" : "/open/clan/ou-cloud-club/room/room111",
]) );
	set( "clan_room", "傲云山庄" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
