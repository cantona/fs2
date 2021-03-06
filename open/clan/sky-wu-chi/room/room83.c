// Room : /open/clan/sky-wu-chi/room/room83.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "$HIB$雷极殿$NOR$" );
	set( "light_up", 1 );
	set( "long", @LONG
风无定，火无常，雷极殿堂上，挂着风火雷电图，此乃
五行幻化之三行合一，堂堂大殿上，雄壮的气息总是不会缺
少，在雷极殿上，总觉得比一般的殿堂上还要有种不可思议
的力量存在，这里也像其他殿上那像的平佣，但也不失其独
特的特色，暗蓝的一片，别有他一味独特的风格。

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/sky-wu-chi/room/room82.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
