#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"死灵幽谷"NOR);
set("long",@LONG
四周的岩壁不断的流出冰冷的泉水, 你稍微嚐了
一下, 泉水里面挟带着许多的砂石, 根本不能喝, 隐
隐约约之间, 你仿佛听到了人的哀嚎声, 真不敢相信
这里会有人居住!!
LONG);
set("exits",([
"up":__DIR__"g-h05",
"down":__DIR__"g-h08",
]));
set("no_transmit",1);
setup();
}
