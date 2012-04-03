inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "盘天巨木");
  set ("long", @LONG
突然你的眼前为之一亮，一棵高耸入云的巨木树立在你眼前，巨
大的树身快将光线遮的一丝不透，令这里看来有些些的阴寒，仔细看
看树身，有一个洞可以进入这巨大的树身之中。
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fox.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"mon58",
  "east" : __DIR__"mon22",
]));

  setup();
}
