// Room : /open/clan/sky-wu-chi/room/room50.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
你走进了一片水里，而且越走越下去，而在水里的蓝色水晶也正
向你发出攻击，你看到从水晶四周散发出像水刀一样的坚锐物质且越
聚越多，在你犹豫的那一瞬间，万道的水刀像你激射过来，你开始闪
躲，并拿出你的武器在阻档，但是却好像没见到水晶又像要停歇的样
子还是像你射了过来，你发觉情况不妙，你赶紧向出口逃逸。只是这
样真的就能够脱离的了危险吗?

LONG);
	set( "short", "蓝色水晶结界" );
	set( "object", ([
		"amount4"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"amount2"  : 1,
		"amount1"  : 1,
		"amount3"  : 1,
		"file6"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/open/mon/obj/ghost-cloak",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/obj/npc/obj/golden_armor",
		"file7"    : "/open/killer/obj/s_pill",
		"amount7"  : 63,
		"amount6"  : 1,
	]) );
	set( "build", 12029 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"out"       : "/open/clan/sky-wu-chi/room/room22",
		"west"      : "/open/clan/sky-wu-chi/room/room123",
		"north"     : "/open/clan/sky-wu-chi/room/room76.c",
		"east"      : "/open/clan/sky-wu-chi/room/room75.c",
		"south"     : "/open/clan/sky-wu-chi/room/room149.c",
]) );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	set( "item_desc", ([ /* sizeof() == 1 */
  "stone" : "",
]) );
	setup();

	}
