// Room : /open/clan/sky-wu-chi/room/room70.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$新生宿舍$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room175",
		"down"      : "/open/clan/sky-wu-chi/room/room10.c",
		"south"     : "/open/clan/sky-wu-chi/room/room207.c",
		"east"      : "/open/clan/sky-wu-chi/room/room69.c",
	]) );
	set( "long", @LONG
这里是天道无极的新生宿舍,别以为他们都是小小的肉脚喔
他们可是有单挑sa;fire king 的能力喔,平时这里常常传出了
苦练的声音,他们的目标只有一个,打倒 刀神燕仔~~~~~~~~
所以..走到这里使你不禁兴起了尊敬之心,对于这新生宿舍
在也不敢轻视....

LONG);
	set( "no_transmit", 1 );
	set( "clan_room", "天道无极" );
	set( "cmkroom", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
