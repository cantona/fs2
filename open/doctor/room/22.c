#include <room.h>
inherit ROOM;
void create()
{
        set("short","总管的书房");
        set("long",@LONG
在总管的书房两旁，站着几位保镳，他们都是由总管亲自在门内
弟子中精心挑选出来的，负责保护总管的安全，以及看管总管书房内
的重要物品。

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southwest":__DIR__"28",        
        "west":__DIR__"23",           

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/doctor/npc/paltoon" : 1,         

]));

  setup();
}


