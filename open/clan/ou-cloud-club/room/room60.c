// Room : /open/clan/ou-cloud-club/room/room60.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$时计□廊$NOR$" );
	set( "build", 10046 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "west" : "/open/clan/ou-cloud-club/room/room59",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
充满时钟的奇异走廊,而这里似乎就是它的尽头,仔细看一下这条
走廊,身处其中,似乎特别能感到时间的流动,或许在这走廊中隐藏着
什么重大的秘密,不过,更令人惊讶及佩服的,还是当初构筑完成这走廊
的创始者吧,纵使无法了解他创造的动机为何,也能对这赋予空间时光
感觉的作品感到诈舌
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
