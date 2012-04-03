//room:/u/e/eva/village/room/room-52.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit BANK;

void create()
{
    set("short","魔界村钱庄");
    set("long","
    这里是魔界村中的钱庄, 魔界村由于有魔力的保护下, 所以特别
的令人觉得安心, 钱庄老板是一个和蔼可亲的人, 把钱存在这里准没
错!!
    旁边有一个布告(board)!\n\n");
    set("exits",([
        "out" : __DIR__"room-48",
        ]));
    set("objects",([
        V_NPC"b_boss" : 1 ,
        ]));
    set("item_desc",([
        "board" : "
        balance:   查看你现有的存款    convert:  换钱币
        withdraw:  提款                deposit:  存款\n\n",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
