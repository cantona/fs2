#include <room.h>
inherit ROOM;
void create()
{
        set("short", "木人场");
        set("long", @LONG

    这里摆了好几个木人，木身上面画满了人体各大脉门和穴道，学
针灸的最好方法，就是利用这些木人来揣摩实体，看几个弟子拿支针
在那抸啊抸的，虽然样子看起来有点矬，不过熟能生巧，往后行医时
便能准确的认出各大穴位。

LONG
        );

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"15",         
        "south":__DIR__"25",        
        "west":__DIR__"20",       

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/doctor/npc/trainee1" : 1,             
  "/open/doctor/npc/trainee2" : 1,       

]));

  setup();
}


