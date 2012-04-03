// Room : /open/clan/sky-wu-chi/room/room52.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
眼观四面，耳听八方，来到了二楼，不禁感到
想不到世上美的地方，尽是在眼前，正是自已所身
处的世界，想不到把眼光看得远一点，就能得到如
此的体会，那心里也想到登高必自弥，觉得人外有
人，山外有山，这层道理了。

LONG);
	set( "short", "$HIC$通天阁二楼$NOR$" );
	set( "object", ([
		"amount6"  : 1,
		"file4"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/mon/obj/ghost-cloak",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-cloak",
		"file8"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"file5"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/wu/npc/obj/armband",
		"file9"    : "/open/mon/obj/ghost-legging",
		"file2"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"file7"    : "/open/port/obj/wolf_ring",
		"amount10" : 1,
		"amount3"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-helmet",
		"amount2"  : 1,
	]) );
	set( "build", 10005 );
	set( "owner", "conpse" );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room40",
	]) );
	set( "light_up", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "window" : "中央驿站 - 
    这儿就是最最出名的驿站，镳局的车队, 来往于沙漠的骆驼队, 甚
至是牛马骡车, 几乎只要你叫得出名字的交通工具这儿都有。
    白云在天空中飘来飘去。
    太阳刚从东方的地平线升起。
   「[14m小辣椒[0m”卖火柴的小辣妹(Sale girl)




ㄟ～～～这边看得到中央驿站耶
",
]) );
	set( "no_clean_up", 0 );
	set( "clan_room", "天道无极" );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
