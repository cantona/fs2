// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","芙蓉湖旁");
set ("long", @LONG
    这里是京城里极热闹的地方，有三家肉摊子，一家卖牛肉，一家卖
羊肉，一家卖猪肉。有江湖卖艺的父女，有街头说书，街边论相的江湖
人，还有小乞丐和老乞丐在大唱莲花落。街旁有家酒楼叫「醉星楼”，
进进出出的全是衣饰华贵之人，从楼上可以眺望整个芙蓉湖。
LONG);


  set("exits", ([
            "east"  : __DIR__"room3",
            "enter"  : __DIR__"room5",
            "west"  : __DIR__"room7",
                ]));

       

        setup();
}
