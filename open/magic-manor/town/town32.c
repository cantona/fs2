inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "水果摊");
        set ("long", @LONG
贩售各种各样新鲜的水果，水果的香味四溢，让远在几百公尺的
你都闻香赶来，只见粒粒果实大小匀称，汁多饱满，味道更是鲜美的
无话可说。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town26",
	]));

        setup();
}