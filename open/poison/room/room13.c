// Room: /open/poison/room/room12
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "说法堂侧厅");
  set ("long", @LONG
这里是说法堂侧厅，连同正厅形成一个宽广舒适的大厅
堂，平常会有许多教众在此听法，学习各种武学、知识和技
能。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"r1.c",
  "north" : __DIR__"room11",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/envoy2" : 1,
]));

  setup();
}
