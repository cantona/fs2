//open/prayer/room/uhen/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练功房");
        set("long",@LONG

	练功房宽约四丈，非常宽畅通!!房中四处摆满了兵器
	，十八般武器样样具全．还有许多的木人桩，专门用
	来训练门生的基础功夫．

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "east":__DIR__"5",		//左护法
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
  setup();
}

