// Room : /open/clan/ou-cloud-club/room/room102.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
你一口气潜了大概十数公尺深,居然在一面墙上发现一道老
旧的木门,这道门的存在着实令人费解,难道在这片水域之下竟
有着具思考力的生命居住着吗??然而门后传来的压迫感却又令
人感到阵阵的不安,或许在破门的同时,就是生命失去的瞬间..
LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "傲云山庄" );
	set( "short", "$HIW$恶魔城$HIR$地下水脉$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room103",
	]) );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	setup();

	}
