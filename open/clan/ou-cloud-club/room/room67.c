// Room : /open/clan/ou-cloud-club/room/room67.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$恶魔城$HIR$巴洛克艺术厅$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "down" : "/open/clan/ou-cloud-club/room/room66",
]) );
	set( "clan_room", "傲云山庄" );
	set( "long", @LONG
这面大峭壁坑坑洞洞的,很明显的曾有人从这里攀墙而上,
然而,如此高耸陡直的一面墙,若非身负绝顶轻功无法办到,
只要一个不小心失足跌下,便会像面前一副副残缺的骸骨般,
摔得四分五裂,身首异处,有勇气尝试爬上去看看吗!?
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
