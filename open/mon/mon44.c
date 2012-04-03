inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "西峰道");
  set ("long", @LONG
往西边走，一是条较为平顺的道路，两旁的风景已是雪白一片，
几乎看不到任何生物的踪迹，凄冷的寒风更显得路途的悲凉与大自然
的无情。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/snow-bear.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon38",
  "west" : __DIR__"mon47",
]));

  setup();
}
