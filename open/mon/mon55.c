inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "山谷小径");
  set ("long", @LONG
小小的一条路，是通往三峰当中的天池所必经的小径，慢慢的往
前走去，你只觉得四周草木的生机旺盛了起来，似乎是受到了天池的
影响所致。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bear.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"mon54",
  "south" : __DIR__"mon56",
]));

  setup();
}
