// Room : /open/clan/ou-cloud-club/room/room75.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
这里就是传闻中的四极天山径，若没有相当足够的奇门　　
遁甲当基础，要想走过此处只怕会陷入万劫不复的地步，只　　
见周围有四个方向，个个似是而非，处处暗藏杀机，偏偏只　　
有一个才是正确的道路，叫人难以抉择．．．　　
　　
LONG);
	set( "short", "$HIR$四极$HIY$天山$NOR$径" );
	set( "clan_room", "傲云山庄" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 5 */
  "southup" : "/open/clan/ou-cloud-club/room/room114.c",
  "westup" : "/open/clan/ou-cloud-club/room/room76.c",
  "eastup" : "/open/clan/ou-cloud-club/room/room113.c",
  "down" : "/open/clan/ou-cloud-club/room/room74",
  "northup" : "/open/clan/ou-cloud-club/room/room86.c",
]) );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	setup();

	}
