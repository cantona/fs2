#include <room.h>
inherit ROOM;

void create()
{
	set("short","土之试炼场");
	set("long",@LONG
	放眼望去尽是无尽的黄土，四周根本寸草不生。
	连风都没有的感觉，有着一种凄凉的感觉。
	四周有的只是无尽的黄土，无边无涯，有人能自己离去吗？
	有一个土之尸魂人在此处把守，没有两把刷子，还是尽快放弃这一个任务吧！
	否则死在这里，可能连装备没机会捡回来了！
	唯一的脱离用的东西可能就是卷轴了！！！
LONG);
      
set("objects",([
    "/open/killer/headkill/npc/e_ghost":1,
		]));
	set("light_up",10);
        setup();
}