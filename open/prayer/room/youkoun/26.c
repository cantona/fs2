//open/prayer/room/youkoun/26.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","刑房");
        set("long",@LONG

        走到密道的尽头之后, 光线突然整个亮了起来, 你的眼睛
        一时无法适应, 等你渐渐可以看见东西后, 你怀疑自己究
        竟在那里??这里的尸首遍地, 还有好多是刚死去没多久的
        男性尸体. 个个脸上都是那恐怖的表情!!呕~~~~你忍不住
        吐了一地!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"27",    
        "west":__DIR__"25",     
 
        ]) );
        set("no_fight", 0);
                
  setup();
}

void init()
{
 add_action("search_here", "search");
}

int search_here(string str)
{
    write("你仔细一看, 发现墙脚下有个活动的小铁门!!\n");
    set("exits/down",__DIR__"29");
    call_out("do_close",10);
    return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"匡~~~~墙壁又自动合起来了。\n");
}
