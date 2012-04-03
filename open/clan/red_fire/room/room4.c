// Room : /open/clan/red_fire/room/room4.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "红莲教" );
	set( "light_up", 1 );
	set( "short", "$HIY$【$HIR$红莲$NOR$ $HIC$大道$HIY$】$NOR$" );
	set( "build", 68 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/red_fire/room/room3.c",
		"south"     : "/open/clan/red_fire/room/hall.c",
]) );
	set( "long", @LONG
出现在你眼前的是一条明亮的大道，两侧的池塘里，水面上到处都漂
浮着$HIR$红莲$NOR$，你仿佛置身于一处$HIR$世$HIG$外$HIY$桃$HIC$源$NOR$；而眼前的美景更是吸引你不自觉
的向前迈进，你即刻大步大步的继续往前探索着未知的地方。


LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
