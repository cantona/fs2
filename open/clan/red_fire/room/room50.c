// Room : /open/clan/red_fire/room/room50.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$【$HIC$护城河$HIW$】$NOR$" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room48",
		"north"     : "/open/clan/red_fire/room/room58.c",
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
                         
                        $HIY$乱世歌           

                    $HIM$雄心万丈治乱世，
                    怎奈有心空无力，
                    英雄侠女聚红莲；
                    一统江山出天地。  $HIR$爱玫 $HIW$笔$NOR$


LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "红莲教" );

	}
