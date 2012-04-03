#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "后堂");
  set ("long", @LONG
走进这里, 是一间偏厅, 往回则通往大厅, 两旁各有一条走道,
长廊上铺着上好的大红地毯, 衬托出一股庄严的气氛。

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"np28",
  "east" : __DIR__"np23",
]));
  set("light_up", 1);

  setup();
  replace_program(ROOM);
}
