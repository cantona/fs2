// Room : /open/clan/sky-wu-chi/room/room61.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
厨房里乱成一团，十几个人追着一条猪跑，而这里的主厨莫古里在一旁监督着
其他厨师，一边调教新厨师一边发明新的菜色，并将深宫奇毒，五毒，火玫瑰毒跟
一刻香分别做出一道道美味的料理，并主张用爱与和平来做料理。
LONG);
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "short", "Rue专用厨房" );
	set( "owner", "rue" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room308",
	]) );
	set( "no_transmit", 1 );
	set( "clan_room", "天道无极" );
	set( "cmkroom", 1 );
	setup();

	}
