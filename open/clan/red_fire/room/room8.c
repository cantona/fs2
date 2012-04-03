// Room : /open/clan/red_fire/room/room8.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "clan_room", "红莲教" );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"south"     : "/open/clan/red_fire/room/room2",
		"down"      : "/open/clan/red_fire/room/room107",
]) );
	set( "short", "$HIY$【$HIR$红莲$NOR$ $HIC$大道$NOR$ $HIM$悬崖$HIY$】$NOR$" );
	set( "long", @LONG
出现在你眼前的是一条明亮的大道，两侧的池塘里，水面上到处都漂
浮着$HIR$红莲$NOR$，你仿佛置身于一处$HIR$世$HIG$外$HIY$桃$HIC$源$NOR$；而眼前的美景更是吸引你不自觉
的向前迈进，只是......前面竟然是$HIM$悬崖$NOR$！！而且一片$HIB$云海$NOR$......你吸了
一口气，使出卓绝的轻功向下跃入$HIB$云海$NOR$之中......。


LONG);
	setup();

	}
