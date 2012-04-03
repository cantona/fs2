// Room : /open/clan/red_fire/room/room36.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$【$HIR$红莲 $HIC$大道$HIY$】$NOR$" );
	set( "build", 51 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "红莲教" );
	set( "light_up", 1 );
	set( "long", @LONG
出现在你眼前的是一条明亮的大道，两侧的池塘里，水面上到处都漂
浮着$HIR$红莲$NOR$，你仿佛置身于一处$HIR$世$HIG$外$HIY$桃$HIC$源$NOR$；而眼前的美景更是吸引你不自觉
的向前迈进，你即刻大步大步的继续往前探索着未知的地方。


LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/red_fire/room/hall.c",
  "east" : "/open/clan/red_fire/room/room37.c",
]) );
	setup();

	}
