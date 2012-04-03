// Room: /open/poison/room/road11
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "牌楼");
  set ("long", @LONG
眼前有一七间的高大牌楼，其气势非凡，牌楼上有一雕
刻精美的匾额(tablet)，道路两种满了各式各样的花草，北
边有一向北高升的石梯。
LONG);

  set("item_desc",([ /* sizeof() == 1 */
  "tablet" : HIR"
	这是一块古色古香的匾额，上面题道：

	    冥  蛊  魔  教  圣  地

"NOR,
]));

  set("outdoors", "/open/poison");

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/poison/room/road10",
  "northup" : "/open/poison/room/road12",
]));

  setup();
}
