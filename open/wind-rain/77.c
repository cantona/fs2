// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","回翡小迳");
set ("long", @LONG
凄沚清流一带，势若游龙，两边石栏上皆系水晶玻璃各色风灯，点
如银光雪亮，上面枫槐诸树，虽无花叶却用各色绸绫纸绢及通草为
花，更兼池中荷荇上下争辉水天彩焕。牡丹烂丽，白芋漂洁，新绿
涨添，盈盈汀霈。
LONG);



  set("exits", ([
            "south" : __DIR__"78",
            "east"  : __DIR__"76",
                ]));
  set("objects", ([ 
  __DIR__"npc/gold-guard-out" : 3,
                  ]));        

        setup();
}
