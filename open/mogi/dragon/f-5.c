//by Casey
inherit ROOM;
#include <room.h>
#include <ansi.h>
void create ()
{
  seteuid(getuid());   
        set("short",MAG"地底牢笼"NOR);
        set("long", @LONG
你来到一间漆黑无比的房间，空气中全是弥漫着腐尸和脓
血的味道就算有着火把，还是不能将四周看的十分清楚，从牢
笼的深处，还传来十分微弱的动物呼吸声...


LONG
        );       
  set("light_up", -1);
 set("evil", 1);
  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"f-7",
 "north" : __DIR__"f-0",
 "east" : __DIR__"f-2",
 


]));
  set("no_transmit",1);
  set("no_auc",1);
 
  
  setup();
}


