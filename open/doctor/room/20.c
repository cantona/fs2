#include <room.h>
inherit ROOM;
void create()
{
        set("short","木人场");
        set("long", @LONG

    这里摆了好几个木人，木身上面画满了人体各大脉门和穴道，学
针灸的最好方法，就是利用这些木人来揣摩实体，看几个弟子拿支针
在那抸啊抸的，虽然样子看起来有点矬，不过熟能生巧，往后行医时
便能准确的认出各大穴位，一旁是华陀的爱徒，正在那细心的指导师
弟们。

LONG
        );

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 4 */
           "north":__DIR__"16",        
        "south":__DIR__"26",           
        "west":__DIR__"21",           
        "east":__DIR__"19",      

        ]) );
        set("light_up", 1);
        set("objects", ([ /* sizeof() == 2 */
  "/open/doctor/npc/su.c" : 1,
  "/open/doctor/npc/trainee1.c" : 1,
]));

  setup();
}


