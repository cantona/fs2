// Room : /open/clan/red_fire/room/room52.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$【$HIC$护城河$HIW$】$NOR$" );
	set( "object", ([
		"file5"    : "/open/capital/room/king/obj/dagger1",
		"file3"    : "/open/mon/obj/ghost-claw",
		"amount1"  : 1,
		"file1"    : "/open/badman/obj/evil_claw",
		"amount5"  : 1,
		"amount3"  : 1,
	]) );
	set( "build", 10133 );
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

                        $HIY$末了情

                    $HIM$美人倚门待郎君，
                    奈何苦等却成空，
                    谁言有情终成眷；
                    莫怪无情已成真。  $HIR$爱玫 $HIW$笔$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "红莲教" );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/red_fire/room/room53",
		"south"     : "/open/clan/red_fire/room/room49.c",
]) );
	setup();

	}
