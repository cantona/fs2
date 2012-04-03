inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "碎石坡");
        set ("long", @LONG
走入这里，地面满怖了碎石，故名碎石坡，在两旁草木更显枯黄
稀少，空气中的水气也愈来愈浓，冷冷的风疾疾的吹，寒冷的气息也
一点一滴的钻进你的体内，让你摸不清前方的路还有多远。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "westup"     : __DIR__"mon17",
        "eastdown"   : __DIR__"mon14",
]));
        setup();
}

