// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","牌楼前");
set ("long", @LONG
    这里已到了湖的尽头，眼前是「金风细雨楼”的牌楼，围墙后面
有座巨大的楼，在湖畔雾气迷蒙下，外表蒙蒙晃晃，分不清是曙色、
黎明，还是醒的边缘。谁又知道，曾经有多少权谋在楼里策画，有多
少不为人知的江湖传闻在里面，有多少身怀绝技的人为此楼效命?
LONG);



  set("exits", ([
            "east"  : __DIR__"room8",
            "enter"  : __DIR__"1",
                ]));

       

        setup();
}
