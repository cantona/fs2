#include <room.h>
inherit ROOM;
void create()
{
        set("short","总管的书房");
        set("long",@LONG
因为总管不喜欢男性进入他的书房，所以他挑选的保镳也都是女性
，不过可别小看她们喔，打起架来可是一点也不输给男性喔。

LONG);

        set("exits", ([ /* sizeof() == 2 */
        "southeast":__DIR__"28",       
        "east":__DIR__"23",         

        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
  "/open/doctor/npc/paltoon" : 2,                        

]));

  setup();
}


