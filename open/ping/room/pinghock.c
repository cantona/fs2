// copy from Room: /d/snow/hockshop.c
// made by chun,and copy by ccat

#include "/open/open.h"
#include <room.h>

inherit HOCKSHOP;

void create ()
{
  seteuid(ROOT_UID);
  set ("short", "平南当铺");
  set ("long", @LONG
这是一家普通的当铺,一块蓝布在门口垂下,上面写着白色大
大的__当__字,一张木牌(sign)告诉你这儿的服务,并不而外多收
你钱.
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "	在这里你可以典当(pawn)物品或者赎回(redeem)典当
	在这儿的物品，也可以鉴定(value)物品的价值。
",
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road3",
]));
  set("light_up", 1);

  setup();
}
