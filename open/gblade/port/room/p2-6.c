// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
	set("short","枫林商店");
  set ("long", @LONG
这里是枫林港最大的商店,各种货物都聚集在此,你可以看看
这里有些甚么(list),交易(trade),还有估价(value).

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"p2-1.c",
]));
  set("light_up", 1);

  setup();
}
