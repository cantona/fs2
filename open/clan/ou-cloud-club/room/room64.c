// Room : /open/clan/ou-cloud-club/room/room64.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$时计□廊$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 3 */
  "east" : "/open/clan/ou-cloud-club/room/room66.c",
  "west" : "/open/clan/ou-cloud-club/room/room65.c",
  "eastdown" : "/open/clan/ou-cloud-club/room/room61",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
这里的通路程东西走向,然而东面很明显的可以看到一面
大峭壁,而西面则是布满了零稀几座泛黄的砖墙.墙上挂着一把
巨剑,剑的四周则放射状排列的挂着斧,刀,戢,棍,枪...等各式
兵刃,妨拂释放出万般兵器剑为皇的讯息,只是,当你踏足进入
剑的十尺之内时,诸般兵器绕着剑缓缓的转动了起来...
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
