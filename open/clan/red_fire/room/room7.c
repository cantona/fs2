// Room : /open/clan/red_fire/room/room7.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "红莲教" );
	set( "light_up", 1 );
	set( "short", "$HIY$【$HIR$红莲 $HIC$大道 $HIM$高塔$HIY$】$NOR$" );
	set( "long", @LONG
你来到这里不禁停了下来，耸立在你面前的是一座用火红色砌成的$HIM$高
塔$NOR$，你打了一个寒栗，难道这里是$HIR$红莲寺$NOR$吗？啊........你心头一震，突
然想起了当年传说的$HIY$圣域$NOR$，难道这里就是传说中的$HIR$红莲$HIY$圣域$NOR$──$HIC$天外天$NOR$。
此时你决定了要向$HIY$圣域$NOR$前进；你慢慢的推开了两扇火红的大门......。


LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
  "north" : "/open/clan/red_fire/room/room31.c",
  "enter" : "/open/clan/red_fire/room/room10.c",
  "south" : "/open/clan/red_fire/room/room6.c",
]) );
	setup();

	}
