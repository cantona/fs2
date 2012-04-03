//room:/u/e/eva/village/room/room-06.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","魔界村广场");
    set("long","
    这里是魔界村的市中心, 也就是魔界村最繁荣的地区, 魔界村并
无人管治, 一切的生活秩序全凭村民自发自理, 倒也十分平静融洽,
四周是一片的吵杂声, 有许多千奇百怪不知名的物品, 摆\在你的面前
, 看的令你眼花撩乱!\n\n");
    set("exits",([
        "north" : __DIR__"room-05",
        "east" : __DIR__"room-49",
        "south" : __DIR__"room-07",
        "west" : __DIR__"room-48",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);  
    setup();
}
