// Room: /u/b/blue/room/star1.c
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走道");
  set ("long", @LONG
你刚刚迈入七星塔第七层, 在此处你看到了满地的武器, 
四周漆黑如夜, 伸手不见五指, 远远望去, 一道光线迎面而来
, 令你想立刻飞奔过去, 只见一阵阵的阴风扑面而来, 此时才
发觉有许多鬼影向你这奔来．
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"room14.c",
  "down" : __DIR__"star6.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/star/npc/corpse.c" : 4,
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me, string dir)
{
if( dir=="north" && present("corpse",environment(me)))
    if(!me->query_temp("allow_read",1))
   return notify_fail("你以为你能活得过去吗??"
+RANK_D->query_respect(me)+"你去死吧!\n");
return ::valid_leave(me,dir);
}
