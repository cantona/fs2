#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"死灵幽谷"NOR);
set("long",@LONG 
在冰冷的岩壁旁, 坐着一个十颓废的老人, 一动也
不动的与你对视, 他那空洞的眼神让你有种冰冷的感觉
, 地上都是他的排泄物, 看来他似乎没有离开过这里, 
也似乎也没有离开这里的打算...
LONG);
set("outside",1);
set("objects",([
__DIR__"npc/oldman":1,
]));
set("exits",([
"west":__DIR__"g-h08",
]));
set("no_transmit",1);
setup();
}
