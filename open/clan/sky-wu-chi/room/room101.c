// Room : /open/clan/sky-wu-chi/room/room101.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "九曲蛇道" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
 你来到了闻名的九曲蛇道，放眼望去，这儿果真如
其名般的九弯十八拐。不仅如此，通道的宽度一次仅可
容纳一人通过而已....所以..你得小心 防止前面的敌人冲过来
如此你就毫无进退之路了...........小心.~~~~~~喔..
LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/room119",
		"south"     : "/open/clan/sky-wu-chi/room/room102.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
