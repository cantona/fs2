// Room : /open/clan/ou-cloud-club/room/room37.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$入口$NOR$" );
	set( "object", ([
		"file8"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount3"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
		"file1"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/mon/obj/ghost-claw",
		"file7"    : "/open/mon/obj/ghost-claw",
		"amount7"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"amount9"  : 1,
		"file10"   : "/open/mon/obj/ghost-claw",
		"amount8"  : 1,
		"file4"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"file5"    : "/open/mon/obj/ghost-claw",
		"file2"    : "/open/mon/obj/ghost-claw",
	]) );
	set( "build", 11664 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
这里是通往浑沌国度-恶魔城的唯一通道,当你甫踏进此房间,
身后的门随即 呀~~~ 的一声关上了,在前面等待你的,是未知的
黑暗世界,以及令人恐惧的恶魔气息...寒风骤然袭来,圆满无缺
的皎洁月轮,仿佛一起为你演奏起悲壮的夜曲,前进吧~~~已没有
退路了...
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room38.c",
  "out" : "/open/clan/ou-cloud-club/room/room36",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
