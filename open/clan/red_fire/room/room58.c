// Room : /open/clan/red_fire/room/room58.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$【$HIC$护城河 $HIM$汇流处$HIW$】$NOR$" );
	set( "object", ([
		"amount4"  : 1,
		"amount3"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount1"  : 1,
		"file3"    : "/open/magic-manor/obj/evil-kill-claw",
		"file1"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG
    
                $HIC$╮  ╮  ╮  ╮
                ╰╮╰╮╰╮╰╮
                  ╰╮╰╮╰╮╰╮
                    ╰╮╰╮╰╮╰╮
                      ╰╮╰╮╰╮╰╮
                        ╰╮╰╮╰╮╰╮
                          ╰  ╰  ╰  ╰

                       $HIY$西北$HIM$汇流处$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "红莲教" );
	set( "exits", ([ /* sizeof() == 3 */
		"east"      : "/open/clan/red_fire/room/room65.c",
		"south"     : "/open/clan/red_fire/room/room50",
]) );
	setup();

	}
