inherit ROOM;
#include <ansi.h>
string out();
void create ()
{
set("short", "临时帐棚");
  set ("long", @LONG
这里面堆满了许多的食物跟水，但有些食物已经被海水给
浸湿了，大多不能食用，除了食物外，这帐棚还堆积着不少物
品，或许里面藏有稀世罕见的奇珍异宝也说不定。

LONG);
  set("light_up", 1);
  setup();
}
