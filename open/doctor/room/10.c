#include <room.h>
inherit ROOM;
void create()
{
        set("short","副门主房");
        set("long",@LONG
这里是副门主的书房，书房内窗门几净，书架上的书应有尽有，
有一位弟子正在整理副门主的书桌。

LONG);

        set("exits", ([ /* sizeof() == 3 */
        "northwest":__DIR__"11",                
        "southwest":__DIR__"13",       
        "west":__DIR__"12",

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/doctor/npc/trainee1" : 1,     

]));

  setup();
}


