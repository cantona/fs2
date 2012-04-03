#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
   这是往杀手练习场的通道，非常的笔直，路旁有许多的树木。
   道路沿着总坛的围墙，笔直地往练习场而去。
   看来快到练习场了，因为前方已经传来阵阵的打杀声。令你不禁手痒难耐。。

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "west" : __DIR__"outr6.c",
      "east" : __DIR__"outr8.c",
]));
  setup();
}