// Room : /open/clan/red_fire/room/room18.c
inherit "/open/clan/claneqshop.c";  

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "no_transmit", 1 );
	set( "clan_room", "红莲教" );
	set( "short", "$HIY$【$HIR$红莲教 $HIC$装备室$HIY$】$NOR$" );
	set( "build", 10020 );
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/red_fire/room/room17.c",
]) );
	set( "long", @LONG

                            $HIR$● $HIC$装  备  室 $HIR$●$NOR$

        哇！！！好大的$HIC$装备室$NOR$喔！！！这里放了好多武器和防具，都是帮众
        辛苦得来的，你从里面挑选了适合的装备使用，顿时使你的$HIY$战斗能力$NOR$
        又往上提升了许多，穿上装备后，一股蠢蠢欲动的意念，让你想杀片
        天下无敌手、挑战$HIY$魔界$NOR$大魔王──$HIR$焚天$NOR$、打倒$HIB$魔龙$NOR$塔神──$HIM$独孤峸$NOR$，
        走吧！出征啰！！



LONG);
	set( "have_reborn", 1 );
	set( "object", ([ /* sizeof() == 1 */
  "obj1" : "/open/ping/obj/cloud.c",
]) );
	set( "no_clean_up", 1 );
	setup();

	}
