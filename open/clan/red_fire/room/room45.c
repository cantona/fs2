// Room : /open/clan/red_fire/room/room45.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIC$果冻鱼$HIM$的$HIY$小窝$NOR$" );
	set( "owner", "bebo" );
	set( "object", ([
		"amount4"  : 45490,
		"file7"    : "/open/port/obj/wolf_ring",
		"amount1"  : 1508,
		"file2"    : "/open/wu/npc/obj/armband",
		"file3"    : "/open/killer/obj/knife",
		"file6"    : "/open/killer/obj/s_pill",
"amount3"  : 90000,
		"file5"    : "/open/killer/obj/lustar",
		"amount7"  : 1,
		"amount2"  : 1,
		"amount5"  : 68826,
		"file4"    : "/open/killer/obj/knief2",
		"file1"    : "/open/killer/obj/hate_knife",
		"amount6"  : 12,
	]) );
	set( "build", 10039 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG

这里是$HIC$果冻鱼$NOR$的$HIY$小窝$NOR$，听说他粉爱吃$HIM$果冻$NOR$，而
且生性活泼好动，像一条$HIR$鱼$NOR$一样到处游动，所
以自称为$HIC$果冻鱼$NOR$....，你在他的$HIY$小窝$NOR$看到满满
一屋子的$HIM$果冻$NOR$，就知道他是如何酷爱这玩意啰
，竟然连$HIW$床铺$NOR$都是高级的$HIB$水床$NOR$，软软的样子就
跟$HIM$果冻$NOR$一般的好有弹性，让你看了真想上去躺
一躺....。


LONG);
	set( "clan_room", "红莲教" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/red_fire/room/room72.c",
]) );
	setup();

	}
