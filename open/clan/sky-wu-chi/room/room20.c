// Room : /open/clan/sky-wu-chi/room/room20.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room9.c",
]) );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG

这里是攘袂生的小窝，和对面的我想上好像曾有何不可告人的
关系，做任何事都要跟对面的成对立，不禁让人想起以前电视
所演的铁师玉玲珑的戏。攘袂生在我想上武道馆要落成前也开始
着手一间气功馆在离南边不远处了，世界真是小，两个奇怪的
人也会在同一个地方生存。

LONG);
	set( "short", "【攘袂生的房间】" );
	set( "build", 2728 );
	set( "owner", "prople" );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
