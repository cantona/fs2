inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "广场中央");
        set ("long", @LONG
广场的正中央，是所有镇民活动的地方，宽广的广场，聚集了不
少镇民在此活动，热闹的景象，让这小镇活络了起来，可以看见镇民
在那聊天、泡茶、乘凉、嬉戏、游乐，这样的景象真是羡煞了江湖儿
女心的你，也好想这么样悠闲的过活儿。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "northeast"	: __DIR__"town16",
        "southeast"	: __DIR__"town22",
        "northwest"	: __DIR__"town15",
        "southwest"	: __DIR__"town21",
	]));

	set("objects", ([ /* sizeof() == 1 */
	__DIR__ "npc/kid01"	: 1,
	__DIR__ "npc/kid02"	: 1,
	__DIR__ "npc/oman"	: 1,
	]));

        setup();
}