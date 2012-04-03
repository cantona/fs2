//open/prayer/room/tanchun/30.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练功房");
        set("long",@LONG

	天权门私设的练功房, 里头有铁鼎与许多的石碑. 这里是司徒荣亲
	传其家传武学的地方!!那一座石人是专门辅助练功用的!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 1 */
	"south":__DIR__"2",		//门主
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/teststone" : 1,		//石人
   		
]));
     
  setup();
}

