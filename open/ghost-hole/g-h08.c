#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"死灵幽谷"NOR);
set("long",@LONG
四周岩壁不在是冰冷的泉水, 取而代之的是一些
壁画与饰品, 你简直不敢相信你的眼睛, 在这种岩壁
窄道里面竟然会别有洞天!!
LONG);
set("exits",([
"up":__DIR__"g-h07",
"west":__DIR__"g-h09",
"east":__DIR__"g-h10",
]));
set("no_transmit",1);
setup();
}

