//open/prayer/room/youkoun/20.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        一进入瑶光门, 就可看到宽阔的练武场! 由于瑶光门只收
        女弟子, 因此广场上练武的也都是女性! 微风吹来, 只闻
        到一股汗臭与体香混杂的奇妙味道..

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"17",            //练武场
        "south":__DIR__"2-door",        //练武场
        "west":__DIR__"21",             //练武场
        "east":__DIR__"19",             //练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee3" : 1,                //弟子
        "/open/prayer/npc/trainee1" : 1,                //弟子
                
]));

        create_door("south","圣火刻纹精钢大门", "north",DOOR_CLOSED);     
  setup();
}
