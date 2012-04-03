#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set ("short", "雪苍山山口");
  set ("long", @LONG
这里就是武林一大门派「雪苍派”的入口，，往上走即是通往雪
苍派的道路，途中有八苍派的道路，途中有迷宫阵，传说只有有缘之
人方可到达雪苍苍派 .
LONG);

  set("valid_startroom", 1);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 4 */
  "eastup" : "/open/mon/mon04.c",
  "up" : __DIR__"room4",
  "west" : __DIR__"water2",
  "down" : "/open/main/room/M21",
]));

  setup();
}
