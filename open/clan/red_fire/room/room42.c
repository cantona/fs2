// Room : /open/clan/red_fire/room/room42.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$【$HIR$红莲 $HIM$东城门$HIY$】$NOR$" );
	set( "build", 9 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
这里是$HIR$红莲教$NOR$的$HIM$东城门$NOR$，往东走去有一条乡村小路，那是通往$HIR$红莲村$NOR$
的必经之路，一路上风光明媚、鸟语花香，真是一处$HIR$人$HIG$间$HIY$仙$BLU$境$NOR$；这一切都
是因为$HIR$红莲教$NOR$教主$HIR$母$HIG$仪$HIY$天$BLU$下$NOR$所得来的。


LONG);
	set( "clan_room", "红莲教" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/red_fire/room/room37.c",
		"east"      : "/open/clan/red_fire/room/room43.c",
		"up"        : "/open/clan/red_fire/room/room156.c",
]) );
	setup();

	}
