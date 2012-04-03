//open/prayer/room/tanchun/18.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","走廊");
        set("long",@LONG

	天权门的走廊，走廊的廊顶是使用上等的西域桧木建造的，随时
	都会散发出特有的桧木香．东边是练武场，顺着走廊则可以到达
	总管的办公房．总管的办公房可是不准男性进入的呢!!

LONG);

        set("outdoors", "/open/prayer");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 2 */
	"east":__DIR__"17",		//走廊
        "south":__DIR__"23",		//走廊
 
        ]) );
        set("objects",([ /* sizeof() ==  1*/
        "/open/prayer/npc/lu" : 1,		
        ]) );        

        
  setup();
}

int valid_leave(object me, string dir)
  {
    if(dir=="south"&&me->query("gender")=="男性")
        return notify_fail("男人是无法进入总管的办公房的 ?\n");
        
   return 1;
}
