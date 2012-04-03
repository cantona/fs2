//open/prayer/room/youkoun/10.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的北方阶梯上, 站着一位女总教头! 她正为了这
        次三年一度的比武大会, 严格地指导着门生练习! 并不时
        地改正门生的动作 :" 当敌人来得好多好突然时.. "
        往北是议事厅, 往两旁则分别通往副门主与总管房间.

LONG);

        set("outdoors", "/open/prayer");
        set("no_fight", 0);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"4",             //玄关
        "south":__DIR__"17",            //练武场
        "east":__DIR__"9",              //走廊
        "west":__DIR__"11",             //走廊
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general-officer2" : 1,                //总教头
                
]));
        
          setup();
}
