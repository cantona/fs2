// Room : /open/clan/red_fire/room/room53.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$【$HIC$护城河 $HIM$汇流处$HIW$】$NOR$" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG
        
                          $HIC$╭  ╭  ╭  ╭ 
                        ╭╯╭╯╭╯╭╯
                      ╭╯╭╯╭╯╭╯
                    ╭╯╭╯╭╯╭╯
                  ╭╯╭╯╭╯╭╯
                ╭╯╭╯╭╯╭╯
                ╯  ╯  ╯  ╯

                       $HIY$东北$HIM$汇流处$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "红莲教" );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/red_fire/room/room64.c",
		"south"     : "/open/clan/red_fire/room/room52.c",
]) );
	setup();

	}
