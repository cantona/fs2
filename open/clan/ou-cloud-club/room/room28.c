// Room : /open/clan/ou-cloud-club/room/room28.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$炼金研究栋$NOR$" );
	set( "build", 10017 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room3",
  "west" : "/open/clan/ou-cloud-club/room/room46.c",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
这里陈列着大量的巨型试管,里面装满了绿色的液体,以及
一具具失去生命迹象的人体,看来这里是恶魔城的实验室了,
,试管里的人,眼神空洞,身旁流动的液体,则带着白白黄黄的
各式凝结物,脑浆,骨髓就这样无遮拦的到处流动着...
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
