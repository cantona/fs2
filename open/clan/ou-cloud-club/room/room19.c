// Room : /open/clan/ou-cloud-club/room/room19.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$时计□廊$NOR$" );
	set( "build", 10146 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
  "east" : "/open/clan/ou-cloud-club/room/room55.c",
  "down" : "/open/clan/ou-cloud-club/room/room3",
  "up" : "/open/clan/ou-cloud-club/room/room53",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
滴答滴答的声音到处都是,你栗然惊见墙上挂了成千上百
各式各样华丽的古老时钟,更令人头皮发麻的,是它们每一座锺,
都分秒不差的指着相同的时刻,这样庞大的一堆古老机械,不知
道为什么会出现在浑沌的恶魔城里,永生不死的魔物也会在乎
些许时光的流逝吗...
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
