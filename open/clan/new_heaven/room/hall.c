// Room : /open/clan/new_heaven/room/hall.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "天堂大门口" );
	set( "objects", ([ /* sizeof() == 3 */
  "/u/b/bss/train2" : 1,
]) );
	set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/new_heaven/room/room5.c",
  "north" : "/open/clan/new_heaven/room/room2.c",
]) );
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
这里是新天堂的大门口, 这里应该只有巫师才可以进得来,
主要是给巫师们有个测试帮派的地方
LONG);
	set( "no_clean_up", 0 );
	setup();

	}
