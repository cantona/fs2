// Room : /open/clan/red_fire/room/room40.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$【$HIR$红莲 $HIM$西城门$HIY$】$NOR$" );
	set( "owner", "reuben" );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"file10"   : "/open/wind-rain/obj/star-hammer",
		"file3"    : "/open/mogi/dragon/obj/power",
		"file4"    : "/open/quests/snake/npc/obj/snake-key-1",
		"amount3"  : 1,
		"amount8"  : 1,
		"amount4"  : 1,
		"file8"    : "/open/killer/headkill/obj/world_dag",
		"amount6"  : 1,
		"amount2"  : 1,
		"file6"    : "/open/quests/snake/npc/obj/snake_gem",
		"amount1"  : 1,
		"file2"    : "/open/quests/snake/npc/obj/snake-key-1",
		"file9"    : "/open/quests/snake/npc/obj/snake_gem",
		"file7"    : "/open/killer/headkill/obj/world_dag",
		"amount7"  : 1,
		"file1"    : "/open/quests/snake/npc/obj/snake-key-1",
		"amount10" : 1,
		"amount9"  : 1,
	]) );
	set( "build", 10960 );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "long", @LONG
这里是$HIR$红莲教$NOR$的$HIM$西城门$NOR$，往西走去会通过一条$HIW$碎石路$NOR$，而最后会看到
一块路标，好像是分别通往南、北两个帮派的通路，而这两帮向来不合，
不过听说两帮的帮主之前好像是$HIR$爱玫$NOR$教主创教时的左右护法，因为时常为
了小事而争吵，最后又因此而纷纷得罪了教主，虽然事后教主并不责怪，
但是他们为了不再使教主心烦，同时离开了$HIR$红莲$NOR$......。


LONG);
	set( "clan_room", "红莲教" );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 3 */
		"west"      : "/open/clan/red_fire/room/room41.c",
		"east"      : "/open/clan/red_fire/room/room39.c",
		"up"        : "/open/clan/red_fire/room/room46.c",
]) );
	setup();

	}
