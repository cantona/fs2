inherit ROOM;
#include <ansi.h>
void create ()
{
set("short",YEL"幽冥道"NOR);
set("long",@LONG
一阵寒冷的阴风缓缓吹过, 四周的景象十分的
诡异, 似乎不像是在人间一般, 仿佛置身在某种生
物的体内...
LONG);
set("exits",([
"east":__DIR__"g-r02",
]));
set("no_transmit",1);
setup();
}
