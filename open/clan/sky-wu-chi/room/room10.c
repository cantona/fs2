// Room : /open/clan/sky-wu-chi/room/room10.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
来来来喔，现在来到的是肉食动物区，现在左手
边的是「小鬼头”狮子王，请注意，不要喂食他们喔
，哎呀，才刚说完，小朋友不行喔，不能把屁屁给他
们咬喔。。。再来，看到的是右手边的「虎王”思量
，河西老虎吼可不是浪得虚名喔，糟糕，他又被旁边
的小猫吼吓哭了。。。快！没时间了，赶快到下一区
吧。
LONG);
	set( "exits", ([ /* sizeof() == 4 */
		"up"        : "/open/clan/sky-wu-chi/room/room70",
		"east"      : "/open/clan/sky-wu-chi/room/room21.c",
		"north"     : "/open/clan/sky-wu-chi/room/room11.c",
		"west"      : "/open/clan/sky-wu-chi/room/room45",
		"south"     : "/open/clan/sky-wu-chi/room/room9.c",
]) );
	set( "short", "走 廊 3" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	setup();

	}
