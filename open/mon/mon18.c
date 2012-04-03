inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "碎石坡");
        set ("long", @LONG
路一段接一段，地面仍旧满怖了碎石，景色依旧，在两旁草木更
显枯黄稀少，空气中的水气也愈来愈浓，冷冷的风疾疾的吹，寒冷的
气息也一点一滴的钻进你的体内，让你摸不清前方的路还有多远。
LONG);
        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "northup"    : __DIR__"mon19",
        "southdown"  : __DIR__"mon17",
]));
        setup();
}

