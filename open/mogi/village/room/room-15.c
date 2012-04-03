//room:/u/e/eva/village/room/room-15.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","魔界村道路");
    set("long","
    这里是魔界村通往市中心的道路, 越接近市中心越可以看到许多
人聚集, 其中也有不少各式各样的低等魔物, 不免令你惊奇, 两旁有
几幢普通的民房, 不知道住了谁?\n\n");
    set("exits",([
        "north" : __DIR__"room-42",
        "east" : __DIR__"room-16",
        "south" : __DIR__"room-43",
        "west" : __DIR__"room-14",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);  
    setup();
}
