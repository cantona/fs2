//open/prayer/room/tangi/tangi1-8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","石牢");
        set("long",@LONG
此处是明教分部之一的天机门内部的石牢.这位犯人是一位天机门的弟子,看他伤痕累累,
一定是遭受到不少的虐待吧!!不过他那个样子真是让人有股想凌虐他的冲动!! 
LONG);
        set("exits", ([ /* sizeof() == 1 */
        "south":"/open/prayer/room/tangi/tangi1-9",		//地牢
        ]) );
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/criminal2" : 1,		//人犯
        ]) );

   setup();
}
