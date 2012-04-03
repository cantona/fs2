//open/prayer/room/westarea/suhock.c
#include "/open/open.h"
#include <room.h>

inherit "/std/room/hockshop";

void create ()
{
  set ("short", "当铺");
  set ("long", @LONG
	这是一家规模不大的当铺, 西域原木的柜台上放着一张木牌
	(sign), 屋里的光线不是很亮, 一块西域手工制的布帘遮着
	出入口, 上面写着

             ____ 愿者上钩,不愿者回头 ____

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "    在这里你可以典当(pawn)物品或者赎回(redeem)典当
        在这儿的物品，也可以鉴定(value)物品的价值。
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"road36",
]));


  set("light_up", 2);

  setup();
}

