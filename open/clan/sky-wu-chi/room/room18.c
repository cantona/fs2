// Room : /open/clan/sky-wu-chi/room/room18.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "clan_room", "天道无极" );
	set( "long", @LONG
这里是长长通道的开端，放眼望去这通道似乎是没有尽
头的，因为不管你怎么看、怎么用力的看，那尽头似乎都隐
藏在遥不可及的尽头、一个未可知的尽头。你仔细观察了四
周的摆设之后，终于决定孤卒一踯，头也不回的往前大步走
去。

LONG);
	set( "short", "$HIC$马房前的通道$NOR$" );
	set( "owner", "aow" );
	set( "object", ([
		"amount8"  : 1,
		"file4"    : "/u/d/dhk/questsfan/obj/diamond_cloak",
		"amount3"  : 1,
		"amount10" : 1,
		"file10"   : "/open/ping/obj/cloud_fan",
		"file3"    : "/u/d/dhk/questsfan/obj/diamond_legging",
		"amount9"  : 1,
		"file8"    : "/u/d/dhk/questsfan/obj/diamond_armor",
		"amount7"  : 1,
		"file2"    : "/u/d/dhk/questsfan/obj/diamond_belt",
		"amount4"  : 1,
		"amount2"  : 1,
		"file9"    : "/open/ping/obj/cloud_fan",
		"file7"    : "/u/d/dhk/questsfan/obj/diamond_hairpin",
		"file6"    : "/u/d/dhk/questsfan/obj/diamond_hands",
		"file5"    : "/u/d/dhk/questsfan/obj/diamond_boots",
		"amount1"  : 1,
		"amount5"  : 1,
		"amount6"  : 1,
		"file1"    : "/u/d/dhk/questsfan/obj/diamond_skirt",
	]) );
	set( "build", 12169 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/room79.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
]) );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	setup();

	}
