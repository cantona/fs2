inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","登山步道");
        set ("long",@LONG
你眼前看到一条登山步道无限的往上延伸而去，正所谓万丈高楼平地
起，虽然你不知道这条路有多长，不过既然已经走了下去那就别回头吧。
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "westup" : __DIR__"room5",
        "southdown" :  __DIR__"room3",       
        ]));

       
        setup();
}
