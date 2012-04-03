//__DIR__"18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","总管的书房");
        set("long",@LONG

	玉衡门总管的书房, 书架上放满着一些关于历吏方面
        的书籍. 看来总管在闲暇之余可能对这方面满有兴趣□        你看到一个保镳正翻着左传, 聚精会神的阅读着. 
LONG);

        set("exits", ([ /* sizeof() == 2 */
        "northwest":__DIR__"19",		//总管房
        "north":__DIR__"17",		//总管房
       
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/paltoon1" : 1,		//保镳
   		
]));
     
  setup();
}
