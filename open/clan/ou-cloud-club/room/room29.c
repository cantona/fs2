// Room : /open/clan/ou-cloud-club/room/room29.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$YEL$丝绸之路$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
大大小小的沙丘横列在眼前,不过你依稀可以看到西边有一座
城市,揉了揉眼,难道是幻觉吗,这就是海市蜃楼吗,多想无用,自古
以来不知多少企图横越征服这大沙漠的人被这幻象所迷惑,而终致
心神俱疲,死于荒漠,嗯...还是加紧脚步赶路吧!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room27",
  "west" : "/open/clan/ou-cloud-club/room/room30.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
