// Room : /open/clan/ou-cloud-club/room/room17.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG

紫云蝶的房间，房内摆着十二把剑，定睛一看不正是剑君
十二恨初出江湖的佩剑吗？原来已经埋剑于此受有剑魔之称的
紫云蝶所保护，听闻此人极崇拜剑君，所以自愿代为保管．
近年来剑魔紫云蝶已经逐渐退出江湖，为的是进一步提升本身
之剑术达到手中无剑，心中有剑之剑道最高境界。

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "傲云山庄" );
	set( "cmkroom", 1 );
	set( "short", "$HIY$魔剑冢$NOR$" );
	set( "owner", "mekyn" );
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/ou-cloud-club/room/room199",
		"east"      : "/open/clan/ou-cloud-club/room/room15.c",
]) );
	set( "light_up", 1 );
	setup();

	}
