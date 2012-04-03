//open/prayer/room/tanchun/25.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","练武场");
        set("long",@LONG

	天权门的练武场, 练武场上的弟子正在互相套招. 传闻
	圣火教的圣火奇功乃是专为圣火令所创的武学棍法, 攻
	势诡异非常, 配合乾坤大挪移的步法, 更能够巧妙的攻
	击敌人于无形!!

LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"19",		
        "west":__DIR__"26",	
 
        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 3 */
	"/open/prayer/npc/trainee1" : 1,	//弟子
	"/open/prayer/npc/trainee4" : 1,	//弟子
	"/open/prayer/npc/man4" : 1,		//教头   		
]));
     
  setup();
}
