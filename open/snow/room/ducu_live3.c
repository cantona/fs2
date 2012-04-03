#include <room.h>

inherit ROOM;

void create()
{
	set("short","独孤居书房");
	set("long",@LONG
这里是独孤愁平时游读诗书，观看百家经点的书房，房间虽小，却摆满了
诸子百家的经典，独孤愁不枉为一才子，里头的每本书，他至少看过百遍以上
，而且倒背如流，由此可见，独孤愁不只喜好武艺，也十分重视文学。
 
 
LONG);
        set("exits", ([
	"east":__DIR__"ducu_live2",
	"north":__DIR__"ducu_live4",
        ]) );
	set("light_up",1);
        setup();
}
