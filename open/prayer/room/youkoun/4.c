///open/prayer/room/youkoun/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

	此处是瑶光门成员讨论问题的所在，往南则是瑶光门
	的玄关．出去大厅后便是瑶光门的练武场．往北则是
	到门主的宝座．两旁站着许多高阶的干部，个个面无
	表情!

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"2",		//门主
        "south":__DIR__"10",		//练武场
        "northeast":__DIR__"1",			
        "northwest":__DIR__"3",			
        ]) );

        set("light_up", 1);
   setup();
}
