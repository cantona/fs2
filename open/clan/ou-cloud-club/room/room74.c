// Room : /open/clan/ou-cloud-club/room/room74.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
你费尽了千辛万苦，终于来到这里，正当你在闭息养神之时，你赫然　　
发现，往上的道路更是崎岖弯折，而且似乎暗藏有五行八卦之阵，令眼前　　
的路更加诡谲异诞，步步难行，接下来的路就得看你自己的造化了．．．　　
　　　　　
LONG);
	set( "short", "$HIY$天山$NOR$山腰" );
	set( "clan_room", "傲云山庄" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "up" : "/open/clan/ou-cloud-club/room/room75.c",
  "down" : "/open/clan/ou-cloud-club/room/room73",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}
