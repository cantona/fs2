//open/prayer/room/zhenche/18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","走廊");
        set("long",@LONG

        走廊的廊顶是使用上等的西域桧木建造的, 随时都会散发
        出特有的桧木香. 东边是练武场, 顺着走廊则可以到达总
        管的书房. 不过总管好像不怎么欢迎男性..

LONG);

        set("outdoors", "/open/prayer/room");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"17",             //走廊
        "south":__DIR__"23",            //走廊
 
        ]) );
        
  setup();
}

int valid_leave(object me, string dir)
  {
    if(dir=="south"&&me->query("gender")=="男性")
        return notify_fail("男人是无法进入总管书房的 ?\n");
        
   return 1;
}
