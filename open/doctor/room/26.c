#include <room.h>
inherit ROOM;
void create()
{
        set("short","木人场");
        set("long", @LONG

    墙壁上贴满了人体的穴道图和解说，以便弟子门熟记，想正式成
为银针门入意门弟子，必须先熟记这些穴位，看！那不是有两三个弟
子在那儿喃喃自语，好像背的挺认真的嘛！

LONG
        );

        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"20",            
        "south":__DIR__"2-door",       
        "west":__DIR__"27",            
        "east":__DIR__"25",         

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/doctor/npc/trainee2" : 1,             
        "/open/doctor/npc/trainee1" : 1,                

]));
        create_door("south","红木刻纹大门", "north",DOOR_CLOSED);

  setup();
}


