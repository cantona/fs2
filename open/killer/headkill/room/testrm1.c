#include <room.h>
inherit ROOM;

void create()
{
	set("short","火之试炼场");
	set("long",@LONG
	四周被熊熊的烈火所包围，有一个火之尸魂人在此处把守
	如果没有两把刷子，还是尽快放弃这一个任务吧！
	否则死在这里，可能连装备没机会捡回来了！
	因为这里四周除了熊熊的烈火之外。根本没有任何通路。
	唯一的脱离用的东西可能就是卷轴了！！！
LONG);
      
set("objects",([
    "/open/killer/headkill/npc/f_ghost":1,
		]));
	set("light_up",10);
        setup();
}