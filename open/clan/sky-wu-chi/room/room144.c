inherit ROOM;
void create() {
	set( "short", "玄武走廊" );
	set( "owner", "palapala" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "build", 10720 );
	set( "object", ([
		"file3"    : "/open/fire-hole/obj/y-pill",
		"amount7"  : 1,
		"file5"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/open/capital/obj/4-3",
		"file2"    : "/open/capital/obj/4-1",
		"amount1"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount5"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount8"  : 1,
		"amount4"  : 30,
		"file8"    : "/daemon/class/fighter/ywhand",
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file10"   : "/daemon/class/fighter/armband",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount10" : 1,
		"amount3"  : 49,
	]) );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room151",
		"west"      : "/open/clan/sky-wu-chi/room/room146.c",
	]) );
	set( "long", @LONG
你走在名为[1;37m‘[1;30m玄武[0m[1;37m’[0m走廊上你感觉到有一种不寒而栗的杀气，比你刚刚
走的[1;47m‘[1;37m白虎[1;47m’[0m走廊有过之而无不及，你感受到了空气中有一股肃杀的气息正
弥蔓在四周，在一片的黑暗里，你看不到四周有些什么，只是感觉到有好几
双的眼睛正瞪着你看。猛然间你发现天花板压了下来，你集忙的运了气举起
你的双手向上那么一撑，使用了千斤坠的功夫硬挺着，没想到从四处跑出来
了四个护卫。那四只护卫分别是叫‘灭’‘空’‘武’‘神’，都拿出了他
们的武器猛然的向你的身体四处猛然插下。

LONG);
	setup();
	replace_program(ROOM);
}
