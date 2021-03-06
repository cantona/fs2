// Room : /open/clan/ou-cloud-club/room/room44.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "傲云山庄" );
	set( "short", "$HIW$恶魔城$HIR$地下水脉$NOR$" );
	set( "object", ([
		"amount8"  : 1,
		"file5"    : "/open/prayer/obj/boris-cloth",
		"file7"    : "/open/prayer/obj/boris-cloth",
		"amount5"  : 1,
		"file9"    : "/open/prayer/obj/boris-cloth",
		"amount2"  : 1,
		"file8"    : "/open/prayer/obj/boris-cloth",
		"file10"   : "/open/prayer/obj/boris-cloth",
		"amount6"  : 1,
		"file4"    : "/open/prayer/obj/boris-cloth",
		"file6"    : "/open/prayer/obj/boris-cloth",
		"amount1"  : 1,
		"amount7"  : 1,
		"file1"    : "/open/prayer/obj/boris-cloth",
		"file2"    : "/open/prayer/obj/boris-cloth",
		"amount9"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
	]) );
	set( "build", 10044 );
	set( "light_up", 1 );
	set( "long", @LONG
一古清凉的气息振奋了你的精神,瞬间赶走了古堡里沉闷的
腐败空气,这里就是地下水脉了,应该也是整座城堡的供水中枢
吧,水质清澈寒冽,而且有些地方甚至是深潭,若要仔细调查此处
的隐藏秘密,下水一游似乎是免不了的了.
LONG);
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room98.c",
  "up" : "/open/clan/ou-cloud-club/room/room42",
]) );
	set( "no_transmit", 1 );
	setup();

	}
