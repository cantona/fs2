//open/prayer/room/punch1-5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "副教主的房间");
  set ("long", @LONG

    你来到了圣火教副教主与副教主夫人的房间，在房门之后有一位婀娜
多姿的妇人，清秀的瓜子脸上有着一丝哀怨的神情，难到副教主夫人有何
难言之隐.... 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/wife2" : 1,        	//军师
]));  
set("exits", ([ /* sizeof() == 1 */
	"out" : "/open/prayer/room/punch1-3",		//`军师
]));
  set("light_up", 1);

  setup();
}
 
