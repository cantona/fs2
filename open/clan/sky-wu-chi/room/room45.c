// Room : /open/clan/sky-wu-chi/room/room45.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
     你进入了小鬼头的领域，四周充满了充沛的气劲，让你想起了
 圣火教绝世心法「浑天心法”。一切让人觉得心情非常的愉快，让
 你浑然不知道自已的处境，以致你极度的放松，然而你的四周却充
 满了无数的危机。突然四周的气息，慢慢的形成一种压力，而这压
 力来自门口进来的那个人，怨世天魔小鬼头。
LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "short", "万鬼朝宗" );
	set( "owner", "ckkker" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room10.c",
	]) );
	set( "object", ([
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"amount10" : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10114 );
	set( "clan_room", "天道无极" );
	setup();

	}
