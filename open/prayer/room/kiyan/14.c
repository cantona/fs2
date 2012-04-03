//open/prayer/room/kiyan/14.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

	此处是明教分部之一的开阳门的练武场, 练武场上总教头正严厉地
	指导着门生们努力练功。往北是开阳门的玄关, 进入后则是大厅。
	西边与东边两侧的走廊是分别通往总管与副门主的办公房.

LONG);

        set("outdoors", "/open/prayer");
        set("no_fight", 0);
	set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1-door",	//玄关
	"south":__DIR__"21",		//练武场
	"east":__DIR__"13",		//走廊
	"west":__DIR__"16",		//走廊
 
        ]) );
        
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/general-officer" : 1,		//总教头
   		
]));
        
          setup();
}
