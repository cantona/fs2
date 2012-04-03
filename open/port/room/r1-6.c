// copy from Room: /d/snow/hockshop.c
// made by chun,and copy by ccat

#include "/open/open.h"
#include <room.h>

inherit HOCKSHOP;

void create ()
{
	set("short","高记当铺");
  set ("long", @LONG
这里是本地唯一的一家当铺 . 由于枫林港居民大多生活富裕 
 , 物资充足 . 一天难得有几个人来光顾 . 你看见整间店冷冷清
清的 , 与中央大街的喧嚣繁闹简直是两个世界 . 一张木牌(sign)
告诉你这里的服务 .

LONG);

  set("exits", ([ /* sizeof() == 1 */
	"east" : "/open/port/room/r1-3",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	在这里你可以典当(pawn)物品或者赎回(redeem)典当
	在这儿的物品，也可以鉴定(value)物品的价值。
",
]));
  set("light_up", 1);

  setup();
}
