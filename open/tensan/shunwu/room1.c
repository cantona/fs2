inherit ROOM;
#include <ansi.h>
#include <room.msg>

void create () {
        set ("short","玄武幻阵");
        set ("long",
        "你一踏入玄武幻阵即发现此阵非比寻常，如果没有做好万全的准备\n"+
        "最好马上离开\n"
        );
    
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
        "北门" : __DIR__"room2",
        "离阵" : __DIR__"room2",      
        ]));
  

        setup();
}
