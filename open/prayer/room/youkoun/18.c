//open/prayer/room/youkoun/18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的西方, 有两个女弟子正在整理衣裳, 准备随时
        下场示范另一段的动作. 看来功夫应该也不弱才对! 令你
        不禁想找她们先行较量一番..

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"11",            //练武场
        "south":__DIR__"21",            //练武场
        "east":__DIR__"17",             //练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee4" : 1,                //弟子
        "/open/prayer/npc/trainee4" : 1,                //弟子
                
]));
     
  setup();
}
