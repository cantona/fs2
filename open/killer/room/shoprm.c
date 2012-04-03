// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "二手货专卖处");
  set ("long", @LONG
  这里是杀手们交换二手货的好地方,在这你可以估价(value),卖断(sell),
  交易买货(buy),并可以察看这里有什么货品待售(list).
  采自由贩卖式，所以没有老板，但是有人在暗中监视，以免二手货失踪。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r18.c",
]));

  set("light_up", 1);

  setup();
}