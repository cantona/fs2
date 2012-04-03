//__DIR__"11.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","副门主房");
        set("long",@LONG

	玉衡门副门主的办公房. 西边是通往练武场的方向,
	南边是往副门主的书房. 你看到两个身材高大的圣火
        教弟子站在门口守卫. 而房内的摆设看来相当华丽.

LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"10",		//副门主室
	"south":__DIR__"12",		//副门主室
	"west":__DIR__"13",		//走廊
        "east":__DIR__"9",		//副门主室
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,		//弟子
        "/open/prayer/npc/trainee3" : 1,		//弟子
   		
]));
     
  setup();
}
