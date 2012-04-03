inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "碎石坡");
        set ("long", @LONG
一段接着一段的路程，地面仍旧满怖了碎石，景色依旧，在两旁
草木更显枯黄稀少，空气中的水气也愈来愈浓，冷冷的风疾疾的吹，
寒冷的气息也一点一滴的钻进你的体内，让你摸不清前方的路还有多
远。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "eastup"     : __DIR__"mon20",
        "southdown"  : __DIR__"mon18",
]));
        setup();
}

