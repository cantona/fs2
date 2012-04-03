// Room : /open/clan/sky-wu-chi/room/room7.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
寒风山庄，看似清寒极冷，实际上却是一个鸟语花香的别墅
没有那冬寒，又哪来的别树一格的独特温馨，这里不但没有那刺
骨的寒风，也没那扰耳的风戾声，只那寒若冰的外观下，有着大
家喜悦的欢笑声，以及那人情似暖的友情下，共同建立的大家庭
而以。

LONG);
	set( "exits", ([ /* sizeof() == 2 */
		"down"      : "/open/clan/sky-wu-chi/room/room5",
		"enter"     : "/open/clan/sky-wu-chi/room/room8.c",
]) );
	set( "short", "$HIY$寒风山庄$NOR$" );
	set( "build", 4 );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	setup();

	}
