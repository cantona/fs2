#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "草原");
  set ("long", @LONG
荒芜的草地, 仿佛被死神所诅咒一般, 完全没有任何生命
的迹象, 在草地的中央摆着一个骷髅(skeleton), 感觉上十分
的怪异。
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "skeleton" : "一个奇异的骷髅, 完全看不出来是那一种生物的尸骨...\n",
]));
  set("outdoors", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/mon/npc/wolf.c" : 6,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/mon/mon57",
]));

  setup();
}
