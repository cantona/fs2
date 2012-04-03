// Room : /open/clan/red_fire/room/room12.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "short", "$HIM$【$HIC$八 卦 阵$HIM$】$NOR$" );
	set( "no_transmit", 1 );
	set( "clan_room", "红莲教" );
	set( "cmkroom", 1 );
	set( "long", @LONG

                    $HIC$‘$HIW$无极生太极、太极生两仪$HIC$’

                    ‘$HIW$两仪生四象、四象生八挂$HIC$’

八挂阵$NOR$──从古代中国之易经中所演变而来；$HIC$干$NOR$、$YEL$坤$NOR$、$BLU$坎$NOR$、$HIR$离$NOR$、$HIB$兑$NOR$、$HIY$震$NOR$、
$HIM$巽$NOR$、$MAG$艮$NOR$，即为其八个挂象；你一踏入此阵之后，内心起了一个疑问？教主
为何会设$HIC$八挂阵$NOR$于此？此时强烈的好奇心驱使着你，让你不由自主的想闯
一闯此阵。


LONG);
	set( "exits", ([ /* sizeof() == 2 */
  "down" : "/open/clan/red_fire/room/room11.c",
  "enter" : "/open/clan/red_fire/room/room20.c",
]) );
	setup();

	}
