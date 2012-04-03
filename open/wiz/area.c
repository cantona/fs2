#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "区域讨论室");
  set ("long", @LONG
这里是巫师聊天讨论的地方之一，如果巫师们讨论跟区域间有关的事
    情, 多半会选择在这儿 post, 例如跨 area 的 quests....
    当然, 如果有巫师想申请负责或增加某 area, 也是在这儿 post.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"entrance",
  "cap" : __DIR__"caproom",
]));

  set("no_clean_up", 0);


  setup();
 call_other("/obj/board/area_b","???");
}
