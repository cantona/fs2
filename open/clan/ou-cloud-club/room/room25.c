// Room : /open/clan/ou-cloud-club/room/room25.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "河西走廊" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
往西过去就是一望无际的大沙漠了,传闻进入这个大沙漠的
人很少能够安然返回的,大多在烈日下缺乏水分而遭烈阳活活枯
晒致死,因此在进入前可要先准备好足够的水和粮食喔~~如果都
还没准备好的话还是往东回去美丽的故乡吧.

LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room24",
  "west" : "/open/clan/ou-cloud-club/room/room26.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
