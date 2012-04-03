//room:/u/e/eva/village/room/room-16.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","魔界村");
    set("long","
    这里是魔界村, 魔界村是个由结界保护的村落, 仅有低等魔物及
人类可进出, 向西方望去便是魔界村的中心广场, 看起来相当的热闹
, 两旁的道路则是环绕村子围墙的道路, 往东走可以出魔界村.\n\n");
    set("exits",([
        "north" : __DIR__"room-27",
        "east" : __DIR__"room-17",
        "south" : __DIR__"room-36",
        "west" : __DIR__"room-15",
        ]));
    set("objects",([
         V_NPC"s_genie" : 2 ,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);  
    setup();
}
