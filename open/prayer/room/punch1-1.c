//open/prayer/room/punch1-1 

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "教主的房间");
  set ("long", @LONG

    你现在所在的位置，正是圣火教主的房间，这是教主与教主夫人休息
的地方，四周传来阵阵的花香，浓郁的花香使你感觉到，身在御花园一般
，仔细一闻还来阵阵的花香是来自教主夫人的身上...... 

LONG);

  set("exits", ([ /* sizeof() == 1 */
        "out" : "/open/prayer/room/punch1",             //帮主
]));
   set("light_up", 1);

  setup();
}
 
