// copy from Room: /d/snow/hockshop.c
// made by chun,and copy by ccat

#include "/open/open.h"
#include <room.h>

inherit "/std/room/hockshop";

void create ()
{
  set ("short", "蜀中当铺");
  set ("long", @LONG
  这是一家中等规模的当铺，老旧的柜台上放着一张木牌(sign),屋
里的光线不是很亮,一块蓝色布帘遮着出入口,上面写着

             ____ 欢迎光临 ____
             
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	在这里你可以典当(pawn)物品或者赎回(redeem)典当
	在这儿的物品，也可以鉴定(value)物品的价值。
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "west" : "/open/gsword/room/su2",
]));


  set("light_up", 2);

  setup();
}
