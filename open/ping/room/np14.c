#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "回廊");
	set( "build", 2 );
  set ("long", @LONG
走进这里, 有一个转角, 往北是三师兄段远风的住处, 而往东则
是休息室, 长廊上铺着上好的大红地毯, 衬托出一股庄严的气氛。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"np15",
  "west" : __DIR__"np13",
  "north" : __DIR__"np19",
  "east" : __DIR__"np18",
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object me, string dir)
{
         if( dir=="east" && me->query("family/family_name")!="段家" )
      return notify_fail(HIC"洋葱小丸子"NOR"似笑非笑的对你说: 不给进。\n");
        return ::valid_leave(me, dir);
}

