 inherit ROOM;

void create()
{
        seteuid(getuid());
        set( "long", @LONG
你不知不觉的走进了一个神秘的小道，当你看到远方出现一到灵
光..就不犹自主的牵引往前迈进！直到你回神后..眼前出现一座泛着
灵光的小屋，此时让你心中有着不详的预感..在你冒冷汗的同时，看
到远方小屋旁有个一$YEL$木牌(sign)$NOR$，上面似乎写了些什么字！于是你起
了步往前究知，当你靠近时你感觉有一股灵气直逼于你。
　　　　　　　　$HIW$(此地凝结一股很强大的灵气)$NOR$

LONG);
        set( "no_transmit", 1 );
        set( "cmkroom", 1 );
        set( "no_clean_up", 0 );
        set( "exits", ([ /* sizeof() == 2 */
		"enter"     : "/open/clan/sky-wu-chi/room/room112.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
]) );
        set( "clan_room", "天道无极" );
        set( "item_desc", ([ /* sizeof() == 1 */
  "sign" : "此屋是【圣火教】太子(James) 所有。
",
]) );
	set( "short", "懒人．神秘小道" );
	set( "owner", "lazycancer" );
	set( "object", ([
		"amount9"  : 1,
		"file4"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
		"amount3"  : 1,
		"amount2"  : 1,
		"amount5"  : 1,
		"file5"    : "/daemon/class/blademan/obj/ublade",
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"amount10" : 1,
		"file3"    : "/open/snow/obj/figring",
		"file2"    : "/open/mon/obj/ghost-cloak",
		"amount7"  : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"file1"    : "/open/mon/obj/ghost-legging",
		"amount4"  : 1,
		"amount6"  : 1,
		"file6"    : "/open/snow/obj/figring",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file7"    : "/open/poison/obj/blue_key",
	]) );
	set( "build", 10001 );
	set( "light_up", 1 );
        setup();

        }

