// Room : /open/clan/sky-wu-chi/room/room8.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
华丽的外表下，寒风山庄却有着一种不为
人知的内幕，其实里面尽然是帮众的宿舍，首
先看到的是左手边的是小新的宿舍，小心，别
乱丢垃圾喔，再来看到的是，右手边的轩辕贱
侠小老哥的鸟窝。小心别把头伸出去喔。。。
接下来看的是五福村动物园的夜行动物区，来
来来，继续往前走。。。

LONG);
	set( "exits", ([ /* sizeof() == 6 */
		"north"     : "/open/clan/sky-wu-chi/room/room9.c",
		"west"      : "/open/clan/sky-wu-chi/room/room14.c",
		"out"       : "/open/clan/sky-wu-chi/room/room7.c",
]) );
	set( "short", "走 廊 1" );
	set( "build", 40 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	set( "cmkroom", 1 );
	setup();

	}
