//__DIR__"15.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

        你看到练武场上的两名弟子身形忽左忽右. 原来是
        在练习圣火教的另一高深武学乾坤大挪移. 不过这
        两名弟子似乎还不是很纯熟的样子. 有时竟会撞在
        一起.
        西边是总管的书房. 如果你是男生的话. 最好能知
        难而退. 
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"14",		
	"south":__DIR__"22",		//练武场
	"west":__DIR__"17",	
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee1" : 1,		//弟子
        "/open/prayer/npc/trainee4" : 1,		//弟子
   		
]));
     
  setup();
}
 int valid_leave(object me, string dir)
  {
    if(dir=="west"&&me->query("gender")=="男性")
        return notify_fail("男人是无法进入总管的办公房的 ?\n");
        
   return 1;
}
