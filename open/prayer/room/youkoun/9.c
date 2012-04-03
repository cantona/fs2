//open/prayer/room/youkoun/9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        在练武场的东北角, 有两个女弟子提着茶水供大家饮用.
        看到那一大桶茶水, 你不禁感到有一点口渴了! 往东走是
        副门主的办公房.

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"7",              //走廊
        "south":__DIR__"16",            //练武场
        "west":__DIR__"10",             //练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee3" : 1,                //弟子
        "/open/prayer/npc/trainee4" : 1,                //弟子
                
]));
     
  setup();
}
