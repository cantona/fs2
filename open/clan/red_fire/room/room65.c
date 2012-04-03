// Room : /open/clan/red_fire/room/room65.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$【$HIC$护城河$HIW$】$NOR$" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room58",
		"east"      : "/open/clan/red_fire/room/room64.c",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG


               $HIC$ ╮  ╮  ╮  ╮
                ╰╮╰╮╰╮╰╮
                  ╰╮╰╮╰╮╰╮
                    ╰╮╰╮╰╮╰╮
                      ╰╮╰╮╰╮╰╮
                        ╰╮╰╮╰╮╰╮
                          ╰  ╰  ╰  ╰

                        $HIY$咏江山

                    $HIM$江山美人何处寻，
                    独有红莲两相得，
                    美人一揽天下贤；
                    众人皆拥此江山。  $HIR$爱玫 $HIW$笔$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "红莲教" );

	}
