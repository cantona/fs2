//uhen/1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","门主的闺房");
        set("long",@LONG

	门主的闺房中散发出处子般的幽香，虽然门主已经二十好
	几了，可是还是坚守着自身的清白呢!!那软绵绵的床铺真
	是引人暇思呀!!旁边有一个小小的床头柜．难道里面是放
	着她的贴身衣物??哇~~口水流出来了..........

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south":__DIR__"4",		//门主
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
  setup();
}

