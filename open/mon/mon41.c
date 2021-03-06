inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "白怀峰");
  set ("long", @LONG
长白山著名的三峰之一，站在此地，视野所及的，只有美不胜收
能形容，在三峰之间有一个天池，但是原本的池水因经年累月，已经
干涸了不少，在原本干涸的地方却长出了一片草原，登上最高峰，可
以观赏到更美的景色。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bear.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "stand" : __DIR__"mon49",
  "south" : __DIR__"mon46",
]));

  setup();
}
