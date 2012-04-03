// Room: /u/l/lotus/girl/tree.c
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "前院");
  set ("long", @LONG
院子四周种满了赭色茶花, 开得相当美. 南面的院子里停了几顶
轿子, 人来人往的, 相当热闹. 你老远就看见大厅里有一位艳光照人
的妇人, 她是如此的吸引你的目光.
LONG);

  set("light_up", 1);
  set("outdoors", "/u/l/lotus/girl");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"tree2.c",
  "west" : __DIR__"guest.c",
  "east" : __DIR__"gstore",
]));

  setup();
}
