// Room : /open/clan/sky-wu-chi/room/room46.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "light_up", 1 );
	set( "long", @LONG
幕前的就是天道无极所最中心的天极殿，此乃是
天道无极之帮众所齐心合力所完成的地方，虽没有那
华丽装饰品，也没那气派的名家诗画，却有那无比的
高贵感，只重感觉不重外表的帮众，以将那殿堂视为
所最重视的地方了
LONG);
	set( "exits", ([ /* sizeof() == 2 */
		"north"     : "/open/clan/sky-wu-chi/room/room158.c",
		"sir"       : "/open/clan/sky-wu-chi/room/room289",
		"west"      : "/open/clan/sky-wu-chi/room/room154.c",
]) );
	set( "short", "殿前大道" );
	set( "cmkroom", 1 );
	setup();

	}










































































