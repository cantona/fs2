// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIY"遮月天"NOR);
set ("long", @LONG
进入此室，光线仿佛都被吞噬了一般，清凉如夜，忽见微晕，原来  
是一颗大如牛眼的夜明珠，耀如明月，这里便是金风细雨楼一楼楼
主的三大守护天将之一所踞卫的遮月天，若要见到楼主，就必需先
将他打倒。
LONG);



  set("exits", ([
            "north"  : __DIR__"a5",
            "south"  : __DIR__"a6",
            "enter"  : __DIR__"a18",
                ]));

  set("objects", ([ 
  __DIR__"npc/lin-mo" : 1,
                  ]));
       

        setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="enter" && present("lin-mo",environment(me)))
  {

message_vision(HIY"林牧说: 对不起, 楼主正在休息. \n"NOR,me);

return 0;
}
return 1;
}
