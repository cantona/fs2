//open/prayer/room/youkoun/24.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","密道");
        set("long",@LONG

        密道的四周有许多已经变黑的血迹, 那一股奇怪的臭味应
        该就是血腥味了, 密道内的灯光比刚才亮了一点!!哇~~地
        上都是一些肢体的残骸, 看起来好像是手骨与脚骨!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"25",     
        "south":__DIR__"23",    
 
        ]) );
        set("no_fight", 0);
                
  setup();
}
