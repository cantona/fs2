//__DIR__"17.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

	玉衡门总管的书房, 总管是门主以下与副门主同一职等的
        干部. 负责门内事务的处理. 由于总管不太喜欢别人来打
        扰. 所以在门口派了一个保镳来过虑一些闲杂人物的进出□
LONG);

        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"16",		//总管房
        "south":__DIR__"18",		//总管房
        "east":__DIR__"15",		//总管房
        "west":__DIR__"19",		//总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/paltoon2" : 1,		//保镳
   		
]));
     
  setup();
}
