
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "孤身不过廊");
  set ("long","这条长廊就是古堡里有名的「孤身不过”长廊，顾名思义，意指若你
想孤身闯过这道长廊简直难如登天。沿途不但有越来越多的妖魔镇守
更不知道那里会有暗器射出。虽然长廊不见的很长，但是恐怖的程度
会让你有永远走不完的惊栗。
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "north" : __DIR__"room28",
  "south" : __DIR__"room26",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/mob5.c" : 3,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="north"&&present("ghost",environment(me)))
  {

message_vision(HIY"八指飞魔冷笑道:「先过我这关吧！”\n"NOR,me);

return 0;
}
return 1;
}
