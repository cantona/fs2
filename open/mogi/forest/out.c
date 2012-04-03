
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "魔森林尽头");
  set ("long","
这里就是魔森林的尽头了，只见前方横着一张大大的蜘蛛网，蜘蛛网上
爬着一只巨大的蜘蛛，它就是传说中的魔域入口看守者，网中人!!
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  "enter":__DIR__"room58",  
    "west" : __DIR__"room57",
  "回到人间" : "/open/center/room/inn",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/netor.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="enter"&&present("netor",environment(me)))
  {

message_vision(HIY"网中人说：‘让我试试你的能耐吧\n"NOR,me);

return 0;
  }
       if(dir=="回到人间"){
me->set("startroom","/open/common/room/inn");
message_vision(HIY"一阵天悬地转,$N已回到人间了\n"NOR,me);
return 1;
                          }  
return 1;
}
