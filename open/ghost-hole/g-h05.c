#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"死灵幽谷"NOR);
set("long",@LONG
黑暗的空间与周围的岩壁一直给你一种无法言喻的
压迫感, 再加上这里的岩壁似乎特别的潮湿, 让你有一
种挥之不去的厌恶感...
LONG);
set("exits",([
"down":__DIR__"g-h07",
]));
set("no_transmit",1);
setup();
}
