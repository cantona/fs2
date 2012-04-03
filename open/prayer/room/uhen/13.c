//__DIR__"13.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG
         
        你看到练武场上两个弟子正互相在切磋武技, 双方你来我往
        顿时拳脚满天飞. 不过旁边的东西也被打坏不少...
        西边是往副门主的办公房.
 
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"11",		//走廊
	"south":__DIR__"20",		//练武场
	"west":__DIR__"14",		//练武场
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
        "/open/prayer/npc/trainee2" : 1,		//弟子
        "/open/prayer/npc/trainee4" : 1,		//弟子
   		
]));

  setup();
}
int valid_leave(object me, string dir)
  {
    if(dir=="east"&&me->query("gender")=="女性")
        return notify_fail("女人是无法进入副门主的办公房的 !\n");
        
   return 1;
}
