// Room : /open/clan/ou-cloud-club/room/room126.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
通往傲云山庄内的道路，左右路旁插满着各　　
门各派的敬贺标语，还有受聘于傲云山庄的武师　　
们，庄前大道何其威武，殊不知傲云山庄乃武林　　
中第一大帮，普通人等岂可轻松进入庄内，故庄　　
前有着非常严厉的关卡把守着．　　

LONG);
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "傲云山庄" );
	set( "light_up", 1 );
	set( "short", "山庄大道" );
	set( "object", ([
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount3"  : 1,
		"file6"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file5"    : "/open/magic-manor/obj/maun-shadow-blade",
		"file1"    : "/open/magic-manor/obj/fire-color-ribbon",
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount5"  : 1,
		"file7"    : "/open/magic-manor/obj/evil-gwe-blade",
		"amount1"  : 1,
		"file4"    : "/open/magic-manor/obj/fon-sky-sword",
		"amount8"  : 1,
		"amount4"  : 1,
		"amount6"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"amount2"  : 1,
		"amount7"  : 1,
	]) );
	set( "build", 16444 );
	set( "no_transmit", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"out"       : "/open/clan/ou-cloud-club/room/room124.c",
		"north"     : "/open/clan/ou-cloud-club/room/hall",
]) );
	setup();

	}
