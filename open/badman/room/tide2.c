#include </open/open.h>
#include <room.h>


inherit ROOM;

void create()
{
        set("short", "小巷道");
        set("long", @LONG
小巷道到此已是死路，一堵高墙挡住了往南的出路。而此处则　　　　
是充斥着股浓烈的馊水味；大概是两旁的住户经由窗户，直接将馊
水倒至此处之故吧。而昏暗中，似乎有个人横卧在地，也不知是死
是活。

LONG
        );
        set("outdoors",1);

        set("exits", ([ /* sizeof() == 1 */
                "north" : __DIR__"tide1",
        ]) );

        set("objects",([
            BAD_NPC"drinker" : 1,
        ]));

        setup();
}
