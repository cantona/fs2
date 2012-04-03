inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "长情峰");
  set ("long", @LONG
长白山著名的三峰之一，站在此地，视野所及的，只有美不胜收
能形容，盛传古时候有一对神仙情侣曾在此相识相恋，所以长情峰因
此而得名，若要观看更美的景物，你可以登上峰顶。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/pig.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon47",
  "stand" : __DIR__"mon48",
]));

  setup();
}
