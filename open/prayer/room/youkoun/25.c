//open/prayer/room/youkoun/25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","密道");
        set("long",@LONG

        密道内部传来的哀号声越来越大, 密道内的灯光从前面照
        射过来!!地上的肢体残骸也越来越多, 脚踩在上面都会发
        出ㄗㄍ~~ㄗㄍ的声音!!好刺耳啊!!

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"26",     
        "west":__DIR__"24",     
 
        ]) );
        set("no_fight", 0);
                
  setup();
}
