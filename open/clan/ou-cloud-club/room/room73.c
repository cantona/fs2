// Room : /open/clan/ou-cloud-club/room/room73.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
一条缠如盘蛇的道路，此去延绵不绝，两侧仅足　　　　　
一尺宽，长不见底，两旁毫无着力点，故此处易守难　　　　　
攻，进退两难，若在此处遭到攻击，必前面忌虎，难　　　　　
以招架．．．．　　　　　
　　　　　
LONG);
	set( "short", "$HIY$天山$NOR$径" );
	set( "clan_room", "傲云山庄" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "up" : "/open/clan/ou-cloud-club/room/room74.c",
  "down" : "/open/clan/ou-cloud-club/room/room72",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}
