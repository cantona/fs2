#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "道路");
  set ("long", @LONG
   这是往杀手练习场的通道，非常的笔直，路旁有许多的树木。
   道路沿着总坛的围墙，笔直地往练习场而去。
   然而，你总觉得树上似乎有人在看你。

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "west" : __DIR__"outr0.c",
      "east" : __DIR__"outr7.c",
]));
  setup();
}