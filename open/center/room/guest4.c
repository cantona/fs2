// Room: /u/l/lotus/girl/guest4.c
#include "/open/open.h"

inherit ROOM;

void create ()
{
  set ("short", "喝花酒的地方");
  set ("long", @LONG
  打扮的花枝招展的姑娘们和客人划酒拳, 正招呼着客人进酒。
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"tin2",
  "south" : __DIR__"guest3.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  CENTER_NPC"girls.c" : 2,
]));
  set("light_up", 1);

  setup();
}
