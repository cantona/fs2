// Room : /open/clan/red_fire/room/room10.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "红莲教" );
	set( "light_up", 1 );
	set( "short", "$HIM$【$HIR$红莲$HIY$圣域 $HIC$天外天$HIM$】$NOR$" );
	set( "long", @LONG


                             $HIY$【  $HIC$天  外  天  $HIY$】$NOR$


        果然！！这里就是传说中的$HIR$红莲$HIY$圣域$NOR$了，此时你也感受到$HIY$圣域$NOR$中庄严
        的气氛；你的心情顿时沈静了下来，你向四周望去，发现一条$HIW$回旋阶
        梯$NOR$，你鼓起勇气一阶一阶的向上爬去........。


LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "up" : "/open/clan/red_fire/room/room11.c",
  "out" : "/open/clan/red_fire/room/room7",
]) );
	setup();

	}
