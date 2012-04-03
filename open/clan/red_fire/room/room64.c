// Room : /open/clan/red_fire/room/room64.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$【$HIC$护城河$HIW$】$NOR$" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room65",
		"east"      : "/open/clan/red_fire/room/room53.c",
	]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 0 );
	set( "long", @LONG


                         $HIC$ ╭  ╭  ╭  ╭ 
                        ╭╯╭╯╭╯╭╯
                      ╭╯╭╯╭╯╭╯
                    ╭╯╭╯╭╯╭╯
                  ╭╯╭╯╭╯╭╯
                ╭╯╭╯╭╯╭╯
                ╯  ╯  ╯  ╯

                        $HIY$梦光阴

                    $HIM$人生如梦梦如烟，
                    光阴似水水无痕，
                    如梦如烟虚飘渺；
                    似水无痕莫回头。  $HIR$爱玫 $HIW$笔$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "红莲教" );

	}
