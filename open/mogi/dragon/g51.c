// Room: /u/p/poloer/dragon/g51
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "关卡");
  set ("long", @LONG
这是一楼通往二楼的途中。不过面前有位高大的人挡住你的去路，
他拿着把剑，杀气腾腾的，好有气势。
LONG);
  set("evil", 1);
  set("no_auc", 1);
  set("no_transmit", 1);
  set("light_up", -1);
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"g2-1",
  "down" : __DIR__"g5",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ghostman.c" : 1,
]));

  setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="up"&&present("ghost",environment(me)))
  {

message_vision(HIY"七重冥王怒冲冲说:闲杂人等不得入内。\n"NOR,me);

return 0;
}
return 1;
}
