inherit ROOM;
#include <ansi.h>

void create()
{
	set("short",BBLU+YEL"震邪道"NOR);
	set("long",@LONG
你的头顶上, 正漂浮着有如波浪斑波动的细沙, 你有一种直觉, 
那里似乎就是通往堆满了沙堆的砖瓦屋内; 在你眼前, 东南西北四
个方向各有一扇木门, 除此之外, 什么也没有... 
LONG);
	set("exits",([
"jump":__DIR__"e02",
"north":__DIR__"room",
"south":__DIR__"room",
"east":__DIR__"room",
"west":__DIR__"room",
]));
	set("no_transmit",1);
	setup();
}