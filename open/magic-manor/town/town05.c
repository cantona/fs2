inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "于风的家");
        set ("long", @LONG
镇上最令人称羡的一对情侣之一，于风的家，一间看来和一般民
宅没两样的一间房子，所有的家俱也都清理的很整洁，排放的也井然
有序。
LONG);  
        set("exits", ([ /* sizeof() == 4 */
        "south"  : __DIR__"town11",
]));
        set("light_up", 1);
        setup();
}
