// Room : /open/clan/sky-wu-chi/room/room77.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "天萝密林" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
只见东南西北都有小径，却不知走向哪一处好。你走了一阵
，似觉又回到了原地。阴阳开阖、乾坤倒置之妙，这一迷路，若
是乱闯，定然只有越走越糟。四下里寂静无声，竟不见半个人影
。你焦急起来，跃上树巅，四下眺望，南边是海，向西是光秃秃
的岩石，东面北面都是花树，五色缤纷，不见尽头，只看得你头
晕眼花。

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/sky-wu-chi/room/room98.c",
  "west" : "/open/clan/sky-wu-chi/room/room38",
]) );
	set( "cmkroom", 1 );
	setup();

	}
