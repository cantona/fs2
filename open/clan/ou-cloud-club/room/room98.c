// Room : /open/clan/ou-cloud-club/room/room98.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "傲云山庄" );
	set( "short", "$HIW$恶魔城$HIR$地下水脉$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file7"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"file8"    : "/open/mon/obj/ghost-legging",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10028 );
	set( "light_up", 1 );
	set( "long", @LONG
这里有几处突起的地面坐落在水中,看来踩着这些地方也能
前进,慢慢走吧,由于溼度的关系,地面上可是长满了青苔呢.可
小心点不要掉下去了呢,传说恶魔城存在着能在水里吐发火焰
的怪鱼,若掉下去真的被逮着了那可就不好玩喽~~~

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room99.c",
  "west" : "/open/clan/ou-cloud-club/room/room44",
]) );
	set( "no_transmit", 1 );
	setup();

	}
