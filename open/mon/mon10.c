inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "登山小径");
  set ("long", @LONG
愈往前走，路愈是难走，前面的路已经愈来愈小条了，若非怀着
绝世轻功的人走上这条路将会倍感吃力，但通往山上的小路依旧清楚
可见。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/bembem.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"mon11",
  "west" : __DIR__"mon08",
]));

  setup();
}
