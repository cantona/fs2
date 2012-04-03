//open/prayer/room/youkoun/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

        在办公房的北边散落了一地的文件, 有两个女弟子正忙着
        捡起来重新整理. 看她们紧张的样子, 想必如果被副门主
        看到, 免不了又是一顿骂了.

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"7",             //副门主室
        "southeast":__DIR__"5",         
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //弟子
        "/open/prayer/npc/trainee3" : 1,                //弟子
                
]));
     
  setup();
}

