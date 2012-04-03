#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "仙剑派石阶");
        set("long", @LONG
你沿着石阶往上走了一会，发现周围的景色也有了不同的变化，仔细看
着两旁树木的排列，乱中有序，隐隐的透露出一股庄严的气息，石阶上是
一尘不染，令你心生向往。        
LONG
        );

        set("exits", ([
               "down":__DIR__"road7",
                "up":__DIR__"test.c"
        ]) );
     set("outdoors","/open/gsword");
     set("light_up",1);
setup();

}
