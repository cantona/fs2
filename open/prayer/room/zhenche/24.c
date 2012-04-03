//open/prayer/room/zhenche/24.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

        因为总管不喜欢男性进入他的书房, 所以他挑选的保镳也
        都是女性. 不过可别小看她们喔! 打起架来可是一点也不
        输给男性喔!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"28",        //总管房
        "east":__DIR__"23",             //总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
  "/open/prayer/npc/paltoon1" : 1,              //保镳
  "/open/prayer/npc/paltoon2" : 1,              //保镳
                
]));
     
  setup();
}
