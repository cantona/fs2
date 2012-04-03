//open/prayer/room/zhenche/16.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        这里是明教分部之一"阵势门"的练武场, 练武场上总教头
        正严厉地指导着门生们努力练习. 往北是天璇门的玄关,
        两侧的走廊是分别通往总管与副门主的办公房.

LONG);
        set("outdoors", "/open/prayer/room");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1-door",                //玄关
        "south":__DIR__"20",            //练武场
        "east":__DIR__"15",             //走廊
        "west":__DIR__"17",             //走廊
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,               //总教头
                
]));
        
          setup();
}
