// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","芙蓉湖旁");
set ("long", @LONG
    沿岸榴花似火，楑柳成荫，远山近水，漠漠如烟。在这大城里，
是活力的泉源，暮气的蒸笼，既是功名的温床，也是罪恶的渊薮；是
英雄得志之地，亦是志士颓靡之所，好汉落魄的地方。
LONG);


  set("exits", ([
            "east"  : __DIR__"room2",
            "west"  : __DIR__"room4",
                ]));

       

        setup();
}
