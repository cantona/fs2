// Room : /open/clan/demon_castle/room/room3.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "魔˙梦幻湖" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "south" : "/open/clan/demon_castle/room/hall",
]) );
	set( "no_transmit", 1 );
	set( "long", @LONG

    梦幻湖位于恶魔城北方，四周山林气息清新，青翠盈眼，绿意快人
湖中小帆缓缓飘行，烟雾迷漫，不时可以听到山的鸟儿啼叫，水中的鱼
自由自在游，是乎不在意人们的走动，湖畔数人倚树垂钓，高谈论武林
事迹真是与世无争的地方。

LONG);
	set( "cmkroom", 1 );
	setup();

	}
