// Room : /open/clan/ou-cloud-club/room/room26.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$YEL$丝绸之路$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
黄沙滚滚,烈日当空,你现在正处在一片金黄色的大沙漠之中,
依稀可以看到的一条小路呈东西走向,这就是我国与西域各国通商
来往的必经道路,看来自唐僧之后已很久没有人走过了,想到千百年
前高人所经之路,竟然就在你脚下,不禁豪气陡生.
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room25",
  "southwest" : "/open/clan/ou-cloud-club/room/room27.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
