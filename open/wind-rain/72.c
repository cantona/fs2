// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIW"凄沚"NOR);
set ("long", @LONG
此池圆如明月，质地光澈清凛，涌如龙蟒，是全楼的水源。池中青
山斜阻，惜竹窜天，有几百枝杏花如喷火蒸霞一般，水上白华间绿
抚石依泉，水里虹锦彩缎玩流穿阴。
LONG);



  set("exits", ([
            "north" : __DIR__"70",
            "south" : __DIR__"61",
                ]));
  set("objects", ([ 
  __DIR__"npc/white-fish" : 2,
                  ]));
       
        setup();
}
