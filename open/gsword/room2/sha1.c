#include <ansi.h>
inherit ROOM;
void create()
{
   set("short", HIW"仙剑峡谷"NOR);
   set("long", @LONG
一个杂草丛生的峡谷.四周山壁耸立..看起来似乎无法离开此处...
由前面的走道..我想你只能向前走了.。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
 "north":"/open/gsword/room2/sha2.c",

]));
        set("light_up",1);
        set("no_transmit", 1);
        setup();
}

