// Room : /open/clan/ou-cloud-club/room/room62.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$时计□廊$NOR$" );
	set( "build", 3058 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "westdown" : "/open/clan/ou-cloud-club/room/room57",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
你攀登上来之后,发现这里只是个空旷的房间,角落散布着
几个空无一物的宝箱,看来是来晚喽, 但也因这次的落空使你
意识到,在这作城里调查的人类,应该不仅你一人,这位抢在前
头开得宝箱的人,其动机为何,值得思考,或许能成为合作的伙
伴吧!!
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
