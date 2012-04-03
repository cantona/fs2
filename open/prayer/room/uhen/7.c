//open/prayer/room/uhen/7.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

	此处是玉衡门成员讨论问题的所在，往南则是玉衡门的
	玄关 (open door)．出去大厅后便是玉衡门的练武场．
	往北则是到门主的宝座．两旁站着许多高阶的干部，个
	个面无表情!

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"4",		//门主
        "south":__DIR__"1-door",		//玄关
        "east":__DIR__"6",			//议事厅
        "west":__DIR__"8",			//议事厅
        ]) );

        set("light_up", 1);
        create_door("south","圣火刻纹木雕门", "north",DOOR_CLOSED);
   setup();
}
