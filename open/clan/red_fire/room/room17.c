// Room : /open/clan/red_fire/room/room17.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "会议厅" );
	set( "light_up", 1 );
	set( "long", @LONG

厅中的摆设非常的富丽堂皇.........这里
一般人也能进来.....帮中的爱玫教主会不定时
召集帮众在此开会.....希望召开帮中大会时
所有的帮众想要参与的.......都能一并前来讨论讨论
厅中的摆设非常的富丽堂皇.........这里
一般人也能进来.....帮中的爱玫教主会不定时
召集帮众在此开会.....希望召开帮中大会时
所有的帮众想要参与的.......都能一并前来讨论讨论



LONG);
	set( "exits", ([ /* sizeof() == 3 */
		"out"       : "/open/clan/red_fire/room/hall.c",
		"east"      : "/open/clan/red_fire/room/room18.c",
		"west"      : "/open/clan/red_fire/room/room19.c",
]) );
	set( "no_clean_up", 0 );
	setup();

	}
