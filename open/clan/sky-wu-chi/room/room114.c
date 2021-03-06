// Room : /open/clan/sky-wu-chi/room/room114.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "board" : "这里是屋主 太子(James)的发呆、蹲内力、休息..之处。
",
]) );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "out" : "/open/clan/sky-wu-chi/room/room113",
]) );
	set( "short", "小飞侠．神秘小屋" );
	set( "object", ([
		"file10"   : "/open/mon/obj/ghost-legging",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file4"    : "/daemon/class/fighter/armband",
		"file5"    : "/daemon/class/fighter/figring",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"file8"    : "/obj/gift/unknowdan",
		"file6"    : "/daemon/class/fighter/figring",
		"amount6"  : 1,
		"amount3"  : 1,
		"amount8"  : 1,
		"file3"    : "/open/port/obj/wolf_ring",
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file1"    : "/obj/gift/xiandan",
		"amount7"  : 1,
		"file2"    : "/open/scholar/obj/icefan",
		"amount9"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10004 );
	set( "owner", "heronotme" );
	set( "long", @LONG
    西方是众所皆知的天极殿，东方则是雄伟豪放的镇
天东门，往天极殿的路程虽不长，但却也是一个鸟鸣常
叫的美好地方。路旁的树丛有着许许多多的可爱动物，
活泼的向你讨食物呢！看来并不只有天道无极的帮众们
喜爱这里了。
LONG);
	set( "no_transmit", 1 );
	setup();

	}
