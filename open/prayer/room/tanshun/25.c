//open/prayer/room/tanshun/25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的东南角, 有两个弟子正在休息. 不过虽然是在
        休息, 他们仍然仔细地看着其他师兄弟的练武情形, 一点
        也没有怠惰的样子!

LONG);

        set("outdoors", "/open/prayer/room");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"19",            
        "west":__DIR__"26",     
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,                //弟子
        "/open/prayer/npc/trainee4" : 1,                //弟子
                
]));
     
  setup();
}
