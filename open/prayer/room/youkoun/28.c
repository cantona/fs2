//open/prayer/room/youkoun/28.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练功房");
        set("long",@LONG

        练功房宽约四丈, 非常宽广!!房中四处摆满了兵器, 十八
        般武器样样俱全. 还有许多的木人桩, 专门用来训练门生
        的基础动作.

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "west":__DIR__"1",              //左护法
 
        ]) );
        set("no_fight", 1);
        set("light_up", 1);
  setup();
}

