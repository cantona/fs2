// Room : /open/clan/sky-wu-chi/room/room81.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "天道无极" );
	set( "short", "地极殿" );
	set( "light_up", 1 );
	set( "long", @LONG
「地极殿”此乃天道无极之五极殿堂之一，朴素的殿
堂下，更显得出他的高贵。天道五行，幻化无穷，但最让
人明了的也只有像地极那样的。虽然这没有像那天极殿样
般的华丽，只是一个偏厅，但从此殿的设计与位置来看，
似乎是有什么隐藏的力量。在厅旁的柱子(sign)上，似乎
有刻着什么样的字在上面。

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "north" : "/open/clan/sky-wu-chi/room/room92.c",
  "east" : "/open/clan/sky-wu-chi/room/room80",
]) );
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 1 */
  "sign" : "
天道无极之五行幻化，变化莫测。

",
]) );
	setup();

	}
