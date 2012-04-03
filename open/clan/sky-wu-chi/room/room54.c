// Room : /open/clan/sky-wu-chi/room/room54.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "short", "寒风山庄--绿荫大道" );
set( "long", @LONG
你来到了$HIW$【$HIC$神谷活心流$HIW$】$NOR$道馆的大门口处，阵阵刀风呼萧而过，
所幸你本身的功力也不浅薄，闪躲突乎其来的刀气尚不算难事一件，
不过，如果当面与挥刀者对决，或许胜算还有待考量，你呆望着斑黄
的道馆门牌，可以稍微体会到这道馆已经与$HIY$寒风山庄$NOR$并存了好一阵子
了，道馆的周遭也是由木板所围绕而成的。
LONG);
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"enter"     : "/open/clan/sky-wu-chi/room/room55.c",
		"north"     : "/open/clan/sky-wu-chi/room/room53.c",
]) );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	set( "cmkroom", 1 );
	setup();

	}
