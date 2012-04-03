//open/prayer/room/youkoun/7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

        这里是瑶光门副门主的办公房. 有两个女弟子正忙着递送
        公文给副门主过目. 往东是副门主的书房, 往西则是通往
        练武场.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"6",             //副门主室
        "south":__DIR__"8",             //副门主室
        "west":__DIR__"9",              //走廊
        "east":__DIR__"5",              //副门主室
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //弟子
        "/open/prayer/npc/trainee3" : 1,                //弟子
                
]));
     
  setup();
}

