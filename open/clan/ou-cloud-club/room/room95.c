// Room : /open/clan/ou-cloud-club/room/room95.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
啊！！！只见你脚下扑了一个空，差点跌落山下，幸好你轻功了得，
以腿踏空，运气往上一跳，及时将自身拉回山崖边，才保住一命，以防落
得粉身碎骨的下场，没想到$HIR$四极$HIY$天山$NOR$径的五行八卦阵如此恐怖，只要选错
一步，竟是如此骇人可怕的。

LONG);
	set( "no_clean_up", 0 );
	set( "clan_room", "傲云山庄" );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "short", "$HIG$悬崖$NOR$" );
	set( "exits", ([ /* sizeof() == 2 */
		"southdown" : "/open/clan/ou-cloud-club/room/room78",
]) );
	set( "no_transmit", 1 );
	setup();

	}
