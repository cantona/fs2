// Room : /open/clan/sky-wu-chi/room/room107.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", " 碎石小路 4" );
	set( "build", 1600 );
	set( "light_up", 1 );
	set( "long", @LONG
西方是众所皆知的天极殿，东方则是雄伟豪放的镇
天东门，往天极殿的路程虽不长，但却也是一个鸟鸣常
叫的美好地方。路旁的树丛有着许许多多的可爱动物，
活泼的向你讨食物呢！看来并不只有天道无极的帮众们
喜爱这里了。

LONG);
	set( "clan_room", "天道无极" );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room105.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
