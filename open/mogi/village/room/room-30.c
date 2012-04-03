//room:/u/e/eva/village/room/room-30.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","魔界村道路");
    set("long","
    这里是魔界村的外围道路, 道路是用碎石子铺成的, 但是由于长
久使用的结果, 路面十分的平坦, 往来行人中夹杂了几只魔物, 令人
大吃一惊, 人与魔竟可和平相处!\n\n");
    set("exits",([
        "east" : __DIR__"room-08",
        "west" : __DIR__"room-29",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
