inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "防具店");
        set ("long", @LONG
云风镇里面唯一的一间防具店，件件防具是坚固又耐穿，件件都
是精心制作，店的后方还有一套金光闪闪的防具摆在那里，是店里的
镇店之宝。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town08",
]));
        set("light_up", 1);
        setup();
}
