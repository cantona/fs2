// Room : /open/clan/ou-cloud-club/room/room58.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$时计□廊$NOR$" );
	set( "build", 10001 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room59.c",
  "west" : "/open/clan/ou-cloud-club/room/room57",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
所有时钟同时发出滴.答.滴.答的声音,不过即使这些时钟雕饰
再怎精美,一直处在这种规律的声音之中,总会不知不觉就让所有的
行为随着滴答声起舞,终致狂舞不休而死,这可是会令人发疯的,还
是赶快加紧脚步,离开这个魔因穿脑的诡异空间吧!!

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
