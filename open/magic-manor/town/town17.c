inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "翠柳的家");
        set ("long", @LONG
镇上最令人称羡的一对情侣之一，翠柳的家，房子的的布置上似
乎豪了许多，厅堂上的桌椅都是经过名师所雕刻的，显出这家的豪华
与气派，是一个有钱人的人家。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "north"  : __DIR__"town11",
]));
        set("light_up", 1);
        setup();
}
