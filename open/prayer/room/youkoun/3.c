//open/prayer/room/youkoun/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","瑶光门大厅");
        set("long",@LONG

        在大厅的西方站着一位左护法, 和右护法一起保护门主.
        不过你总觉得这里怪怪的, 可是又说不上来那种感觉..
        不晓得到底是哪儿不对劲..

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"4",         //大厅
        "east":__DIR__"2",                      //门主
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/left7" : 1,           //左护法
]));
  setup();
}

void init()
{
 add_action("search_here", "search");
}

int search_here(string str)
{
    write("你仔细一看, 发现墙壁是可以活动的!!\n");
    set("exits/west",__DIR__"22");
    call_out("do_close",10);
    return 1;
}

void do_close()
{
        if(!query("exits/west"))
                return;
        delete("exits/west");
        tell_room(this_object(),"匡~~~~墙壁又自动合起来了。\n");
}
