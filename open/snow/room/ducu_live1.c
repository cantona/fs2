#include <room.h>

inherit ROOM;

void create()
{
	set("short","独孤居");
          set("long",@LONG
这里是独孤愁生前居住之地，雅号「独孤居”，独孤愁一生孤傲，
不喜言语，但闲来没事便作作小诗自娱，也堪称是武林中一位才子高人
，在独孤居处处可以看见独孤愁生前所留下的诗词。在此门口可以看到
一幅对联：
 
                「狂风飞雪鬼影动，
                            
                              浮云秋雨骚人愁。”
                 
 
LONG);
        set("exits", ([
	"south":__DIR__"ducu_live",
	"enter":__DIR__"ducu_live2",
        ]) );
	set("light_up",1);
        setup();
}
