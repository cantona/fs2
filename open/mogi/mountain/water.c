// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","冷泉湖");
        set ("long","
  这里就是冷泉湖了，魔界村唯一水源的来源。天邪峰上的积雪
堆积在这里因为此地的气温稍高故在此形成冰水湖。湖面现在
到处都是浮冰，浮现淡淡的蓝色，看起来还挺漂亮的。\n
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
         "west" :  __DIR__"d",
      ]));

       

        setup();
set ("资源/液体", ([
       "种类" : "水",
       "名称" : "清水",
       "止渴" : 30
  ]) );
}
