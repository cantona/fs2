#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "回廊");
  set ("long", @LONG
走进这里, 是一条回廊, 往前通往前庭及大厅, 而往两旁也各有
一条走道, 回廊上铺着上好的大红地毯, 衬托出一股庄严的气氛。

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"np3",
  "north" : __DIR__"np4",
    "out" : __DIR__"pingking",
  "east" : __DIR__"np2",
]));
  set("light_up", 1);

  setup();
}
