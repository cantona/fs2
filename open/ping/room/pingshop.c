// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "平南商店");
  set ("long", @LONG
这里是平南城最大的商店,各总货物都聚集在此,你可以看看
这里有些甚么(list),交易(sell),还有估价(value).
也可以看看这里有卖那些种类的东西(view)
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road2",
]));
  set("light_up", 1);

  setup();
}
