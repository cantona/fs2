// Room : /open/clan/sky-wu-chi/room/room12.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "走 廊 5" );
	set( "cmkroom", 1 );
	set( "long", @LONG
回家的路总是慢长的，今天的收获真是相当
的多，不但看到了许多的动物，回程时还有马疑
慈表演孙叔叔说：乖孩子，夜深了，快回家吧。
也看到了「零”所带来精采的对抗冰判官密技，
就是全部都回答零，包你睡到饱。真是不虚此行
啊。
LONG);
	set( "exits", ([ /* sizeof() == 5 */
		"east"      : "/open/clan/sky-wu-chi/room/room23.c",
		"south"     : "/open/clan/sky-wu-chi/room/room11.c",
]) );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	set( "clan_room", "天道无极" );
	set( "light_up", 1 );
	setup();

	}
