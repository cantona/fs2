// Room : /open/clan/sky-wu-chi/room/room100.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "靳胻桥" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
  通过了曲折的蛇道
出现在眼前的是一座百年的吊桥 晃呀晃呀
腐朽的桥身ㄧㄚㄧㄚ的响着 使你心生恐惧之感到底要不要过桥    你在心理盘算着会不会就此跌入
万里深渊.....................   此时你竟犹豫了起来....
晃呀~~~晃呀~~~~~~

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/sky-wu-chi/room/room101.c",
  "north" : "/open/clan/sky-wu-chi/room/room99",
]) );
	set( "cmkroom", 1 );
	setup();

	}
