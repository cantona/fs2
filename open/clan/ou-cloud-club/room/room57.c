// Room : /open/clan/ou-cloud-club/room/room57.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$时计□廊$NOR$" );
	set( "build", 10545 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 5 */
  "eastup" : "/open/clan/ou-cloud-club/room/room62.c",
  "east" : "/open/clan/ou-cloud-club/room/room58.c",
  "west" : "/open/clan/ou-cloud-club/room/room56",
  "westup" : "/open/clan/ou-cloud-club/room/room61.c",
  "up" : "/open/clan/ou-cloud-club/room/room63.c",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
面前突然出现了一座大锺,你感到脚底下的石板似乎不甚
平稳,再望向天花板,才发现上面有着三条可以徒手攀登而上
的狭小隧道,中间的一条笔直向上而去,似乎是个天井,西边
的一条则有时开有时关,至于东边的,有时乍看之下是开的,
一回神之后却是关的,足见设计的人一定颇费心思在机关控制
之上.
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
