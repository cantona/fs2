inherit ROOM;
#include <ansi.h>
void create()
{
set("short","试炼塔传送站");
set("long",@LONG

这里放置着列代挑战天阁的人物，每一张挑战书都有着悠久的
年代历史，看来试炼之塔也是算文明古物了。
在地上散落着一些泛黄的纸(papers)。

LONG);
set("no_die_room",1);
set("no_fight",1);
set("light_up",1);
set("item_desc",([
"papers":"恭喜你获得挑战天阁的资格，但碍于目前NPC数未全，所以先到处为止。\n",
]));
set("no_transmit",1);
set("no_auc", 1);
setup();
}
