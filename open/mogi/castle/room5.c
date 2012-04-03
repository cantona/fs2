// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","古堡一楼");
        set ("long","阴阴沈沈的古堡一楼里，到处是魍声魅影，寒气极是煞人。在这种地方
你觉得自身的\功力\似乎一点一滴慢慢地流失掉，心神也不自禁地恐慌
起来。你赶忙定下心来凝聚内力已应付不可未知的妖魔鬼怪。
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "south" :  __DIR__"room4",
            "north"  : __DIR__"room6",
            
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/mob3" : 4,
      ]));

        setup();
}
