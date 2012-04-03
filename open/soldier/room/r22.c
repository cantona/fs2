
#include <room.h>
#include "../../open.h"
inherit ROOM;

void create ()
{
  set("short","打铁室");
  set ("long", @LONG

    你在还没进来之前就听到打铁的声音轰轰作响，这里
充满了各式各样的兵器，以矛、枪、戢类就多，在一旁有
一个粗壮的人在玩弄着兵器，边玩边打铸兵器，你心想这
人的家伙那么多，不如先闪为妙。。。
你可以(list)看看有啥武器或(receive)领取武器

LONG);

  set("exits", ([ /* sizeof() == 3 */
        "out":__DIR__"r28",
]));
  set("objects", ([ /* sizeof() == 1 */
    "/open/soldier/npc/piko":1,
]));

  set("no_light",1);
  setup();
}
 
