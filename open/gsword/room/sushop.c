// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "蜀中商店");
  set ("long", @LONG
这里是蜀中城最大的商店,在这你可以估价(value),
卖断(sell),交易买货(buy),并可以察看这里有什么
货品待售(list).也可以看看这里有卖那些种类的东西(view)
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/su3",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/gsword/mob/keeper" : 1,
]));

  set("light_up", 1);

  setup();
}
