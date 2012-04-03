inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "长白山腰");
  set ("long", @LONG
再走一段路，你还是处在长白山腰，看看四周，有一条路看起来
不像通往山上的路，而另一边的路上显得有些崎岖，环看远方，你已
经有种登高的感觉，慢慢的你如深陷云海中，渐渐看不清远方的山，
云气慢慢的向你聚集而来，让你想快快开这里。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bear.c" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "northup" : __DIR__"mon23",
  "west" : __DIR__"mon25",
  "south" : __DIR__"mon21",
]));

  setup();
}
