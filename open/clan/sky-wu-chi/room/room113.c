// Room : /open/clan/sky-wu-chi/room/room113.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "sign" : "此屋是【圣火教】太子(James) 所有。
",
]) );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
		"enter"     : "/open/clan/sky-wu-chi/room/room114.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
]) );
	set( "short", "小飞侠．神秘小道" );
	set( "object", ([
		"amount4"  : 1,
		"amount7"  : 1,
		"file7"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount9"  : 1,
		"file8"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file6"    : "/open/magic-manor/obj/evil-kill-claw",
		"file1"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount10" : 1,
		"file2"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount3"  : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"file4"    : "/open/magic-manor/obj/evil-gwe-blade",
		"file10"   : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"file3"    : "/open/magic-manor/obj/dark-soul-dagger",
		"file5"    : "/open/magic-manor/obj/dark-soul-dagger",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount6"  : 1,
		"amount5"  : 1,
	]) );
	set( "build", 10003 );
	set( "owner", "heronotme" );
	set( "light_up", 1 );
	set( "long", @LONG
你不知不觉的走进了一个神秘的小道，当你看到远方出现一到灵
光..就不犹自主的牵引往前迈进！直到你回神后..眼前出现一座泛着
灵光的小屋，此时让你心中有着不详的预感..在你冒冷汗的同时，看
到远方小屋旁有个一[33m木牌(sign)[0m，上面似乎写了些什么字！于是你起
了步往前究知，当你靠近时你感觉有一股灵气直逼于你。

　　　　　　　　$HIW$(此地凝聚一股很强大的灵气)$NOR$
LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "天道无极" );
	setup();

	}
