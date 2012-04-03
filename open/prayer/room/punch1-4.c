//open/prayer/room/punch1-4 

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "圣火教总坛");
  set ("long", @LONG

    强烈的白色映入你眼帘，你注意到这里有一个红木窗棂的窗子，屋子
的里有几个书柜，书柜上有着不少的宝典秘笈，而在书柜前有一个风华绝
代的中年妇人，手中拿着一本孙子兵法，口里念念有词，想必是又想到绝
妙好计了。 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/literate" : 1,        	//军师
]));
  set("exits", ([ /* sizeof() == 3 */
	"enter" : "/open/prayer/room/punch1-6",		//军师的房间
	"south" : "/open/prayer/room/punch1-8",		//大听
	"east" : "/open/prayer/room/punch1",		//帮主
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me,string dir)
{
  if(dir=="enter"&&me->query("class")!="prayer")
  return notify_fail("非圣火教徒不得进入!\n");
  return ::valid_leave(me,dir);
}

