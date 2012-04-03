#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG
这里是一条回廊, 往东南前往段王府的武器室, 而往两旁也各有
一条走道 ,回廊上铺着上好的大红地毯, 衬托出一股庄严的气氛。

LONG);

  set("exits", ([ /* sizeof() == 3 */
  "southeast" : __DIR__"np32",
  "west" : __DIR__"np1",
  "north" : __DIR__"np15",
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object me, string dir)
{
         if( dir=="southeast" && me->query("family/family_name")!="段家" )
         if(!wizardp(me))
      return notify_fail(HIC"洋葱小丸子"NOR"似笑非笑的对你说: 不给进。\n");
        return ::valid_leave(me, dir);
}

