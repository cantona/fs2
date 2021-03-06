// Room: /open/prayer/room/tangi/tangi1-15.c

#include <room.h>
#include "/open/open.h"    
inherit ROOM;

void create()
{
	set("short", "议事厅");
	set("long", @LONG
此处是天机门成员讨论问题的所在，往南则是天机门的玄关(open door)．出去大厅后
便是天机门的练武场．往北则是到门主的宝座．两旁站着许多高阶的干部，个个面
无表情!
LONG
	);
	set("item_desc", ([
	  "south" : (: look_door,     "south" :),  
]));
	set("outdoors", "/open/prayer/room"); 
	set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"tangi1-14",
  "south" : __DIR__"tangi1-17",
  "north" : __DIR__"tangi1-12.c",
  "east" : __DIR__"tangi1-16",
]));
	set("light_up", 1);
	set("no_clean_up", 0);

	create_door("south","圣火刻纹木雕门", "north",DOOR_CLOSED);
	setup();
	}
