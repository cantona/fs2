#include <room.h>
inherit ROOM;
void create()
{
        set("short","木人场");
        set("long", @LONG

    一股臭药味扑鼻而来，但是这种味道对行医之人来说，可以使他
们更为振奋，而银针门的弟子们也都以行医救世为目标，墙上贴了一
些人体的穴位图。

LONG
        );

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"17",          
        "south":__DIR__"27",          
        "east":__DIR__"20",       

        ]) );
        set("objects",([ /* sizeof() == 2 */
  "/open/doctor/npc/trainee1" : 1,             
  "/open/doctor/npc/trainee2" : 1,            

]));

  setup();
}


