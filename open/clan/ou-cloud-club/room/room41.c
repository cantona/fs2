// Room : /open/clan/ou-cloud-club/room/room41.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$入口$NOR$" );
	set( "build", 10005 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
在这里你看到几副巨大的铁链,栓着几头魁武得有如大象般的生物,
似狼似犬,到底是狼还是犬已不容你细想,因为你瞥见其中几条生锈的古
老铁链好像随时会被这些正向你咆啸的凶猛生物扯断,更当你见到牠们
面前的一堆白骨时,不离则死的的讯息再脑海中一闪而过,快离开吧!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room42.c",
  "west" : "/open/clan/ou-cloud-club/room/room40",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "傲云山庄" );
	setup();

	}
