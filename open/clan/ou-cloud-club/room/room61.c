// Room : /open/clan/ou-cloud-club/room/room61.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$时计□廊$NOR$" );
	set( "build", 2250 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "westup" : "/open/clan/ou-cloud-club/room/room64.c",
  "eastdown" : "/open/clan/ou-cloud-club/room/room57",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
你攀登上来之后,前面是一连串陡峭的的斜坡,斜坡两侧竟
各站立着一个手持回旋镖的骷髅头,真是令人触目心惊,而当它
们见到你之后,原本僵凝住的关节突然动了起来,握着回旋镖的
手高高举起,眼看着就要掷出,将你当场击杀,战或逃...?

LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
