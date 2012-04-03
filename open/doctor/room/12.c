#include <room.h>
inherit ROOM;
void create()
{
        set("short","副门主房");
        set("long",@LONG
一进入办公房，可以很显地感受到一股紧张忙碌的气氛，有两个
弟子正在整理病人的资料，准备送给副门主过目。

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"11",            
        "south":__DIR__"13",            
        "west":__DIR__"14",           
        "east":__DIR__"10",          

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
   "/open/doctor/npc/trainee1" : 1,          
   "/open/doctor/npc/trainee2" : 1,      

]));

  setup();
}


