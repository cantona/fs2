
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit SHOP;

void create()
{
    set("short","魔界村商店");
    set("long","
    这里是魔界村的商店, 由于魔界村特殊的地理位置及特殊的历史
背景, 所以常常有奇奇怪怪的物品在此流通, 也许有你所需要的东东
也说不一定!?
    看看有啥东东(list),卖物品(sell),估价(value)\n\n");
    set("exits",([
        "out" : __DIR__"room-47.c",
        ]));
    set("objects",([
        V_NPC"s_boss" : 1 ,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
